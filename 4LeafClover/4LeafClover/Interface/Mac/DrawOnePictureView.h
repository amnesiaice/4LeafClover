//
//  ViewController.h
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/14.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DrawOnePictureView : NSViewController
@property (weak) IBOutlet NSImageView *renderedImageView;

- (IBAction)TestPrint:(id)sender;
- (IBAction)DrawTestPicture:(id)sender;
- (int**)PrepareImageArray:(float**)inImageArray;

@end

