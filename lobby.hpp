/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the derived class Lobby.
*******************************************************************************/

#ifndef LOBBY_HPP
#define LOBBY_HPP
#include "room.hpp"

class Lobby: public Room
{
  private:
    bool atm;
    bool advertisement;
  public:
    Lobby();
    char menu();
    Room* goRight();
    Room* goLeft();
    Room* goDown();
    Room* goUp();
};

#endif