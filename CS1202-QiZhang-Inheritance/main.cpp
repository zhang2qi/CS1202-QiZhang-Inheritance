//
//  main.cpp
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//  Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.
// Qi Zhang
// CIS 1202 101
// 11/28/21

#include <iostream>
#include <iomanip>
#include "Car.hpp"
#include "Truck.hpp"
//#include "Vehicle.h"

#include <string>

using namespace std;
 
int main()
{
    string manufacturer;
    int yearBuilt;
    int numDoors;
    double towingCap;
    
    cout << "Vehicle Program:\n";
    
    cout << "\n";
    cout << "Vehicle:\n";
    
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    
    Vehicle oV(manufacturer, yearBuilt);
    
    cout << "Vehicle Information:\n";
    
    oV.displayInfo();
    
    cout << "\n";
    cout << "Car:\n";
    
    cout << "Enter the manufacturer: ";
    cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)
    getline(cin, manufacturer);
    
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    
    cout << "Enter the number of doors: ";
    cin >> numDoors;
    
    Car oC(manufacturer, yearBuilt, numDoors);
    
    cout << "Vehicle Information:\n";
    
    oC.displayInfo();
    
    cout << "\n";
    cout << "Truck:\n";
    //cout << setprecision(4);
    
    
    cout << "Enter the manufacturer: ";
    cin.ignore(); // ignores \n that cin >> str has lefted (if user pressed enter key)
    getline(cin, manufacturer);
    
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    
    cout << "Enter the towing capacity: ";
    cin >> towingCap;
    
    Truck oT(manufacturer, yearBuilt, towingCap);
    
    cout << "Vehicle Information:\n";
    
    oT.displayInfo();
    
    return 0;
 }

