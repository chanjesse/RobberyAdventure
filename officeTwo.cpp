/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called OfficeTwo.
*******************************************************************************/

#include <iostream>
#include "officeTwo.hpp"
#include "game.hpp"

/*******************************************************************************
* char OfficeTwo::menu()
* Description: goes through OfficeTwo's menu and returns a char.
*******************************************************************************/
char OfficeTwo::menu()
{
    int choice;
    std::cout << std::endl;
    std::cout << "You have entered Office Room B." << std::endl;
    std::cout << "1. Take a look at file cabinets." << std::endl;
    std::cout << "2. Go RIGHT to the Lobby." << std::endl;
    std::cout << "3. Display bag." << std::endl;
    std::cout << "Please enter a choice." << std::endl;
    std::cout << std::endl;
    std::cin >> choice;
    if(choice == 1)
    {
        return 'G';
    }
    else if(choice == 2)
    {
        return 'A';
    }
    else if(choice == 3)
    {
        return 'I';
    }
    return 'Z';
}

/*******************************************************************************
* Room* OfficeTwo::goRight()
* Description: returns a room pointer which points to OfficeTwo's East.
*******************************************************************************/
Room* OfficeTwo::goRight()
{
    return this->East;
}