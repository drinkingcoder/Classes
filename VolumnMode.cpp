//
//  VolumnMode.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#include "VolumnMode.h"

const int VolumnMode::On=0;
const int VolumnMode::Off=1;

int VolumnMode::m_VolumnMode=VolumnMode::On;

int VolumnMode::getVolumnMode()
{
  return m_VolumnMode;
}

void VolumnMode::changeVolumnMode()
{
    if( m_VolumnMode == On ) m_VolumnMode = Off;
    else m_VolumnMode = On;
}