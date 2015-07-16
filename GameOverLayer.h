#ifndef __GameOverLayer__
#define __GameOverLayer__

#include <stdio.h>
#include "cocos2d.h"

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
#endif /* defined(__GameDemo__GameOverLayer__) */
