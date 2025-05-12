#include "GameCharacter.h"

//Default Constructor
GameCharacter::GameCharacter()
{
    cout << "The default constructor is called" << endl;
    this->name = "Miner";
    this->tools = new string[3];//Dynamically allocating array
    this->tools[0] = "pickaxe";
    this->tools[1] = "shovel";
    this->tools[2] = "bow";
}
//Parameterized Constructor
GameCharacter::GameCharacter(string charName, string tool1, string tool2, string tool3)
{
    cout << "The parameterized constructor is called" << endl;
    this->name = charName;
    this->tools = new string[3];//Dynamically allocating array
    this->tools[0] = tool1;
    this->tools[1] = tool2;
    this->tools[2] = tool3;
}
//Copy Constructor (Deep Copy)
GameCharacter::GameCharacter(const GameCharacter& other)
{
    cout << "The copy constructor is called" << endl;
    this->name = other.name;
    this->tools = new string[3];//Dynamically allocating new memory
    for (int i = 0; i < 3; i++)
    {
        this->tools[i] = other.tools[i];//Copying values
    }
}

//Assignment Operator (Deep Copy)
GameCharacter& GameCharacter::operator=(const GameCharacter& other) 
{
    cout << "The assignment operator is called" << endl;
    if (this != &other) //Avoid selfassignment
    { 
        delete[] this->tools; //Free existing memory before copying new data
        this->name = other.name;
        this->tools = new string[3]; //Allocate new memory
        for (int i = 0; i < 3; i++) 
        {
            this->tools[i] = other.tools[i]; //Copy values
        }
    }
    return *this;
}

//Destructor (Properly deallocating dynamic memory)
GameCharacter::~GameCharacter()
{
    delete[] this->tools;
}

//Display Function
void GameCharacter::display() const
{
    cout << "Character Name: " << this->name << endl;
    cout << "Tools: " << this->tools[0] << ", " << this->tools[1] << ", " << this->tools[2] << endl;
}
