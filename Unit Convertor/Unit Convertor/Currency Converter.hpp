//
//  Currency Converter.hpp
//  Unit Convertor
//
//  Created by Harry Williams on 26/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#ifndef Currency_Converter_hpp
#define Currency_Converter_hpp

#include <stdio.h>
#include <iostream>

class CurrencyConverter
{
    double PoundsInput; //This is the conversion amount on the way in.
    double EurosInput;
    double DollarsInput;
    double YuanInput;
    
    double PoundToDollar = 1.28382; //The relevant exchange rates between all possible conversions. Correct as of 25th April 2017
    double PoundToEuro = 1.18100;
    double PoundToYuan = 8.84984;
    double DollarToEuro = 0.919911;
    double DollarToYuan = 6.89251;
    double YuanToEuro = 0.133468;
    
    int InputChoice; //Chooses Input Currency
    int OutputChoice; //Chooses Output Currency
    int AgainInput; //Input for GoAgain() function
    
    
public:
    
    void GetInputCurrency(); //Asks The User which currency they want to convert
    void PoundIn(); //Function for Converting Pounds
    void EuroIn();  //Function for Converting Euro
    void DollarIn(); //Function for Converting Dollars
    void YuanIn();   //Function for Converting Yuan
    void InvalidIn(); //Error Message
    void GoAgain(); //Repeats or Ends Currency Converter
    
    float PoundsOutput; //Floats for the printed output. Used floats for the ability to set precision to ensure correct output - i.e. '£0.00, $0.00, €0.00, etc'
    float EurosOutput;
    float DollarsOutput;
    float YuanOutput;
};





#endif /* Currency_Converter_hpp */
