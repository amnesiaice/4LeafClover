//
//  Test.hpp
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/15.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#ifndef MyTest_hpp
#define MyTest_hpp

#include <stdio.h>
#include <string>
using namespace std;
class DrawOnePictureInterface
{
public:
    void TestPrint();
    void TestPrint(string str);
    void DrawOnePicture();
    float** SetImage(float** inImage);
    
        //property
private:
    float** mImageArray;
};
#endif /* Test_hpp */
