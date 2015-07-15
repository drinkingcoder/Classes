//
//  MenuCtrlLayer.h
//  GameDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __GameDemo__MenuCtrlLayer__
#define __GameDemo__MenuCtrlLayer__

#include <stdio.h>

USING_NS_CC;

class MenuCtrlLayerDelegate
{
public:
    virtual void menuCtrlLayerClickSettings()=0;
};

class MenuCtrlLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(MenuCtrlLayer);
    void setSettingsDelegate(MenuCtrlLayerDelegate* delegate) { m_MenuCtrlLayerDelegate = delegate; }
private:
    void clickGameStart();
    void clickGameMode();
    void clickSettings();
    void clickVolumnMode();
    void clickRank();
    void clickExit();
    MenuCtrlLayerDelegate* m_MenuCtrlLayerDelegate;
};

#endif /* defined(__GameDemo__MenuCtrlLayer__) */
