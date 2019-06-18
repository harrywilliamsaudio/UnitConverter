//
//  Intro.cpp
//  Unit Convertor
//
//  Created by Harry Williams on 23/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#include "Intro.hpp"
#include "Temperature.hpp"
using namespace std;

int Reset = 1; //This Reset Integer is What Controls the Main Loop of The Programme. It is Initiliased as a 1.



void Intro::runIntro() //Function to Display the Homepage. Handling of Input is carried out in main.cpp

{
    cout << "Welcome to Harry's Utility Box" << endl;
    cout << "This Programme Can Carry Out a Range of Unit Conversions" << endl;
    cout << endl;
    cout << "Which Category Would You Like?" << endl;
    cout << endl;
    cout << "1 = Temperature Converter" << endl;
    cout << "2 = Coin Counter" << endl;
    cout << "3 = Currency Converter" << endl;
    cout << "4 = Prime Number Checker" <<endl;
    cout << "5 = Ohm's Law Conversions" << endl;
        cout << "9 = End Programme" << endl;
    
}

int Intro::GetLoopReset() // Returns a 0 - which resets the loop in main.cpp
{
    return 0;
}
    



