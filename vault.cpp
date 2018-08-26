/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called Vault.
*******************************************************************************/

#include <iostream>
#include "vault.hpp"

/*******************************************************************************
* char Vault::menu()
* Description: goes through Vault menu and returns a char.
*******************************************************************************/
char Vault::menu()
{
    int choice;
    std::cout << std::endl;
    std::cout << "You have entered the vault." << std::endl;
    std::cout << "1. Insert key to open." << std::endl;
    std::cout << "2. Go DOWN to the Executive office." << std::endl;
    std::cout << "3. Display bag." << std::endl;
    std::cout << std::endl;
    std::cin >> choice;
    if(choice == 1)
    {
        return 'N';
    }
    else if(choice == 2)
    {
        return 'C';
    }
    else if(choice == 3)
    {
        return 'I';
    }

    return 'Z';
}

/*******************************************************************************
* Room* Vault::goDown()
* Description: returns a room pointer which points to Vault's South.
*******************************************************************************/
Room* Vault::goDown()
{
    return this->South;
}