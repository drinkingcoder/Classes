//
//  GameScene.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#include "GameScene.h"
#include "GameCtrlLayer.h"

bool GameScene::init()
{
    if(!Scene::init()) return false;
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    //add background
    auto sprite = Sprite::create("images/bg_game.jpg");
    sprite->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
    this->addChild(sprite);
    //add game control layer
    //game layer
    m_gameLayer = GameLayer::create();
    m_gameLayer->setDelegate(this);
    this->addChild(m_gameLayer);
    //game over layer
    m_gameoverlayer = GameOverLayer::create();
    m_gameoverlayer->setDelegate(this);
    this->addChild(m_gameoverlayer);
    this->addChild(GameCtrlLayer::create());

    int nowScore=5;
    int bestScore=0;
    
    m_gameoverlayer->setScale(0.5);//???????????????
    
    return true;
}

void GameScene::gameLayerGameOver(int nowScore, int bestScore)
{
    m_gameoverlayer->gameOver(nowScore, bestScore);
    m_gameoverlayer->runAction(ScaleTo::create(0.3, 1));
}

void GameScene::gameOverLayerRestartGame()
{
    m_gameoverlayer->runAction(ScaleTo::create(0.3, 0));
    m_gameLayer->startGame();
}