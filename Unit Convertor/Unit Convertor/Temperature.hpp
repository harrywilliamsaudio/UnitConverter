//
//  Temperature.hpp
//  Unit Convertor
//
//  Created by Harry Williams on 23/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#ifndef Temperature_hpp
#define Temperature_hpp
#include <iostream>
#include <stdio.h>

class TemperatureConverter
{
    double CTemp;        // Reference for Celcius
    double FTemp;        // Reference for Farenheit
    double KTemp;        // Reference for Kelvin
    int TempUnit;        // Input Character (1, 2, or 3) for Unit Selection
    int AgainInput;      // The Input for Go Again function
    
    
public:
    
    void UnitSelect();  // Function for selecting Unit and Conversion
    void CelciusIn();   // Function for turning Celcius to Farenheit and Kelvin
    void FarenheitIn(); // Function for turning Farenheit to Celcius and Kelvin
    void KelvinIn();    // Function for turning Kelvin to Celcius and Farenheit
    void InvalidIn();   // Function for Invalid Input
    void GoAgain();     // Function for repeating conversion without going to main menu 
};

#endif /* Temperature_hpp */
