



//  Coin Counter.cpp
//  Unit Convertor

#include "Coin Counter.hpp"
#include <iomanip>

void CoinCounter::CoinIntro() // Function for Welcome Message
{
    cout << "This Programme Counts Your Change" << endl;
    cout << "" << endl;
}


// The Following Section asks the user how many of each coin they have, then stores their answer into the the relevant Integer Varaible.


void CoinCounter::GetPence()
{
    cout << "How Many 1p Coins Do You Have?: " << endl;
    cin >> OnePence;
    if (OnePence < 0)
    {
        cout << "That is not a valid input" << endl;
        GetPence();
    }
}


void CoinCounter::GetTwoPence()
{
    cout << "How Many 2p Coins Do You Have?: " << endl;
    cin >> TwoPence;
    if (TwoPence < 0)
    {
        cout << "That is not a valid input" << endl;
        GetTwoPence();
    }

}


void CoinCounter::GetFivePence()
{
    cout << "How Many 5p Coins Do You Have?: " << endl;
    cin >> FivePence;
    if (FivePence < 0)
    {
        cout << "That is not a valid input" << endl;
        GetFivePence();
    }

}


void CoinCounter::GetTenPence()
{
    cout << "How Many 10p Coins Do You Have?: " << endl;
    cin >> TenPence;
    if (TenPence < 0)
    {
        cout << "That is not a valid input" << endl;
        GetTenPence();
    }

}


void CoinCounter::GetTwentyPence()
{
    cout << "How Many 20p Coins Do You Have?: " << endl;
    cin >> TwentyPence;
    if (TwentyPence < 0)
    {
        cout << "That is not a valid input" << endl;
        GetTwentyPence();
    }

}


void CoinCounter::GetFiftyPence()
{
    cout << "How Many 50p Coins Do You Have?: " << endl;
    cin >> FiftyPence;
    if (FiftyPence < 0)
    {
        cout << "That is not a valid input" << endl;
        GetFiftyPence();
    }

}


void CoinCounter::GetPound()
{
    cout << "How Many £1 Coins Do You Have?: " << endl;
    cin >> Pound;
    if (Pound < 0)
    {
        cout << "That is not a valid input" << endl;
        GetPound();
    }

}


void CoinCounter::GetTwoPounds()
{
    cout << "How Many £2 Coins Do You Have?: " << endl;
    cin >> TwoPounds;
    if (TwoPounds < 0)
    {
        cout << "That is not a valid input" << endl;
        GetTwoPounds();
    }

}


void CoinCounter::GetMoney() //Simply a container function for the individual Get(CoinType) functions.
{
    GetPence();
    GetTwoPence();
    GetFivePence();
    GetTenPence();
    GetTwentyPence();
    GetFiftyPence();
    GetPound();
    GetTwoPounds();
}


void CoinCounter::CoinCount() //Takes the previously collected user input of coin quantity, and multiplies it by the value of the coin, relative to 1 Pound. Then stores answer into the totalMoney float variable
{
    totalMoney = (OnePence * 0.01) + (TwoPence * 0.02) + (FivePence * 0.05) + (TenPence * 0.10) + (TwentyPence * 0.20) + (FiftyPence * 0.50) + Pound + (TwoPounds * 2.0);
    
    cout << fixed << setprecision(2); //This line sets the precision of the float to 2 decimal places so it outputs as we expect to see money written
    cout << "You have a total of: £" << totalMoney << endl; //Pushes totalMoney back into the cout message
}


void CoinCounter::GoAgain() //Either repeats PiggyBank(), or if AgainInput isn't a 1
{
    cout << "Press 1 to do another conversion, or 2 to return to main menu" << endl;
    cin >> AgainInput;
    if (AgainInput == 1)
    {
        cout << endl;
        PiggyBank();
    }
    
}



void CoinCounter::PiggyBank() //Same Type of Loop as seen in the Temperature Converter. Runs through the functions, then asks the user to GoAgain. Dependent on User's Input the prog will either run again, or revert to the menu

{
    while (AgainInput != 2)
    {
        CoinIntro();
        GetMoney();
        CoinCount();
        GoAgain();
        
    if (AgainInput != 1)
    {
        break;
    }
    }
}
