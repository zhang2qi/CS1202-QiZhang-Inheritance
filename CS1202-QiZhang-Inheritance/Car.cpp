//
//  Car.cpp
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//
// Qi Zhang
// CIS 1202 101
// 11/28/21

#include "Car.hpp"
#include "Vehicle.h"


#include  <iostream>                //  Needed  for  cout
#include  <cstdlib>                  //  Needed  for  the  exit  function

#include <string>

using namespace std;

//******************************************************
// Member function Car::displayInfo      *
//******************************************************

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "Doors: " << numDoors << '\n';
}
