//

//  FOODS.cpp

//  Don't Eat That!

// function definitions....do this test but when you really do it maybe remove overloaded constructor "FOODS::FOODS"

//  Created by ISMD on 3/13/15.

//  Copyright (c) 2015 ISMD. All rights reserved.

//



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