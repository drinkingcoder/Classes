//
//  GameClock.h
//  GameDemo
//
//  Created by drinking on 7/16/15.
//
//

#ifndef __GameDemo__GameClock__
#define __GameDemo__GameClock__

#include <stdio.h>

//Clock Class is a class to generate a sequence of commands to generate balls

class GameClockDelegate
{
public:
    virtual void generateBall(int index)=0; //Tell GameScene to generate a ball
    //For index, you can use PositionTable::MaxColumns to get the maximum index number
    virtual void generateFloor()=0; //Tell GameScene to generate a sequence of balls on floor
};

class GameClock
{
public:
    void setClockPause();
    void resetClock();
    void setClockDelegate(GameClockDelegate* delegate) { m_delegate = delegate; }
private:
    GameClockDelegate* m_delegate;
};
#endif /* defined(__GameDemo__GameClock__) */
