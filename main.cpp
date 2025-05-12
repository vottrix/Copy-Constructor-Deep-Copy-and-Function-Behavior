#include "GameCharacter.h"

int main() 
{
    GameCharacter p1;  //Calls default constructor
    GameCharacter p2 = p1;  //Calls copy constructor
    p1 = p2;  //Calls assignment operator

    p1.display();  //Display character details

    foo1(p1);
    foo2(p1);
    foo3(p1);
    foo4(p1);
    foo5(p1);

    return 0;
}
