#ifndef __GameScene__
#define __GameScene__

#include <stdio.h>
#include "GameLayer.h"
#include "GameOverLayer.h"
#include "cocos2d.h"

USING_NS_CC;

class GameScene : public cocos2d::Scene, public GameLayerDelegate, public GameOverLayerDelegate
{
public:
    virtual bool init();
    CREATE_FUNC(GameScene);
    //GameLayerDelegate
    virtual void gameLayerGameOver(int nowScore,int bestScore);
    //GameOverLayerDelegate
    virtual void gameOverLayerRestartGame();
    
private:
    GameLayer* m_gameLayer;
    GameOverLayer* m_gameoverlayer;
};

#endif /* defined(__GameDemo__GameScene__) */
