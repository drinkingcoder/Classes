//
//  GameMode.h
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#ifndef __GameDemo__GameMode__
#define __GameDemo__GameMode__

#include <stdio.h>

class GameMode
{
public:
    static bool setGameMode(int gamemode);
    static int getGameMode();
    static const int Easy,Difficult,Insane;
private:
    static int m_GameMode;
};

#endif /* defined(__HelloWorldDemo__GameMode__) */
