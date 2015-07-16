#include "MenuScene.h"
#include "MenuCtrlLayer.h"

bool MenuScene::init()
{
    if(!Scene::init())
        return false;
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //add background
    auto sprite = Sprite::create("images/bg_game.jpg");
    sprite->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
    this->addChild(sprite);
    
    m_MenuCtrlLayer = MenuCtrlLayer::create();
    this->addChild(m_MenuCtrlLayer);
    m_MenuCtrlLayer->setSettingsDelegate(this);
    
    m_MenuSettingsLayer = MenuSettingsLayer::create();
    this->addChild(m_MenuSettingsLayer);
    m_MenuSettingsLayer->setScale(0);
    m_MenuSettingsLayer->setReturnDelegate(this);
    
    m_MenuGameModeLayer = MenuGameModeLayer::create();
    this->addChild(m_MenuGameModeLayer);
    m_MenuGameModeLayer->setScale(0);
    m_MenuGameModeLayer->setReturnDelegate(this);
    return true;
}

void MenuScene::menuSettingsLayerReturn()
{
    m_MenuSettingsLayer->setScale(0);
    m_MenuCtrlLayer->setScale(1);
}

void MenuScene::menuCtrlLayerClickSettings()
{
    m_MenuSettingsLayer->setScale(1);
    m_MenuCtrlLayer->setScale(0);
}

void MenuScene::menuCtrlLayerClickGameMode()
{
    m_MenuGameModeLayer->setScale(1);
    m_MenuCtrlLayer->setScale(0);
}

void MenuScene::menuGameModeReturn()
{
    m_MenuGameModeLayer->setScale(0);
    m_MenuCtrlLayer->setScale(1);
}