//
//  Truck.cpp
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//
// Qi Zhang
// CIS 1202 101
// 11/28/21

#include "Truck.hpp"
#include "Vehicle.h"


#include  <iostream>                //  Needed  for  cout
#include  <cstdlib>                  //  Needed  for  the  exit  function

#include <string>

using namespace std;

//******************************************************
// Member function Truck::displayInfo      *
//******************************************************

void Truck::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << '\n';
}
