#include "GameOverLayer.h"

bool GameOverLayer::init()
{
    if(!Layer::init()) return false;
    Size visibleSize = Director::getInstance()->getVisibleSize();
    //add rabbitnest background
    Sprite* spriteBG = Sprite::create("images/rabbitnest.jpg");
    spriteBG->setScale(4, 3);
    spriteBG->setPosition(Point(visibleSize.width/2,visibleSize.height/2));
    this->addChild(spriteBG);
    //grades display
    m_labelTitle = Label::createWithSystemFont("", "fonts/Marker Felt.ttf", 45);
    m_labelTitle->setPosition(Point(visibleSize.width/2,visibleSize.height/2+100));
    this->addChild(m_labelTitle);
    m_labelScoreMsg = Label::createWithSystemFont("", "fonts/Marker Felt.ttf", 45);
    m_labelScoreMsg->setPosition(visibleSize.width/2,visibleSize.height/2+20);
    this->addChild(m_labelScoreMsg);
    //Restart game
    Label* labelRestart = Label::createWithSystemFont("Catch again", "fonts/Marker Felt.ttf", 50);
    MenuItemLabel* menuItemLabel = MenuItemLabel::create(labelRestart, CC_CALLBACK_0(GameOverLayer::clickRestartGame, this));
    Menu* menuRestart = Menu::create(menuItemLabel,NULL);
    menuRestart->setPosition(Point(visibleSize.width/2,visibleSize.height/2-70));
    this->addChild(menuRestart);
    //
    return true;
}

void GameOverLayer::gameOver(int nowScore, int bestScore)
{
    if(bestScore>0)
    {
        if(nowScore>bestScore)
        {
            m_labelTitle->setString("You'v broken the record!");
            m_labelScoreMsg->runAction(Blink::create(1, 8));
        } else {
            m_labelTitle->setString("You didn't break the record.");
            m_labelScoreMsg->runAction(Blink::create(1, 4));
        }
        m_labelScoreMsg->setString(StringUtils::format("Your best score is %d",bestScore));
    } else {
        if(nowScore>0){
            m_labelTitle->setString("You have new record!");
            m_labelScoreMsg->runAction(Blink::create(1, 8));
        } else {
            m_labelTitle->setString("You touched a wrong area!");
            m_labelScoreMsg->runAction(Blink::create(1, 8));
        }
    }
}

void GameOverLayer::clickRestartGame()
{
    m_delegate->gameOverLayerRestartGame();
}