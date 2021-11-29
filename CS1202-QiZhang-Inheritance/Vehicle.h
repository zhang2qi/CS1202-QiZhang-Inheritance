//
//  Vehicle.h
//  CS1202-QiZhang-Inheritance
//
//  Created by Qi Zhang on 11/28/21.
//
// Qi Zhang
// CIS 1202 101
// 11/28/21

#ifndef Vehicle_h
#define Vehicle_h

#include <string>

using namespace std;

//  Vehicle  class  declaration
 
class Vehicle
{
private:
    string  nameManufacturer;
    int yearBuilt;
public:
    //  Default  constructor
    Vehicle()
    {  nameManufacturer = ""; yearBuilt=  1900;  }
    
    //  Constructor
    Vehicle(string s, int i)
    {  nameManufacturer =  s;  yearBuilt = i;}
    
    //  Mutator  function
    void  setManufacturer(string s)
    {  nameManufacturer  =  s;  }
    
    void  setYearBuilt(int i)
    {  yearBuilt  =  i;  }
    
    //  Accessor  functions
    string  getManufacturer()  const
    {  return  nameManufacturer;  }
    
    int  getYearBuilt()  const
    {  return  yearBuilt;  }
    
    void  displayInfo()  const;
      
};


#endif /* Vehicle_h */
