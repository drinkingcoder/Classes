//
//  VolumnMode.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#include "VolumnMode.h"

int VolumnMode::getVolumnMode()
{
    return m_VolumnMode;
}

void VolumnMode::changeVolumnMode()
{
    if( m_VolumnMode == On ) m_VolumnMode = Off;
    else m_VolumnMode = On;
}