//
//  Temperature.cpp
//  Unit Convertor
//
//  Created by Harry Williams on 23/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#include "Temperature.hpp"
#include "Intro.hpp"
using namespace std;

void TemperatureConverter::CelciusIn()
{
    cout << "Please Enter Temperature in Celcius: ";   // Gets Input Temperature from User and Stores as CTemp
    cin >> CTemp;
    if (CTemp >= -273.15)                               // Rejects User Input if Below Absolute Zero (0°K)
    {
    FTemp = (CTemp * 1.8) + 32;                        // Updates FTemp and KTemp, Applying the Conversion to User's Input
    KTemp = (CTemp + 273.15);
    cout << "Farenheit Temperature Value is: ";        // Outputs Converted Temperatures
    cout << FTemp << "°F" << endl;
    cout << "Kelvin Value is: ";
    cout << KTemp << "°K" << endl;
    }
    else if (CTemp < -273.15)                           // If The Input Temperature is Below Absolute Zero, This Error Message Will Display and Retrigger the Function
    {
        cout << "Temperature Below Absolute Zero, Try Again." << endl;
        cout << endl;
        CelciusIn();
    }
}

void TemperatureConverter::FarenheitIn()
{
    cout << "Please Enter Temperature in Farenheit: ";
    cin >> FTemp;
    if (FTemp >= -459.67)
    {
    CTemp = (FTemp - 32) / 1.8;
    KTemp = (FTemp - 32) / 1.8 + 273.15;
    cout << "Celcius Temperature Value is: ";
    cout << CTemp << "°C" << endl;
    cout << "Kelvin Temperature Value is: ";
    cout << KTemp << "°K" << endl;
    }
    else if (FTemp < -459.67)
    {
        cout << "Temperature Below Absolute Zero, Try Again." << endl;
        cout << endl;
        FarenheitIn();

    }
}



void TemperatureConverter::KelvinIn()
{
    cout << "Please Enter Temperature in Kelvin: ";
    cin >> KTemp;
    if (KTemp >= 0)
    {
    CTemp = KTemp - 273.15;
    FTemp = KTemp * 9/5 - 459.67;
    cout << "Celcius Temperature Value is: ";
    cout << CTemp << "°C" << endl;
    cout << "Farenheit Temperature Value is: ";
    cout << FTemp << "°F" << endl;
    }
    else if (KTemp < 0)
    {
        cout << "Temperature Below Absolute Zero, Try Again." << endl;
        cout << endl;
        KelvinIn();

    }
}


void TemperatureConverter::InvalidIn()
{
    cin.ignore();
    cout << "This is not a valid input" << endl;
    
}

void TemperatureConverter::GoAgain()
{
    cout << "Press 1 to do another conversion, or 2 to return to main menu" << endl;
    cin >> AgainInput;
    if (AgainInput == 1)
    {
        cout << endl;
        UnitSelect();
    }
    
   }


void TemperatureConverter::UnitSelect()

{
    
    while (AgainInput !=2) // Will Loop Until the User hits '2' in the Go Again function
    
    {
        cout << "Please Select The Temperature Unit You Want To Convert" << endl; //Asks the User for Input Temperature Unit
        cout << "Celcius = 1" << endl;
        cout << "Farenheit = 2" << endl;
        cout << "Kelvin = 3"  << endl;
        cin >> TempUnit;
        if (TempUnit == 1) //If 1 is Selected, the Celcius Conversion Function Runs, 2 Farenheit, 3 Kelvin
        {
            CelciusIn();
        }
        else if (TempUnit == 2)
        {
            FarenheitIn();
        }
        else if (TempUnit == 3)
        {
            KelvinIn();
        }
        else if (TempUnit <1 && TempUnit >3) // If Unit Less than 1, or More than 3, the Invalid Message Appears
        {
            InvalidIn();
            UnitSelect();
        }
        GoAgain(); // Asks the User to Repeat Temperature Conversion, or Return to Menu
        if (AgainInput != 1)
        {
            break;
        }
        
    }
    
}
