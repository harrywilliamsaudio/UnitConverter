//
//  Prime Number.cpp
//  Unit Convertor
//
//  Created by Harry Williams on 27/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#include "Prime Number.hpp"
using namespace std;


//Asks the user is they want to do another conversion, or return to the main menu. Doing another conversion will recall IsPrime(); and inputting 2 forces the code to run the reset.GetLoopReset() function in main.cpp

void PrimeNumber::GoAgain()
{
    cout << "Press 1 to do another conversion, or 2 to return to main menu" << endl;
    cin >> AgainInput;
    if (AgainInput == 1)
    {
        cout << endl;
        IsPrime();
    }
    
}

void PrimeNumber::IsPrime()
{
    Prime = true; 
    
    cout << "Prime Number Checker" << endl;
    cout << "Please Enter a Number " << endl;
    cin >> Number;
    
    
    
    // If the Input Number divided by 2 returns a remainder of 0 (i.e, is divisible by it) the Prime Bool is Updated to False. If it isn't directly divisible to 2, the divider is incremented and process repeated.
    
    //If a 2 is input, the condition of the divider being Less than or Equal to the Input Number ensures the correct response comes out. 2 is divisible by 2 with no remainder, yet is still Prime.
    
    for(i = 2; i <= Number / 2; ++i)
    {
        if(Number % i == 0)
        {
            Prime = false;
            break;
        }
    }
    
    
    // Outputs whether or not the number is Prime
    
    if (Prime)
    {
        cout << Number << " Is a Prime Number" << endl;
        cout << endl;
    }
    else
    {
        cout << Number << " Is Not a Prime Number" << endl;
        cout << endl;
    }
    
    GoAgain();
    
}
