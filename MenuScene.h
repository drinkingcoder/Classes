//
//  MenuScene.h
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __HelloWorldDemo__MenuScene__
#define __HelloWorldDemo__MenuScene__

#include <stdio.h>
#include "MenuSettingsLayer.h"
#include "MenuCtrlLayer.h"
#include "MenuGameModeLayer.h"

USING_NS_CC;

class MenuScene : public cocos2d::Scene, public MenuSettingsLayerDelegate, public MenuCtrlLayerDelegate, public MenuGameModeDelegate
{
public:
    virtual bool init();
    CREATE_FUNC(MenuScene);
    virtual void menuSettingsLayerReturn();
    virtual void menuGameModeReturn();
private:
    virtual void menuCtrlLayerClickGameMode();
    virtual void menuCtrlLayerClickSettings();
    MenuSettingsLayer* m_MenuSettingsLayer;
    MenuCtrlLayer* m_MenuCtrlLayer;
    MenuGameModeLayer* m_MenuGameModeLayer;
};

#endif /* defined(__HelloWorldDemo__MenuScene__) */
