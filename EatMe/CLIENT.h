/* /BASE CLASS
// EMPLOYEE.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>

using namespace std;
using std::string;

class employee  // the BASE class
{
private:
    string name;
    double salary;
    int year;
    
public:
    char ID;
    string getname()
    { return name; }
    double getsalary()
    { return salary; }
    int getyear()
    {return year;  }
    
    void putname(string n)
    {  name = n;  }
    void putsalary(double s)
    { salary = s; }
    void putyear(int y)
    { year = y;  }
    
};
#endif

*\