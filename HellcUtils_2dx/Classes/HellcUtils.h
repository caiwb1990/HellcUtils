//
//  HellcUtils.h
//  HellcUtils_2dx
//
//  Created by wenbin.cai on 15/3/16.
//
//

#ifndef __HellcUtils_2dx__HellcUtils__
#define __HellcUtils_2dx__HellcUtils__

#include "cocos2d.h"

using namespace std;


class HellcUtils
{
public:
    //获得时间
    static string getCurrentTime();
    
    //Win32将GBK编码转换为UTF-8
    static string gbk_to_utf8(const string text);
};
#endif /* defined(__HellcUtils_2dx__HellcUtils__) */
