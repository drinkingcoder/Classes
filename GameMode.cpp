//
//  GameMode.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#include "GameMode.h"

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

