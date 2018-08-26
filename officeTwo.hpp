/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the derived class OfficeTwo.
*******************************************************************************/

#ifndef OFFICETWO_HPP
#define OFFICETWO_HPP
#include "room.hpp"

class OfficeTwo: public Room
{
  public:
    char menu();
    Room* goRight();
};

#endif