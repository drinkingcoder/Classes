#ifndef __GameCtrlLayer__
#define __GameCtrlLayer__

#include <stdio.h>
#include "cocos2d.h"

class GameCtrlLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(GameCtrlLayer);
private:
    void clickBackToMenu();
};

#endif /* defined(__GameDemo__GameCtrlLayer__) */
