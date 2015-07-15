//
//  GameCtrlLayer.h
//  GameDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __GameDemo__GameCtrlLayer__
#define __GameDemo__GameCtrlLayer__

#include <stdio.h>

class GameCtrlLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(GameCtrlLayer);
private:
    void clickBackToMenu();
};

#endif /* defined(__GameDemo__GameCtrlLayer__) */
