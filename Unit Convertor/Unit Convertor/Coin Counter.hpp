//
//  Coin Counter.hpp
//  Unit Convertor
//
//  Created by Harry Williams on 23/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#ifndef Coin_Counter_hpp
#define Coin_Counter_hpp
#include <iostream>
#include <stdio.h>
using namespace std;


class CoinCounter
{
    int OnePence;         // This section establishes integer variables for each type of coin.
    int TwoPence;         //
    int FivePence;        //
    int TenPence;         //
    int TwentyPence;      //
    int FiftyPence;       //
    int Pound;            // The Purpose of these is to represent the amount of each coin the user has, rather than the value of the coin. Coin value is handled within 'PiggyBank()'
    int TwoPounds;
    
    
    int AgainInput;       // Input for the Go Again Function
    float totalMoney;     // The Sum of all the coin values. This a float because SetPrecision can be used to make sure it always outputs to 2 Decimal Places e.g '£10.50'
  
     
public:
    
    void GetPence();      //The GetPence function asks the user how many pennies they have, then stores their input into the OnePence integer. Repeated for each coin
    void GetTwoPence();
    void GetFivePence();
    void GetTenPence();
    void GetTwentyPence();
    void GetFiftyPence();
    void GetPound();
    void GetTwoPounds();
    void GetMoney();     //The Get Money function runs each of the above functions one after the other
    void CoinIntro();    //Welcome Message
    void CoinCount();    // Shows the User their total amount of money in the '£PP.pp' format
    void PiggyBank();    //The function which multiplies the Coin Quantity by their Value Multiplier Relative to the Pound. E.g. 1 Penny = Pound * 0.01
    void GoAgain();

};





#endif /* Coin_Counter_hpp */
