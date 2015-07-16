//
//  PositionTable.h
//  GameDemo
//
//  Created by drinking on 7/16/15.
//
//

#ifndef __GameDemo__PositionTable__
#define __GameDemo__PositionTable__

#include <stdio.h>

class PositionTable
{
public:
    static int getPixelX(int x,int y);
    static int getPixelY(int x,int y);
    const static int MaxColumns,MaxRows;
};

#endif /* defined(__GameDemo__PositionTable__) */
