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
#include <vector>
#include <string>
using namespace std;
class DrawOnePictureInterface
{
public:
    struct InterfaceColor//color value of 0-1
    {
        float colorR;
        float colorG;
        float colorB;
        float alphaValue;
    };
    
    //interface
    void TestPrint();
    void TestPrint(string str);
    void DrawOnePicture();
    float* GetPoint(int inX, int inY);
    void SetPoint(int inX, int inY, InterfaceColor inColor);
    
    
private:
    //property
    vector<vector<InterfaceColor>> mImageArray;//mImageArray[x][y]
};
#endif /* Test_hpp */
