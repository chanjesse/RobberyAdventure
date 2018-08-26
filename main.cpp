/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the main file.
*******************************************************************************/

#include <iostream>
#include "game.hpp"

int main()
{
    char enterLobby;
    int choice;

    //STORY OF GAME
    std::cout << "**********************************************************" << std::endl;
    std::cout << "You are robbing a bank. To open the vault you need a key." << std::endl;
    std::cout << "Sources tell you that there is a key hidden inside the bank." << std::endl;
    std::cout << "Find the key, open the vault, and retrieve the prize." << std::endl;
    std::cout << "Hurry, before the cops arrive!" << std::endl;
    std::cout << "**********************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "You are facing the door into the lobby." << std::endl;
    std::cout << "Enter 'o' to go in. " << std::endl;
    std::cin >> enterLobby;
    while(enterLobby != 'o' && enterLobby != 'O')
    {
        std::cout << "There's no backing out of this one! Enter 'o'!" << std::endl;
        std::cin >> enterLobby;
    }
    Game game;
    game.play();

  
  return 0;  
}