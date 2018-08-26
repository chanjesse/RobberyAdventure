/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called Lobby.
*******************************************************************************/

#include <iostream>
#include "lobby.hpp"

/*******************************************************************************
* Lobby::Lobby()
* Description: constructor that sets the variable atm and advertisement to true.
*******************************************************************************/
Lobby::Lobby()
{
    atm = true;
    advertisement = true;
}

/*******************************************************************************
* char Lobby::menu()
* Description: goes through the Lobby menu and returns a char.
*******************************************************************************/
char Lobby::menu()
{
    int choice1;
    int choice2;

    std::cout << std::endl;
    std::cout << "You have entered the Lobby." << std::endl;
    std::cout << "1. Look around the Lobby." << std::endl;
    std::cout << "2. Go RIGHT to the Office Room A." << std::endl;
    std::cout << "3. Go DOWN to the Break Room." << std::endl;
    std::cout << "4. Go LEFT to the Office Room B." << std::endl;
    std::cout << "5. Go UP to the Executive Office." << std::endl;
    std::cout << "6. Display bag." << std::endl;
    std::cout << std::endl;

    std::cout << "Please enter a choice." << std::endl;
    std::cin >> choice1;

        if(choice1 == 1)
        {
            std::cout << std::endl;
            std::cout << "1. Investigate ATM." << std::endl;
            std::cout << "2. Look through advertisement pamplets on table." << std::endl;
            std::cout << "Please enter a choice." << std::endl;
            std::cin >> choice2;
            
            if(choice2 == 1)
            {
                if(atm)
                {
                    std::cout << std::endl;
                    std::cout << "ATM" << std::endl;
                    std::cout << "A pretty generic looking machine." << std::endl;
                    atm = false;
                    return 'E';
                }
                else if(atm == false)
                {
                    std::cout << std::endl;
                    std::cout << "ATM" << std::endl;
                    std::cout << "You've already looked here!" << std::endl;
                    return 'E';
                }
            }
            else if(choice2 == 2)
            {
                if(advertisement)
                {
                    std::cout << std::endl;
                    std::cout << "Advertisements" << std::endl;
                    std::cout << "From Home Mortagages to Students Loans....this is a lot of information." << std::endl;
                    std:: cout << "I couldn't imagine there to be clues here." << std::endl;
                    advertisement = false;
                    return 'E';
                }
                else if(advertisement == false)
                {
                    std::cout << std::endl;
                    std::cout << "Advertisements" << std::endl;
                    std::cout << "I don't think there are any clues here." << std::endl;
                    return 'E';
                }
            }
        }
        else if(choice1 == 2)
        {
            return 'A';
        }
        else if(choice1 == 3)
        {
            return 'C';
        }
        else if(choice1 == 4)
        {
            return 'B';
        }
        else if(choice1 == 5)
        {
            return 'D';
        }
        else if(choice1 == 6)
        {
            return 'I';
        }      

        return 'Z';
}

/*******************************************************************************
* Room* Lobby::goRight()
* Description: returns a room pointer which points to Lobby's East.
*******************************************************************************/
Room* Lobby::goRight()
{
    return this->East;
}

/*******************************************************************************
* Room* Lobby::goLeft()
* Description: returns a room pointer which points to Lobby's West.
*******************************************************************************/
Room* Lobby::goLeft()
{
    return this->West;
}

/*******************************************************************************
* Room* Lobby::goDown()
* Description: returns a room pointer which points to Lobby's South.
*******************************************************************************/
Room* Lobby::goDown()
{
    return this->South;
}

/*******************************************************************************
* Room* Lobby::goUp()
* Description: returns a room pointer which points to Lobby's North.
*******************************************************************************/
Room* Lobby::goUp()
{
    return this->North;;
}