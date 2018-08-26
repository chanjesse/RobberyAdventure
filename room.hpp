/*******************************************************************************
* Name: Jesse Chan
* Date: 3/10/17
* Description: this is the class specification for the parent class, Room.
*******************************************************************************/

#ifndef ROOM_HPP
#define ROOM_HPP

class Room
{
    
    public:
        //pure virtual 
        virtual char menu() = 0;

        virtual Room* goRight() {return NULL;};
        virtual Room* goLeft() {return NULL;};
        virtual Room* goUp() {return NULL;};
        virtual Room* goDown() {return NULL;};

        Room *North;
        Room *South;
        Room *East;
        Room *West;
};

#endif