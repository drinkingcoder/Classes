#include "MenuSettingsLayer.h"
#include "VolumnMode.h"

bool MenuSettingsLayer::init()
{
    if( !Layer::init() ) return false;
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto sprite = Sprite::create("images/bg_game.jpg");
    sprite->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
    this->addChild(sprite);
    
    m_labelChangeVolumnMode = Label::createWithSystemFont("Volumn on", "fonts/Marker Felt.ttf", 24);
    MenuItemLabel* menuItemLabelChangeVolumnMode = MenuItemLabel::create(m_labelChangeVolumnMode, CC_CALLBACK_0(MenuSettingsLayer::clickChangeVolumnMode, this));
    m_labelReturn = Label::createWithSystemFont("Return", "fonts/Marker Felt.ttf", 24);
    
    MenuItemLabel* menuItemLabelReturn = MenuItemLabel::create(m_labelReturn, CC_CALLBACK_0(MenuSettingsLayer::clickReturn, this));
    auto menuSettings = Menu::create(menuItemLabelChangeVolumnMode,menuItemLabelReturn,NULL);
    menuSettings->setPosition(Point(visibleSize.width/2,visibleSize.height/2));
    menuSettings->alignItemsVertically();
    this->addChild(menuSettings);
    
    return true;
}

void MenuSettingsLayer::clickChangeVolumnMode()
{
    VolumnMode::changeVolumnMode();
    if(VolumnMode::getVolumnMode()==VolumnMode::On)
        m_labelChangeVolumnMode->setString("Volumn On");
    else m_labelChangeVolumnMode->setString("Volumn Off");
}

void MenuSettingsLayer::clickReturn()
{
    m_ReturnDelegate->menuSettingsLayerReturn();
}