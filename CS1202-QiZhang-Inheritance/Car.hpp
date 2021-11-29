//
//  Car.hpp
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//
// Qi Zhang
// CIS 1202 101
// 11/28/21

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>

#include "Vehicle.h"

#include <string>

using namespace std;
  
class Car : public Vehicle
{
private:
    int numDoors;    // Number of doors
    
public:
    // Default constructor
    Car(): Vehicle()
    { numDoors = 0;}
    
    // Constructor
    Car(string m, int year, int door): Vehicle(m, year)
    { setNumDoors(door); }
    
    // Mutator function
    void setNumDoors(int door)
    { numDoors = door;}
    
    // Accessor functions
    int getNumDoors() const
    { return numDoors; }
    
    void displayInfo() const;
    
    
};



#endif /* Car_hpp */
