//
//  GameOverLayer.h
//  HelloWorldDemo
//
//  Created by drinking on 7/14/15.
//
//

#ifndef __HelloWorldDemo__GameOverLayer__
#define __HelloWorldDemo__GameOverLayer__

#include <stdio.h>

USING_NS_CC;

class GameOverLayerDelegate
{
public:
    virtual void gameOverLayerRestartGame()=0;
};

class GameOverLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(GameOverLayer);
    //set delegate
    void setDelegate(GameOverLayerDelegate* delegate) { m_delegate=delegate;}
    //game over
    void gameOver(int nowScore,int bestScore);
    
private:
    void clickRestartGame();
    
    Label* m_labelTitle;
    Label* m_labelScoreMsg;
    //callback
    GameOverLayerDelegate* m_delegate;
};
#endif /* defined(__HelloWorldDemo__GameOverLayer__) */
