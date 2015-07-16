#ifndef __MenuCtrlLayer__
#define __MenuCtrlLayer__

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class MenuCtrlLayerDelegate
{
public:
    virtual void menuCtrlLayerClickSettings()=0;
    virtual void menuCtrlLayerClickGameMode()=0;
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
    void clickRank();
    void clickExit();
    MenuCtrlLayerDelegate* m_MenuCtrlLayerDelegate;
};

#endif /* defined(__GameDemo__MenuCtrlLayer__) */
