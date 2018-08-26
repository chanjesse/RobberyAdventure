/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the derived class Office.
*******************************************************************************/

#ifndef OFFICE_HPP
#define OFFICE_HPP
#include "room.hpp"

class Office: public Room
{
  private:
    bool computer;
  public:
    Office();
    char menu();
    Room* goLeft();
};

#endif