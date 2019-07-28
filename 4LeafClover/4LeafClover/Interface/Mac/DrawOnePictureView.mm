//
//  ViewController.m
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/14.
//  Copyright © 2019 Amn Ice. All rights reserved.
//
#import "DrawOnePictureView.h"


@implementation DrawOnePictureView
//MARK: Properties

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}
- (IBAction)TestPrint:(id)sender {
    DrawOnePictureInterface testIcon;
    testIcon.TestPrint();
}

- (IBAction)DrawTestPicture:(id) sender {
    [self _UIDrawPicture];
    
}

- (void)_UIDrawPicture
{
    self.iconInterface.TestPrint("Call _UIDrawPicture to draw buffer to NSView");
    
    //prepare const
    CGFloat lWidth = self.iconInterface.GetWidth();
    CGFloat lHeight = self.iconInterface.GetHeight();
    
    //prepare image
    NSSize imageSize = {.height = lHeight, .width = lWidth};
    NSImage *toDrawImage = [[NSImage alloc] initWithSize:imageSize];
    
    //prepare rep(bitmap data for the image)
    NSBitmapImageRep *rep = [[NSBitmapImageRep alloc]
                             initWithBitmapDataPlanes: NULL
                             pixelsWide: lWidth
                             pixelsHigh: lHeight
                             bitsPerSample: 8
                             samplesPerPixel: 4
                             hasAlpha: YES
                             isPlanar: NO
                             colorSpaceName: NSDeviceRGBColorSpace
                             bytesPerRow: lWidth * 4
                             bitsPerPixel: 32];
    
    [toDrawImage addRepresentation:rep];
    
    //set rep data with self.iconInterface.mImageArray
    UInt8Color *pixels = (UInt8Color *)[rep bitmapData];
    FloatColor colorpixels;
    for(int y = 0; y < lHeight; y++)
    {
        for(int x = 0; x < lWidth; x++)
        {
            int index = x + y * lWidth;
            // Use pixels[index] here
            pixels[index] = FloatColorToUint8Color(colorpixels);
        }
    }
    
    //assign image view with rep data
    self.renderedImageView.image = toDrawImage;

}

@end
