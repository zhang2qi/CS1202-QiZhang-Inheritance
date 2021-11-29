//
//  Vehicle.cpp
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//
// Qi Zhang
// CIS 1202 101
// 11/28/21

#include <stdio.h>
#include  <iostream>                //  Needed  for  cout
#include  <cstdlib>                  //  Needed  for  the  exit  function
using  namespace  std;
#include "Vehicle.h"

#include <string>

using namespace std;

//******************************************************
// Member function Vehicle::displayInfo      *
//******************************************************

void Vehicle::displayInfo() const
{
    cout << "Manufacturer: " << nameManufacturer << '\n';
    cout << "Year Built: " << yearBuilt << '\n';
}
