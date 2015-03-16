//FOODS.h
//EatMe
//Function declarations...





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
    
    ~FOODS(); //DESTRUCTOR
    
    string getName(); //TO GET NAME OF PERSON
    double getCalories();
    double getServings();
    

private:
    
    string newName;
    double newCalories;
    double newServings;
    
};

#endif