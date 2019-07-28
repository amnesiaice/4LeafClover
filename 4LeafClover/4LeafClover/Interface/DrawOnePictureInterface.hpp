//
//  Test.hpp
//  4LeafClover
//
//  Created by Amn Ice on 2019/5/15.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#ifndef DrawOnePictureInterface_hpp
#define DrawOnePictureInterface_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "../Common/Common.h"
using namespace std;
class DrawOnePictureInterface
{
public:
    DrawOnePictureInterface()
    {
        //init empty image
        for(int i=0;i<400;i++)
        {
            vector<FloatColor> toBePushedVector;
            for(int j=0;j<300;j++)
                toBePushedVector.push_back(FloatColor());
            mImageArray.push_back(toBePushedVector);
        }
    }
    
    //interface
    void TestPrint();
    void TestPrint(string str);
    void DrawOnePicture();
    
    //class method
    float* GetPoint(int inX, int inY);
    void SetPoint(int inX, int inY, FloatColor inColor);
    int GetWidth();
    int GetHeight();
    
    
private:
    //property
    vector<vector<FloatColor>> mImageArray;//mImageArray[x][y]
};
#endif /* DrawOnePictureInterface_hpp */
