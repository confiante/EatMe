//FOODS.cpp
//EatMe
//function definitions

#include "FOODS.h"

FOODS::FOODS ()

{
    string newName;
    newCalories = 0;
    newServings = 0;
}


FOODS::FOODS(string name, double calories, double servings)

{
    string newName = name;
    double newCalories = calories;
    double newServings = servings;
}

FOODS::~FOODS()
{
    
}

string FOODS::getName() //get name of client
{
    return newName;
}
