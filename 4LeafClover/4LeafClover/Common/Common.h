//
//  Common.h
//  4LeafClover
//
//  Created by Amn Ice on 2019/7/28.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#ifndef Common_h
#define Common_h

#include <stdint.h>

//struct to represent color, color value of 0-1
struct FloatColor
{
    float colorR=1.0;
    float colorG=1.0;
    float colorB=1.0;
    float alphaValue=1.0;
};

//for bitmap data read
struct UInt8Color
{
    uint8_t colorR =255;
    uint8_t colorG =255;
    uint8_t colorB =255;
    uint8_t alphaValue =255;
};

UInt8Color FloatColorToUint8Color(FloatColor inColor);
#endif /* Common_h */
