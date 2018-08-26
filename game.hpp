/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the class Game.
*******************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP
#include "game.hpp"
#include "room.hpp"
#include "office.hpp"
#include "officeTwo.hpp"
#include "vault.hpp"
#include "executive.hpp"
#include "breakroom.hpp"
#include "lobby.hpp"
#include <string>
#include <list>

class Game
{
    private:
        //robber's current location
        Room *currentLocation;
        Executive executive;
        BreakRoom breakroom;
        Office office;
        OfficeTwo office2;
        Vault vault;
        Lobby lobby;

        //inventory
        std::list <std::string> bag;
        int bagLimit;

        //status of game
        bool gameWin;

        //timer
        int steps;

        //special conditions
        bool file;
        bool book;
        bool pencil;

    public:
        Game();
        void play();

};

#endif