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
float ** DrawOnePictureInterface::SetImage(float ** inArray)
{
    return mImageArray;
}
