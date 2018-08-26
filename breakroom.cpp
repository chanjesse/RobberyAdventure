/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called BreakRoom.
*******************************************************************************/

#include <iostream>
#include "breakroom.hpp"

/*******************************************************************************
* char BreakRoom::menu()
* Description: goes through BreakRoom menu and returns a char.
*******************************************************************************/
char BreakRoom::menu()
{   
    int choice;
    std::cout << std::endl;
    std::cout << "You have entered the Break Room." << std::endl;
    std::cout << "1. Open microwave." << std::endl;
    std::cout << "2. Go UP to Lobby." << std::endl;
    std::cout << "3. Display bag." << std::endl;
    std::cout << std::endl;
    std::cin >> choice;
    if(choice == 1)
    {
        return 'H';
    }
    else if(choice == 2)
    {
        return 'D';
    }
    else if(choice == 3)
    {
        return 'I';
    }

    return 'Z';
}

/*******************************************************************************
* Room* BreakRoom::goUp()
* Description: returns a room pointer which points to BreakRoom's North.
*******************************************************************************/
Room* BreakRoom::goUp()
{
    return this->North;
}