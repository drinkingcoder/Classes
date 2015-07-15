//
//  GameMode.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#include "GameMode.h"

const int GameMode::Easy=0;
const int GameMode::Difficult=1;
const int GameMode::Insane=2;

int GameMode::m_GameMode=0;

int GameMode::getGameMode()
{
    return m_GameMode;
}

bool GameMode::setGameMode(int gamemode)
{
    if(gamemode<Easy || gamemode >Insane) return false;
    m_GameMode=gamemode;
    return true;
}

