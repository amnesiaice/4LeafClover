//
//  ViewController.m
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/14.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#import "DrawOnePictureView.h"
#import "DrawOnePictureInterface.hpp"

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
    DrawOnePictureInterface testIcon;
    testIcon.TestPrint("Draw a test picture");
    
    //prepare image
//    CIImage *preTestImage = [[CIImage alloc] initWithColor:CIColor.blueColor];

    const int lWidth = 480;
    const int lHeight = 330;
    NSSize imageSize = {.height = lHeight, .width = lWidth};
    NSImage *testImage = [[NSImage alloc] initWithSize:imageSize];


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
    
    [testImage addRepresentation:rep];
 
//    NSGraphicsContext *ctx = [NSGraphicsContext graphicsContextWithBitmapImageRep: rep];
    
//    [NSGraphicsContext saveGraphicsState];
//    [NSGraphicsContext setCurrentContext: ctx];
    
     struct Pixel { uint8_t r, g, b, a; };
     struct Pixel *pixels = (struct Pixel *)[rep bitmapData];
    struct Pixel colorpixels;
    colorpixels.r =255;
    colorpixels.g =255;
    colorpixels.b =255;
    colorpixels.a =255;
    for(int y = 0; y < lHeight; y++)
        for(int x = 0; x < lWidth; x++)
        {
            int index = x + y * lWidth;
            // Use pixels[index] here
            pixels[index] = colorpixels;
        }
    
    
    //prepare ImageView
//    self.renderedImageView.layer.backgroundColor = CGColorGetConstantColor(kCGColorWhite);
    self.renderedImageView.image = testImage;
//    [testImage drawAtPoint: NSZeroPoint fromRect: NSZeroRect operation: NSCompositingOperationCopy fraction: 1.0];
    
}


@end
