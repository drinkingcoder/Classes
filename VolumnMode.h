//
//  VolumnMode.h
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#ifndef __GameDemo__VolumnMode__
#define __GameDemo__VolumnMode__

#include <stdio.h>

class VolumnMode
{
public:
    static void changeVolumnMode();
    static int getVolumnMode();
    static const int On,Off;
    static int m_VolumnMode;
};

#endif /* defined(__HelloWorldDemo__VolumnMode__) */
