//
//  MenuCtrlLayer.h
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __HelloWorldDemo__MenuCtrlLayer__
#define __HelloWorldDemo__MenuCtrlLayer__

#include <stdio.h>

USING_NS_CC;

class MenuCtrlLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(MenuCtrlLayer);
private:
    void clickGameStart();
    void clickGameMode();
    void clickSettings();
    void clickVolumnMode();
    void clickRank();
    void clickExit();
};

#endif /* defined(__HelloWorldDemo__MenuCtrlLayer__) */
