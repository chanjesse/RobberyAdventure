/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the derived class Vault.
*******************************************************************************/

#ifndef VAULT_HPP
#define VAULT_HPP
#include "room.hpp"

class Vault: public Room
{
  public:
    char menu();
    Room* goDown();
};

#endif