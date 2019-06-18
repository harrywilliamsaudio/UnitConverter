//
//  Ohms Law.hpp
//  Unit Convertor
//
//  Created by Harry Williams on 27/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#ifndef Ohms_Law_hpp
#define Ohms_Law_hpp
#include <stdio.h>

class OhmConverter
{
    double V; //Value for Voltage
    double I; //Value for Current
    double R; //Value for Resistance
    
    //V = IR
    //I = V/R
    //R = V/I
    
    int OhmUnit;
    int AgainKey;

public:
    
    void UnitSelect();
    void VoltageUnknown();
    void CurrentUnknown();
    void ResistanceUnknown();
    void GoAgain();
    
};

#endif /* Ohms_Law_hpp */
