#ifndef __MenuSettingsLayer__
#define __MenuSettingsLayer__

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class MenuSettingsLayerDelegate
{
public:
    virtual void menuSettingsLayerReturn()=0;
};

class MenuSettingsLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(MenuSettingsLayer);
    void setReturnDelegate(MenuSettingsLayerDelegate* delegate) { m_ReturnDelegate=delegate; }
private:
    void clickChangeVolumnMode();
    void clickReturn();
    MenuSettingsLayerDelegate* m_ReturnDelegate;
    Label *m_labelChangeVolumnMode, *m_labelReturn;
};

#endif /* defined(__GameDemo__MenuSettingsLayer__) */
