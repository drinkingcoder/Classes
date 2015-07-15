//
//  GameLayer.h
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __HelloWorldDemo__GameLayer__
#define __HelloWorldDemo__GameLayer__

#include <stdio.h>

USING_NS_CC;

class GameLayerDelegate
{
public:
    virtual void gameLayerGameOver(int newScore,int bestScore)=0;
};

class GameLayer: public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(GameLayer);
    //set delegate
    void setDelegate(GameLayerDelegate* delegate) { m_delegate = delegate; }
    //start game
    void startGame();
    
private:
    GameLayerDelegate* m_delegate;
    void clickGameOver();
};

#endif /* defined(__HelloWorldDemo__GameLayer__) */