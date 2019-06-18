//
//  Prime Number.hpp
//  Unit Convertor
//
//  Created by Harry Williams on 27/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#ifndef Prime_Number_hpp
#define Prime_Number_hpp

#include <stdio.h>
#include <iostream> 
#include <cmath>

class PrimeNumber
{

    int Number; // The User Inputted Number
    int i = 0;  // The Divider Integer, used to determine if a number is prime
    bool Prime = true; //A Boolean (True/False) which is updated dependent on the outcome of the Prime Checker function.
    int AgainInput; //User input for the go again function
        
public:
    
    void IsPrime();
    void GoAgain();
    
    
};





#endif /* Prime_Number_hpp */


