//
//  Test.cpp
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/15.
//  Copyright © 2019 Amn Ice. All rights reserved.
//
#include<iostream>
#include "DrawOnePictureInterface.hpp"

using namespace std;
void DrawOnePictureInterface::TestPrint()
{
    cout<<"Print test"<<endl;
}
void DrawOnePictureInterface::TestPrint(string str)
{
    cout<<"Print test: "<<str<<endl;
}
void DrawOnePictureInterface::DrawOnePicture()
{
    cout<<"Draw one picture test"<<endl;
}

float* DrawOnePictureInterface::GetPoint(int inX, int inY) {
    float lColorR = mImageArray[inX][inY].colorR;
    float lColorG = mImageArray[inX][inY].colorG;
    float lColorB = mImageArray[inX][inY].colorB;
    float lAlphaValue = mImageArray[inX][inY].alphaValue;
    float* outColor = new float[4];
    outColor[0] = lColorR;
    outColor[1] = lColorG;
    outColor[2] = lColorB;
    outColor[3] = lAlphaValue;
    return outColor;
}

void DrawOnePictureInterface::SetPoint(int inX, int inY, InterfaceColor inColor)
{
    mImageArray[inX][inY]=inColor;
}
;
