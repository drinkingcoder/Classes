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

USING_NS_CC;

class MenuScene : public cocos2d::Scene, public MenuSettingsLayerDelegate, public MenuCtrlLayerDelegate
{
public:
    virtual bool init();
    CREATE_FUNC(MenuScene);
    virtual void menuSettingsLayerReturn();
    virtual void menuCtrlLayerClickSettings();
private:
    MenuSettingsLayer* m_MenuSettingsLayer;
    MenuCtrlLayer* m_MenuCtrlLayer;
};

#endif /* defined(__HelloWorldDemo__MenuScene__) */
