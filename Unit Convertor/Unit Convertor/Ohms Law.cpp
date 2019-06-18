//
//  Ohms Law.cpp
//  Unit Convertor
//
//  Created by Harry Williams on 27/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#include "Ohms Law.hpp"
#include <iostream>
using namespace std;


//Using Voltage Unknown as Example. Current and Resistance are similar just with rearranged equation.

//Takes an Input for Current and Resistance, storing them in integers 'I' and 'R' respectively.
//Input validation stage to ensure both inputs are positive - if it fails, an error message displays and the function is retriggered
//If validation is passed, then the value of V is assigned the result of 'I * R'
//Following section formats output for human readability

void OhmConverter::VoltageUnknown()
{
    cout << "Please Enter the Value for Current (A)" << endl;
    cin >> I;
    cout << "Please Enter the Value for Resistance (Ω) " << endl;
    cin >> R;
    
    if (I  >=0 && R >=0)
    {
        V = I*R;
        cout << "When Current = " << I << "A " << "And Resistance = " << R << "Ω" << endl;
        cout << "Then Voltage = " << V << "V" << endl;
        cout << endl;
    }
    else if (I <0 && R<0)
    {
        cout << "This is not a valid input" << endl;
        VoltageUnknown();
    }
}

void OhmConverter::CurrentUnknown()
{
    cout << "Please Enter the Value for Voltage (V)" << endl;
    cin >> V;
    cout << "Please Enter the Value for Resistance (Ω) " << endl;
    cin >> R;
    
    if (V  >=0 && R >=0)
    {
        I = V/R;
        cout << "When Voltage = " << V << "V " << "And Resistance = " << R << "Ω" << endl;
        cout << "Then Current = " << I << "A" << endl;
        cout << endl;
    }
    else if (V <0 && R <0)
    {
        cout << "This is not a valid input" << endl;
        CurrentUnknown();
    }
}

void OhmConverter::ResistanceUnknown()
{
    cout << "Please Enter the Value for Voltage (V)" << endl;
    cin >> V;
    cout << "Please Enter the Value for Current (A) " << endl;
    cin >> I;
    
    if (I  >=0 && V >=0)
    {
        R = V/I;
        cout << "When Voltage = " << V << "V " << "And Current = " << I << "A" << endl;
        cout << "Then Resistance = " << R << "Ω" << endl;
        cout << endl;
    }
    else if (I <0 && V <0)
    {
        cout << "This is not a valid input" << endl;
        ResistanceUnknown();
    }
}

void OhmConverter::GoAgain()
{
    cout << "Press 1 to do another conversion, or 2 to return to main menu" << endl;
    cin >> AgainKey;
    if (AgainKey == 1)
    {
        cout << endl;
        UnitSelect();
    }

}



//This Section is what is run from main.cpp. It allows the user to select an Unknown, which will trigger a corresponding value.

void OhmConverter::UnitSelect()
{
    
    while (AgainKey !=2) {
        cout << "Which Variable is an Unknown?" << endl;
        cout << "1 = Voltage" << endl;
        cout << "2 = Current" << endl;
        cout << "3 = Resistance" << endl;
        cin >> OhmUnit;
        
        if (OhmUnit == 1)
        {
            VoltageUnknown();
        }
        if (OhmUnit == 2)
        {
            CurrentUnknown();
        }
        if (OhmUnit == 3)
        {
            ResistanceUnknown();
        }
        if (OhmUnit <1 && OhmUnit >3)
        {
            cout << "That is not a valid input" << endl;
            UnitSelect();
        }
        GoAgain();
        if (AgainKey != 1)
        {
            break;
        }

    }
}
