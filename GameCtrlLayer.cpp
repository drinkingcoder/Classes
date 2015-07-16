#include "GameCtrlLayer.h"
#include "MenuScene.h"

USING_NS_CC;

bool GameCtrlLayer::init()
{
    if(!Layer::init()) return false;
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //return button
    Label* labelBack = Label::createWithSystemFont("Return", "fonts/Marker Felt.ttf" , 24);
    MenuItemLabel* menuItemLabelBack=MenuItemLabel::create(labelBack,CC_CALLBACK_0(GameCtrlLayer::clickBackToMenu,this));
    Menu* menuBack = Menu::create(menuItemLabelBack,NULL);
    menuBack->setPosition(Vec2(20,20));
    this->addChild(menuBack);
 /*   menuItemLabelBack->runAction(
                    RepeatForever::create(
                        Sequence::create(
                                MoveTo::create(2, Vec2(20,visibleSize.height-20)),
                                MoveTo::create(2,Vec2(visibleSize.width-20,visibleSize.height-20)),
                                MoveTo::create(2, Vec2(visibleSize.width-20,20)),
                                MoveTo::create(2, Vec2(20, 20)),
                    NULL)));*/
    
    return true;
}

void GameCtrlLayer::clickBackToMenu()
{
    Director::getInstance()->replaceScene(TransitionSplitCols::create(0.3f,MenuScene::create()));
}