Text Based Game project implementing inheritance, polymorphism and pointers 
designed and written by Jesse Chan

DESIGN DESCRIPTION 

Game: Bank Robbery
GOAL: In this game, user will be playing as a robber attempting to steal money
from a vault in a bank. User will start off in the Lobby and explore different
rooms within the bank to find a key to in order to open the vault. There are a
total of 6 different rooms: Lobby, Office Room A, Office Room B, Break Room,
Executive Room, and the Vault. Each room has one different “action”. For
example, Break Room has an option for the user to open the microwave. The
user also has a bag that they can store items in when they encounter one. It has a
limit so if full the program will indicate so, at which point the user can choose to
discard an item of their choosing. Once the user has found the key, they can go to
the Vault room and the program will check if the key is in their bag. If so, they
win the game. Note that there is a timer based on the number of “steps” or
actions the user takes so it is not a guaranteed win. If the user takes too long, the
alarm will go off and the cops will eventually arrive losing the game for the user.

The following is a hierarchy of the program:
![image](https://user-images.githubusercontent.com/13804972/44624032-a1ec9f80-a896-11e8-8eac-f055646ac49b.png)

GAME CLASS

Data Members
Room *currentLocation: pointer that points to the parent class Room

Executive executive: object called executive from Executive derived class

BreakRoom breakroom: object called breakroom from BreakRoom derived class

Office office: object called office from Office derived class

OfficeTwo office2: object called Office2 from OfficeTwo derived class

Vault vault: object called vault from Vault derived class

Lobby lobby: objected call lobby from Lobby derived class

Std::list <std::string> bag: a list named bag that holds strings

int bagLimit: the bag limit of the list called bag

bool gameWin: a Boolean value that determines if the game status.

int steps: the tracker/timer for the user

bool file: used to see if user has already picked up the key

bool book: used to see if user has already picked up the book

bool pencil: used to see if user has already picked up pencil

Functions

Game()-links all the rooms, sets the current location to lobby, sets gameWin to
false, steps to 0, file, book, and pencil to all true.

Void play()-plays the game, prints out the menu based on the location of the
user, displays an option to show bag and bag contents, and keeps the timer for
the user.

ROOM CLASS

DATA MEMBERS
Pure virtual method called virtual char menu() = 0.
Virtual method called:
1) virtual Room* goRight() {return NULL;};
2) virtual Room* goLeft() {return NULL;};
3) virtual Room* goUp() {return NULL;};
4) virtual Room *goDown() {return NULL;};

Room *North- pointer to the respective Room’s north

Room *South- pointer to the respective Room’s south

Room *East- pointer to the respective Room’s east

Room *West- pointer to the respective Room’s west

