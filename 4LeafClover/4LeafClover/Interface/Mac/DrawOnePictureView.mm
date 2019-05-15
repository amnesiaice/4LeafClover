//
//  ViewController.m
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/14.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#import "DrawOnePictureView.h"
#import "MyTest.hpp"
@implementation DrawOnePictureView

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}
- (IBAction)TestPrint:(id)sender {
    MyTest a;
    a.TestPrint();
}


@end
