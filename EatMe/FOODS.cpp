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
    
    newCalories = 0;
    newServings = 0;
    
}



FOODS::FOODS(double calories, double servings)

{
    double newCalories = calories;
    double newServings = servings;
}