//
//  Ranking.h
//  HelloWorldDemo
//
//  Created by drinking on 7/15/15.
//
//

#ifndef __HelloWorldDemo__Ranking__
#define __HelloWorldDemo__Ranking__

#define MAXRANKNUMBER   5

#include <stdio.h>


class Ranking
{
public:
    static int getBestScore();
    static int getScore(int index);
    static void addScore(int score);
    static void deleteScore(int index);
    static const int MaxRankNumber = MAXRANKNUMBER;
private:
    static int rank[MAXRANKNUMBER];
};

int Ranking::rank[MAXRANKNUMBER]={0};

#endif /* defined(__HelloWorldDemo__Ranking__) */
