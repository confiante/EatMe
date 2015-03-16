//FOODS.h
//EatMe
//Function declarations...

#include <iostream>
#include "FOODS.h"

using namespace std;

int main()

{
    
    string name;
    double calories;
    double servings;
    
    cout << "What is your name? \n";
    cin >> name;
    
    cout << "How many calories do you have left to eat for the day? \n";
    cin >> calories;
    
    cout << "Here's what you can eat: \n";
    
    cout << "How many servings would you like?";
    cin >> servings;
    
    
    FOODS Eater_1(name, calories, servings);
    
    cout << "Client's Name is: " << Eater_1.getName() << endl;
    cout << "Calories left to eat are" << Eater_1.getCalories() << endl;
    cout << "Your servings are" << Eater_1.getServings() << endl;
    
    return 0;
    
    
}