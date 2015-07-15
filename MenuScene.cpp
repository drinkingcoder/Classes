//
//  MenuScene.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

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
    this->addChild(MenuCtrlLayer::create());
    return true;
}