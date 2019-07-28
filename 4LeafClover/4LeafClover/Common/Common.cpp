//
//  Common.cpp
//  4LeafClover
//
//  Created by Amn Ice on 2019/7/28.
//  Copyright © 2019 Amn Ice. All rights reserved.
//

#include <stdio.h>
#include "Common.h"
UInt8Color FloatColorToUint8Color(FloatColor inColor)
{
    UInt8Color outColor;
    outColor.colorR=inColor.colorR*255;
    outColor.colorG=inColor.colorG*255;
    outColor.colorB=inColor.colorB*255;
    outColor.alphaValue=inColor.alphaValue*255;
    return outColor;
}
