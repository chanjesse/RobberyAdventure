/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the derived class Executive.
*******************************************************************************/

#ifndef EXECUTIVE_HPP
#define EXECUTIVE_HPP
#include "room.hpp"

class Executive: public Room
{
  public:
    char menu();
    Room* goDown();
    Room* goUp();
};

#endif