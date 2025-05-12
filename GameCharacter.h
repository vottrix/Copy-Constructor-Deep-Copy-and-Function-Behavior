#pragma once
using namespace std;//Ensures cout, endl, and string work without std::
#include <iostream>//Required for cout, endl
#include <string>//Required for string

class GameCharacter 
{
private:
    string name;
    string* tools;

public:
    GameCharacter();//Default Constructor
    GameCharacter(string charName, string tool1, string tool2, string tool3);//Parameterized Constructor
    GameCharacter(const GameCharacter& other);//Copy Constructor
    GameCharacter& operator=(const GameCharacter& other);//Assignment Operator
    ~GameCharacter();  //Destructor

    void display() const;  //Function to display character details
};

//Function Prototypes (Ensure they match `GameCharacter.cpp`)
GameCharacter foo1(GameCharacter p);
GameCharacter& foo2(GameCharacter& p);
GameCharacter foo3(GameCharacter& p);
GameCharacter& foo4(GameCharacter p);
GameCharacter& foo5(const GameCharacter& p);
