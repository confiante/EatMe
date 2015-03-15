//

//  FOODS.h

//  Don't Eat That!

//  Function declarations...

//  Created by ISMD on 3/13/15.

//  Copyright (c) 2015 ISMD. All rights reserved.

//




#include <iostream>
#include <string>

using namespace std;

#ifndef FOODS_H
#define FOODS_H


class FOODS

{
public:
    
    FOODS(); // CONSTRUCTOR
    
    FOODS(string, double, double); // OVERLOAD CONSTRUCTOR
    
private:
    
    string newName;
    double newCalories;
    double newServings;
    
};

#endif