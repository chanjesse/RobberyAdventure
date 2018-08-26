/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class implementation for the class called Game.
*******************************************************************************/

#include <iostream>
#include "game.hpp"

/*******************************************************************************
* Game::Game()
* Description: constructor that links all the rooms, initializes the data members.
*******************************************************************************/
Game::Game()
{
    //linking Lobby
    lobby.East = &office;
    lobby.South = &breakroom;
    lobby.West = &office2;
    lobby.North = &executive;

    //linking office1
    office.East = NULL;
    office.South = NULL;
    office.West = &lobby;
    office.North = NULL;

    //linking office2
    office2.East = &lobby;
    office2.South = NULL;
    office2.West = NULL;
    office2.North = NULL;

    //linking breakroom
    breakroom.East = NULL;
    breakroom.South = NULL;
    breakroom.West = NULL;
    breakroom.North = &lobby;

    //linking executive office
    executive.East = NULL;
    executive.South = &lobby;
    executive.West = NULL;
    executive.North = &vault;

    //linking vault
    vault.East = NULL;
    vault.South = &executive;
    vault.West = NULL;
    vault.North = NULL;
    
    //initialize robber's location to lobby
    currentLocation = &lobby;

    //initializing size of bag;
    bagLimit = 2;

    //initializing status of game
    gameWin = false;

    //intializing steps
    steps = 0;

    //special conditions
    file = true;
    book = true;
    pencil = true;
}

/*******************************************************************************
* void Game::play()
* Description: plays the game by using a switch statement, adds items to the list,
* and keeps track of timer.
*******************************************************************************/
void Game::play()
{
    do{
        char choice = currentLocation->menu();
        
        steps++;

        switch(choice)
        {
            //go RIGHT
            case 'A':
                currentLocation = currentLocation->goRight();
                break;
            //go LEFT 
            case 'B':
                currentLocation = currentLocation->goLeft();
                break;
            //go DOWN
            case 'C':
                currentLocation = currentLocation->goDown();
                break;
            //go UP
            case 'D':
                currentLocation = currentLocation->goUp();
                break;
            //CONTINUING
            case 'E':
                break;

            //adding key to list
            case 'G':
                //repeating menu
                //adding key to inventory
                if(file == false)
                {
                    std::cout << std::endl;
                    std::cout << "You already found the key here!" << std::endl;
                }
                else if(bag.size() < bagLimit)
                {
                    std::cout << std::endl;
                    std::cout << "Looking through the file cabinets..." << std::endl;
                    std::cout << "You find a rusty golden key!" << std::endl;
                    bag.push_back("GOLDENKEY");
                    file = false;
                }
                else
                {
                    std::cout << "Bag is full. Please make room in your bag!" << std::endl;
                }
                break;
            
            //adding pencil to list
            case 'H':
                if(pencil == false)
                {
                    std::cout << std::endl;
                    std::cout << "Already looked here! you left the microwave open!" << std::endl;
                }
                else if(bag.size() < bagLimit)
                {
                    std::cout << std::endl;
                    std::cout << "Looking through microwave..." << std::endl;
                    std::cout << "You find a pencil! What will this be useful for...?" << std::endl;
                    bag.push_back("PENCIL");
                    pencil = false;
                }
                else
                {
                    std::cout << "Bag is full. Please make room in your bag!" << std::endl;
                }
                break;

            //adding book to list
            case 'J':
                if(book == false)
                {
                    std::cout << std::endl;
                    std::cout << "You made a huge mess looking through the books! Move on!" << std::endl;
                }
                else if(bag.size() < bagLimit)
                {
                    std::cout << std::endl;
                    std::cout << "Looking through bookshelf..." << std::endl;
                    std::cout << "You pick up a book!" << std::endl;
                    bag.push_back("BOOK");
                    book = false;
                }
                else
                {
                    std::cout << "Bag is full. Please make room in your bag!" << std::endl;
                }
                break;

           //accessing/printing list
           case 'I':

                if(bag.size() == 0)
                {
                    std::cout << "Bag is empty!" << std::endl;
                }
                else
                {
                    int num = 1;
                    for(std::list<std::string>::iterator i = bag.begin(); i != bag.end(); i++)
                    {
                        std::cout << "Item #" << num << ": " << *i << std::endl;
                        num++;
                    }
                    num--;
                }

                //asking user if they want to discard an item
                if(bag.size() == 2)
                {   
                    char yesNo;
                    std::cout << "Bag is full." << std::endl;
                    std::cout << "Do you want to delete an item? (y/n) ";
                    std::cin >> yesNo;
                    if(yesNo == 'n' || yesNo == 'N')
                        break;
                    int choice;
                    std::cout << "Please enter which item # you want to discard." << std::endl;
                    std::cin >> choice;
                    int place = 1;

                    while(choice < 0 || choice > bag.size())
                    {
                        std::cout<< "Invalid #, please choose a valid number!" << std::endl;
                        std::cin >> choice;
                    }

                    for(std::list<std::string>::iterator i = bag.begin(); i != bag.end(); i++)
                    {
                        if(choice == place)
                        {
                            bag.erase(i);
                        }
                        place++;
                    }
                }
                break;

            //CHECKING if KEY is in list
            case 'N':
                //checking to see if user has key to open lock
                for(std::list<std::string>::iterator i = bag.begin(); i != bag.end(); i++)
                {
                    if(*i == "GOLDENKEY")
                    {
                        std::cout << "You opened the vault! Congratulations, you win!" << std::endl;
                        std::cout << std::endl << "You won in " << steps << " steps!" << std::endl;
                        gameWin = true;
                    }
                }
                if(bag.size() == 0)
                {
                    std::cout << "You don't have the key." << std::endl;
                }
                break;
            
            default: 
                std::cout << "Invalid Choice." << std::endl;
        }

        //game timer
        if(gameWin)
        {
            //game was won, so no need for alarm dialogue
        }
        else if(steps == 12)
        {
            std::cout << std::endl;
            std::cout << "*******************************" << std::endl;
            std::cout << "The alarm just went off! Hurry!" << std::endl;
            std::cout << "*******************************" << std::endl;
            std::cout << std::endl;
        }
        else if(steps == 20)
        {
            std::cout << std::endl;
            std::cout << "*******************************" << std::endl;
            std::cout << "The cops are walking in...Hurry!!" << std::endl;
            std::cout << "*******************************" << std::endl;
            std::cout << std::endl; 
        }
        else if(steps == 35)
        {
            std::cout << std::endl;
            std::cout << "*******************************" << std::endl;
            std::cout << "Cops caught you! You lost!" << std::endl;
            std::cout << "*******************************" << std::endl;
            std::cout << std::endl;
            gameWin = true;
        }

        if(gameWin == false)
            play();
    }while(gameWin!=true);
}