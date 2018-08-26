/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called Office.
*******************************************************************************/

#include <iostream>
#include "office.hpp"

/*******************************************************************************
* Office::Office()
* Description: constructor that sets computer to true.
*******************************************************************************/
Office::Office()
{
    computer = true;
}

/*******************************************************************************
* char Office::menu()
* Description: goes through Office menu and returns a char.
*******************************************************************************/
char Office::menu()
{
    int choice;
    std::cout << std::endl;
    std::cout << "You have entered Office Room A." << std::endl;
    std::cout << "1. Take a look at computers." << std::endl;
    std::cout << "2. Go LEFT to the Lobby." << std::endl;
    std::cout << "3. Display bag." << std::endl;
    std::cout << "Please enter a choice." << std::endl;
    std::cin >> choice;
    if(choice == 1)
    {
        if(computer)
        {
            std::cout << std::endl;
            std::cout << "Old looking computers..." << std::endl;
            std::cout << "I don't think there is a key here." << std::endl;
            computer = false;
            return 'E';
        }
        else if(computer == false)
        {
            std::cout << std::endl;
            std::cout << "No key here!" << std::endl;
            return 'E';
        }
    }
    else if(choice == 2)
    {
        return 'B';
    }
    else if(choice == 3)
    {
        return 'I';
    }
    return 'Z';
}

/*******************************************************************************
* Room* Office::goLeft()
* Description: returns a room pointer which points to Office's West.
*******************************************************************************/
Room* Office::goLeft()
{
    return this->West;
}