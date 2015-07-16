#ifndef __MenuGameModeLayer__
#define __MenuGameModeLayer__

#include <stdio.h>
#include "cocos2d.h"

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
