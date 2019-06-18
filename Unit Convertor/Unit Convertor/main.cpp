//
//  main.cpp
//  Unit Convertor
//
//  Created by Harry Williams on 23/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#include <iostream>
#include "Intro.hpp"
#include "Temperature.hpp"
#include "Coin Counter.hpp"
#include "Currency Converter.hpp"
#include "Ohms Law.hpp"
#include "Prime Number.hpp"
using namespace std;


int Select;

int main(int argc, const char * argv[])
{
    
//Creates an Instance of Intro, which can call the GetLoopReset. Kept Separate for Ease of Tracking.
    
    Intro reset;
    
//This Loop Houses the Main Body of The Programme. While 'GetLoopReset' is 0, Programme will Loop. reset.GetLoopReset(); simply returns a zero, and restarts the loop//
  
    while (reset.GetLoopReset() == 0 || Select != 9)
        {

    //Creates an Instance of the Intro Class
    //Runs the runIntro Function - Which Displays the Homepage/Option List
            
    Intro newIntro;
    newIntro.runIntro();
            
    //Takes user Input to Select which sub-programme will run
            
        cin >> Select;
            
            
            if (Select == 1)
            {
                TemperatureConverter newTemperature;
                newTemperature.UnitSelect();
                reset.GetLoopReset();
            }
                    
            if (Select == 2)

            {
                CoinCounter newCoinCounter;
                newCoinCounter.PiggyBank();
                reset.GetLoopReset();
            }
            
            if (Select == 3)
            {
                CurrencyConverter newCurrencyConverter;
                newCurrencyConverter.GetInputCurrency();
                reset.GetLoopReset();
            }
            
            if (Select == 4)
            {
                PrimeNumber newPrimeNumber;
                newPrimeNumber.IsPrime();
                reset.GetLoopReset();
            }
                
            if (Select == 5)
            {
                OhmConverter newOhmConverter;
                newOhmConverter.UnitSelect();
                reset.GetLoopReset();
            }
            
            if (Select == 9)
            {
                break;
            }
            else if (Select <=0 || Select >= 10)
            {
                cout << "That is not a valid input" << endl;
                reset.GetLoopReset();
            }
        }
            
    return 0;
    
        }



