//
//  MenuCtrlLayer.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#include "MenuCtrlLayer.h"
#include "GameScene.h"

bool MenuCtrlLayer::init()
{
    if(!Layer::init())
        return  false;
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //button for starting game
    Label* labelGameStart = Label::createWithSystemFont("Game Start", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelGameStart = MenuItemLabel::create(
                                                         labelGameStart,
                                                         CC_CALLBACK_0(MenuCtrlLayer::clickGameStart,this)
                                                         );
    Label* labelGameMode = Label::createWithSystemFont("Game Mode", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelGameMode = MenuItemLabel::create(
                                                                  labelGameMode,
                                                                  CC_CALLBACK_0(MenuCtrlLayer::clickGameMode,this)
                                                                  );
    Label* labelSettings = Label::createWithSystemFont("Settings", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelSettings = MenuItemLabel::create(
                                                                  labelSettings,
                                                                  CC_CALLBACK_0(MenuCtrlLayer::clickSettings,this)
                                                                  );
    Label* labelVolumnMode = Label::createWithSystemFont("VolumnMode", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelVolumnMode = MenuItemLabel::create(
                                                                  labelVolumnMode,
                                                                  CC_CALLBACK_0(MenuCtrlLayer::clickVolumnMode,this)
                                                                  );
    Label* labelRank = Label::createWithSystemFont("Rank", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelRank = MenuItemLabel::create(
                                                                  labelRank,
                                                                  CC_CALLBACK_0(MenuCtrlLayer::clickRank,this)
                                                                  );
    Label* labelExit = Label::createWithSystemFont("Exit", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelExit = MenuItemLabel::create(
                                                                  labelExit,
                                                                  CC_CALLBACK_0(MenuCtrlLayer::clickExit,this)
                                                                  );
    
    Menu* menuStart = Menu::create(menuItemLabelGameStart,
                                   menuItemLabelRank,
                                   menuItemLabelSettings,
                                   menuItemLabelGameMode,
                                   menuItemLabelVolumnMode,
                                   menuItemLabelExit,
                                NULL);
    menuStart->setPosition(visibleSize.width/2,visibleSize.height/2);
    menuStart->alignItemsVertically();
    this->addChild(menuStart);
    menuItemLabelGameStart->runAction(RepeatForever::create(
                                Sequence::create(
                                    ScaleTo::create(0.5,1.2),
                                    ScaleTo::create(0.5,0.8),
                                    NULL)
                                )
                            );
    return true;
}

void MenuCtrlLayer::clickGameStart()
{
    Director::getInstance()->replaceScene(TransitionSplitCols::create(0.3f,GameScene::create()));
}

void MenuCtrlLayer::clickGameMode()
{
}

void MenuCtrlLayer::clickExit()
{
}

void MenuCtrlLayer::clickRank()
{
}

void MenuCtrlLayer::clickSettings()
{
    m_MenuCtrlLayerDelegate->menuCtrlLayerClickSettings();
}

void MenuCtrlLayer::clickVolumnMode()
{
}