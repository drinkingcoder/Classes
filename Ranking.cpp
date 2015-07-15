//
//  Ranking.cpp
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#include "Ranking.h"

int Ranking::getBestScore()
{
    return rank[0];
}

void Ranking::addScore(int score)
{
    int i,j;
    for(i=0;i<MaxRankNumber;i++)
    {
        if(score>rank[i])
        {
            for(j=MaxRankNumber;j>i;j--)
                rank[j]=rank[j-1];
            rank[i]=score;
        }
    }
}

void Ranking::deleteScore(int index)
{
    for(int i=index;i<MaxRankNumber;i++)
        rank[i]=rank[i+1];
}

int Ranking::getScore(int index)
{
    return rank[index];
}