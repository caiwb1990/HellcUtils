//
//  HellcUtils.cpp
//  HellcUtils_2dx
//
//  Created by wenbin.cai on 15/3/16.
//
//

#include "HellcUtils.h"

//获得时间
string HellcUtils::getCurrentTime()
{
    time_t t;
    time(&t);
    char tmp[64];
    strftime(tmp,sizeof(tmp),"%Y-%m-%d %X",localtime((&t)));
    string timeStr=tmp;
    return timeStr;
}
