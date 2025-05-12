#include "GameCharacter.h"

                                                       /*Function Definitions*/


//The copy constructor is called once when `p` is passed by value.
//A new `GameCharacter` object is created as a copy of `p1` when calling `foo1(p1);`
//This triggers the copy constructor.
//The function then returns this copied object by value
GameCharacter foo1(GameCharacter p)
{
    return p;
}

//The copy constructor is not called here because`p` is passed by reference.
////Since we are passing the argument as `GameCharacter&` no new object is created.
////The function simply returns the reference to the original object.
////No copies are made.
GameCharacter& foo2(GameCharacter& p)
{
    return p;
}

//The copy constructor is not called here because `p`is passed by reference.
//The function takes `GameCharacter& p` (a reference).
//This means no new object is created, and the function works with the original object.
// Even though the function returns `p`, it returns by value.
GameCharacter foo3(GameCharacter& p)
{
    return p;
}

// The copy constructor is called once when `p` is passed by value.
// Since `foo4` takes `p` as `GameCharacter p`, a new temporary object is created as a copy of the original argument.
// This triggers the copy constructor.
// The function then returns `p` by reference, which does not create an additional copy.
GameCharacter& foo4(GameCharacter p)
{
    return p;
}

//The copy constructor is called once when the function creates a new "GameCharacter" object.
//the function accepts "p" as "const GameCharacter&", meaning no copy is made when passing "p".
//but inside the function, a new local GameCharacter object "gc" is created.
//The function returns "gc" by reference.
//Since "gc" is a local variable, returning it normally would cause issues (returning a reference to a local variable).
//To prevent that, "gc" is declared "static", ensuring it persists beyond the function's scope.
GameCharacter& foo5(const GameCharacter& p)
{
    static GameCharacter gc; //// Static make sure no extra copies are created.
    return gc;
}
