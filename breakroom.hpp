/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the derived class BreakRoom.
*******************************************************************************/

#ifndef BREAKROOM_HPP
#define BREAKROOM_HPP
#include "room.hpp"

class BreakRoom: public Room
{
  public:
    char menu();
    Room* goUp();
};

#endif