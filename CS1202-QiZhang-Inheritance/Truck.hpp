//
//  Truck.hpp
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//
// Qi Zhang
// CIS 1202 101
// 11/28/21


#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>

#include "Vehicle.h"

#include <string>

using namespace std;
  
class Truck : public Vehicle
{
private:
    double towingCapacity;    // Number of doors
    
public:
    // Default constructor
    Truck(): Vehicle()
    { towingCapacity = 0.0;}
    
    // Constructor
    Truck(string m, int year, double tow): Vehicle(m, year)
    { setTowingCapacity(tow); }
    
    // Mutator function
    void setTowingCapacity(double tow)
    { towingCapacity = tow;}
    
    // Accessor functions
    double getNumDoors() const
    { return towingCapacity; }
    
    void displayInfo() const;
};

#endif /* Truck_hpp */
