//
//  MenuGameModeLayer.cpp
//  GameDemo
//
//  Created by drinking on 7/16/15.
//
//

#include "MenuGameModeLayer.h"
#include "GameMode.h"

bool MenuGameModeLayer::init()
{
    if( !Layer::init() ) return false;
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto sprite = Sprite::create("images/bg_game.jpg");
    sprite->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
    this->addChild(sprite);
    
    m_LabelEasy = Label::createWithSystemFont("Easy", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelEasy = MenuItemLabel::create(m_LabelEasy, CC_CALLBACK_0(MenuGameModeLayer::clickEasy, this));

    m_LabelDifficult = Label::createWithSystemFont("Difficult", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelDifficult = MenuItemLabel::create(m_LabelDifficult, CC_CALLBACK_0(MenuGameModeLayer::clickDifficult, this));
    
    m_LabelInsane = Label::createWithSystemFont("Insane", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelInsane = MenuItemLabel::create(m_LabelInsane, CC_CALLBACK_0(MenuGameModeLayer::clickInsane, this));
    
    m_LabelReturn = Label::createWithSystemFont("Return", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelReturn = MenuItemLabel::create(m_LabelReturn, CC_CALLBACK_0(MenuGameModeLayer::clickReturn, this));
    
    auto menuGameMode = Menu::create(menuItemLabelEasy,menuItemLabelDifficult,menuItemLabelInsane,menuItemLabelReturn,NULL);
    menuGameMode->setPosition(Point(visibleSize.width/2,visibleSize.height/2));
    menuGameMode->alignItemsVertically();
    this->addChild(menuGameMode);
    
    GameMode::setGameMode(GameMode::Easy);
    m_LabelEasy->enableShadow();
    
    return true;
}

void MenuGameModeLayer::clickEasy()
{
    GameMode::setGameMode(GameMode::Easy);
    updateView();
}

void MenuGameModeLayer::clickDifficult()
{
    GameMode::setGameMode(GameMode::Difficult);
    updateView();
}

void MenuGameModeLayer::clickInsane()
{
    GameMode::setGameMode(GameMode::Insane);
    updateView();
}

void MenuGameModeLayer::clickReturn()
{
    m_ReturnDelegate->menuGameModeReturn();
}

void MenuGameModeLayer::updateView()
{
    m_LabelEasy->disableEffect();
    m_LabelDifficult->disableEffect();
    m_LabelInsane->disableEffect();
    if (GameMode::getGameMode()==GameMode::Easy)
        m_LabelEasy->enableShadow();
    if (GameMode::getGameMode()==GameMode::Difficult)
        m_LabelDifficult->enableShadow();
    if (GameMode::getGameMode()==GameMode::Insane)
        m_LabelInsane->enableShadow();
}