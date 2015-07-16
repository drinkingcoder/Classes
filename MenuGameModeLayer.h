//
//  MenuGameModeLayer.h
//  GameDemo
//
//  Created by drinking on 7/16/15.
//
//

#ifndef __GameDemo__MenuGameModeLayer__
#define __GameDemo__MenuGameModeLayer__

#include <stdio.h>

USING_NS_CC;

class MenuGameModeDelegate
{
public:
    virtual void menuGameModeReturn()=0;
};

class MenuGameModeLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(MenuGameModeLayer);
    void setReturnDelegate(MenuGameModeDelegate* delegate) { m_ReturnDelegate = delegate;  }
private:
    void clickReturn();
    void clickEasy();
    void clickDifficult();
    void clickInsane();
    void updateView();
    MenuGameModeDelegate* m_ReturnDelegate;
    Label *m_LabelEasy,*m_LabelDifficult,*m_LabelInsane,*m_LabelReturn;
};

#endif /* defined(__GameDemo__MenuGameModeLayer__) */
