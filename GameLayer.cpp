#include "GameLayer.h"
#include "GameScene.h"

bool GameLayer::init()
{
    if(!Layer::init()) return false;
    Size visibleSize = Director::getInstance()->getVisibleSize();

    Sprite* spriteBG = Sprite::create("images/rabbitnest.jpg");
    spriteBG->setScale(4, 3);
    spriteBG->setPosition(Point(visibleSize.width/2,visibleSize.height/2));
    this->addChild(spriteBG);
    
    Label* labelGameOver = Label::createWithSystemFont("Click game over!", "fonts/Marker Felt.ttf", 50);
    MenuItemLabel* menuItemLabel = MenuItemLabel::create(labelGameOver, CC_CALLBACK_0(GameLayer::clickGameOver, this));
    
    Menu* menuGameOver = Menu::create(menuItemLabel,NULL);
    menuGameOver->setPosition(Point(visibleSize.width/2,visibleSize.height/2-70));
    this->addChild(menuGameOver);
    
    return true;
}

void GameLayer::clickGameOver()
{
    m_delegate->gameLayerGameOver(4, 1);
}

void GameLayer::startGame()
{
    
}