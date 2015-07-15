//
//  GameCtrlLayer.h
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __HelloWorldDemo__GameCtrlLayer__
#define __HelloWorldDemo__GameCtrlLayer__

#include <stdio.h>

class GameCtrlLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(GameCtrlLayer);
private:
    void clickBackToMenu();
};

#endif /* defined(__HelloWorldDemo__GameCtrlLayer__) */
