//
//  GameMode.h
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#ifndef __HelloWorldDemo__GameMode__
#define __HelloWorldDemo__GameMode__

#include <stdio.h>

class GameMode
{
public:
    static bool setGameMode(int gamemode);
    static int getGameMode();
    static int Easy,Difficult,Insane;
private:
    static int m_GameMode;
};

int GameMode::Easy=0;
int GameMode::Difficult=1;
int GameMode::Insane=2;

int GameMode::m_GameMode=0;

#endif /* defined(__HelloWorldDemo__GameMode__) */
