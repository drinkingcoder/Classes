//
//  VolumnMode.h
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#ifndef __HelloWorldDemo__VolumnMode__
#define __HelloWorldDemo__VolumnMode__

#include <stdio.h>

class VolumnMode
{
public:
    static void changeVolumnMode();
    static int getVolumnMode();
    static int On,Off;
private:
    static int m_VolumnMode;
};

int VolumnMode::On=0;
int VolumnMode::Off=1;

int VolumnMode::m_VolumnMode=0;

#endif /* defined(__HelloWorldDemo__VolumnMode__) */
