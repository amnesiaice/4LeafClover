//
//  ViewController.h
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/14.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <vector>
#import "DrawOnePictureInterface.hpp"


@interface DrawOnePictureView : NSViewController
@property (weak) IBOutlet NSImageView *renderedImageView;
@property DrawOnePictureInterface iconInterface;

- (IBAction)TestPrint:(id)sender;
- (IBAction)DrawTestPicture:(id)sender;

- (void)_UIDrawPicture;
@end


