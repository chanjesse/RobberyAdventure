/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called Executive.
*******************************************************************************/

#include <iostream>
#include "executive.hpp"

/*******************************************************************************
* char Executive::menu()
* Description: goes through Executive menu and returns a char.
*******************************************************************************/
char Executive::menu()
{   
    int choice;
    std::cout << std::endl;
    std::cout << "You have entered the Executive Room." << std::endl;
    std::cout << "1. Search through bookshelf." << std::endl;
    std::cout << "2. Go UP to the Vault." << std::endl;
    std::cout << "3. Go DOWN to the Lobby." << std::endl;
    std::cout << "4. Display bag." << std::endl;
    std::cout << std::endl;
    std::cin >> choice;
    if(choice == 1)
    {
        return 'J';
    }
    else if(choice == 2)
    {
        return 'D';
    }
    else if(choice == 3)
    {
        return 'C';
    }
    else if(choice == 4)
    {
        return 'I';
    }

    return 'Z';
}

/*******************************************************************************
* Room* Executive::goDown()
* Description: returns a room pointer which points to Executive's South.
*******************************************************************************/
Room* Executive::goDown()
{
    return this->South;
}

/*******************************************************************************
* Room* Executive::goUp()
* Description: returns a room pointer which points to Executive's North.
*******************************************************************************/
Room* Executive::goUp()
{
    return this->North;
}