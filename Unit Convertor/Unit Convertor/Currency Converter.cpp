//
//  Currency Converter.cpp
//  Unit Convertor
//
//  Created by Harry Williams on 26/04/2017.
//  Copyright © 2017 Harry Williams. All rights reserved.
//

#include "Currency Converter.hpp"
#include <iomanip>

using namespace std;


//NOTE : 'PoundIn()' only is remarked, Dollar, Euro and Yuan in work in exactly the same way




void CurrencyConverter::PoundIn()

{
    
    //Having Chosen the Input Currency of Pound, and Inputting an Amount, the user is asked to select a destination currency
    
    cout << "Which Currency Would You Like To Convert To?" << endl;
    cout << "1 = Yuan (¥)" << endl;
    cout << "2 = Euros (€)" << endl;
    cout << "3 = Dollars ($)" << endl;
    cin >> OutputChoice;
    
    
    
    // The following sections run the appropriate maths to transfer one currency to the other
    
    if (OutputChoice == 1) //If 'Yuan' is selected
        
    {
    PoundsOutput = PoundsInput * PoundToYuan; //The pound output is the pound input, multiplied by the exchange rate
    cout << endl;
        cout << fixed << setprecision(2); //Sets the formatting for the Pound Output Float 
    cout << "£" << PoundsInput << " " "Is Equivalent to: ¥" << PoundsOutput << endl;
    }
    
    if (OutputChoice == 2)
        
    {
        PoundsOutput = PoundsInput * PoundToEuro;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "£" << PoundsInput << " " "Is Equivalent to: €" << PoundsOutput << endl;
    }
    
    if (OutputChoice == 3)
    {
        PoundsOutput = PoundsInput * PoundToDollar;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "£" << PoundsInput << " " "Is Equivalent to: $" << PoundsOutput << endl;
    }
    
if (OutputChoice <= 0 && OutputChoice >=5)
{
    InvalidIn();
    PoundIn();
}
}
    void CurrencyConverter::EuroIn()
{
        cout << "Which Currency Would You Like To Convert To?" << endl;
        cout << "1 = Yuan (¥)" << endl;
        cout << "2 = Pounds (£)" << endl;
        cout << "3 = Dollars ($)" << endl;
        cin >> OutputChoice;
        
        if (OutputChoice == 1)
        {
            EurosOutput = EurosInput / YuanToEuro;
            cout << endl;
            cout << fixed << setprecision(2);
            cout << "€" << EurosInput << " " "Is Equivalent to: ¥" << EurosOutput << endl;
        }
        
        if (OutputChoice == 2)
        {
            EurosOutput = EurosInput / PoundToEuro;
            cout << endl;
            cout << fixed << setprecision(2);
            cout << "€" << EurosInput << " " "Is Equivalent to: £" << EurosOutput << endl;
        }
        if (OutputChoice == 3)
        {
            EurosOutput = EurosInput / DollarToEuro;
            cout << endl;
            cout << fixed << setprecision(2);
            cout << "€" << EurosInput << " " "Is Equivalent to: $" << EurosOutput << endl;
        }
        if (OutputChoice <= 0 && OutputChoice >=4)
        {
            InvalidIn();
            EuroIn();
        }
}

void CurrencyConverter::DollarIn()
{
    cout << "Which Currency Would You Like To Convert To?" << endl;
    cout << "1 = Yuan (¥)" << endl;
    cout << "2 = Pounds (£)" << endl;
    cout << "3 = Euros (€)" << endl;
    cin >> OutputChoice;
    
    if (OutputChoice == 1)
    {
        DollarsOutput = DollarsInput * DollarToYuan;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "$" << DollarsInput << " " "Is Equivalent to: ¥" << DollarsOutput << endl;
    }
    
    if (OutputChoice == 2)
    {
        DollarsOutput = DollarsInput / PoundToDollar;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "$" << DollarsInput << " " "Is Equivalent to: £" << DollarsOutput << endl;
    }
    if (OutputChoice == 3)
    {
        DollarsOutput = DollarsInput * DollarToEuro;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "$" << DollarsInput << " " "Is Equivalent to: €" << DollarsOutput << endl;
    }
    if (OutputChoice <= 0 && OutputChoice >=4)
    {
        InvalidIn();
        DollarIn();
    }
}

void CurrencyConverter::YuanIn()
{
    cout << "Which Currency Would You Like To Convert To?" << endl;
    cout << "1 = Dollars ($)" << endl;
    cout << "2 = Pounds (£)" << endl;
    cout << "3 = Euros (€)" << endl;
    cin >> OutputChoice;
    
    if (OutputChoice == 1)
    {
        YuanOutput = YuanInput / DollarToYuan;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "¥" << YuanInput << " " "Is Equivalent to: $" << YuanOutput << endl;
    }
    
    if (OutputChoice == 2)
    {
        YuanOutput = YuanInput / PoundToYuan;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "¥" << YuanInput << " " "Is Equivalent to: £" << YuanOutput << endl;
    }
    if (OutputChoice == 3)
    {
        YuanOutput = YuanInput * YuanToEuro;
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "¥" << YuanInput << " " "Is Equivalent to: €" << YuanOutput << endl;
    }
    if (OutputChoice <= 0 && OutputChoice >=4)
    {
        InvalidIn();
        YuanIn();
    }
}


void CurrencyConverter::InvalidIn()
{
    cin.ignore();
    cout << "This is not a valid input" << endl;
}



void CurrencyConverter::GoAgain()
{
    cout << "Press 1 to do another conversion, or 2 to return to main menu" << endl;
    cin >> AgainInput;
    if (AgainInput == 1)
    {
        cout << endl;
        GetInputCurrency();
    }
    
}





void CurrencyConverter::GetInputCurrency()
{
    
    while (AgainInput != 2)
        
    {
        
    cout << "This Programme Converts One Form of Currency Into Another" << endl;
    cout << endl;
    cout << "Please Select Your Input Currency" << endl;
    
    cout << "1 = Pounds (£)" << endl;
    cout << "2 = Euros (€)" << endl;
    cout << "3 = Dollars ($)" << endl;
    cout << "4 = Yuan (¥)" << endl;
    
    cin >> InputChoice;
    
    if (InputChoice == 1)
    {
        cout << "How Many Pounds (£)?: " << endl;
        cin >> PoundsInput;
        if (PoundsInput < 0)
        {
            cout << "That is not a valid input" << endl;
            GetInputCurrency();
        }
        PoundIn();
    }
    else if (InputChoice == 2)
    {
        cout << "How Many Euros (€)?: " << endl;
        cin >> EurosInput;
        if (EurosInput < 0)
        {
            cout << "That is not a valid input" << endl;
            GetInputCurrency();
        }
        EuroIn();
    
    }
    else if (InputChoice == 3)
    {
        cout << "How Many Dollars ($)?: " << endl;
        cin >> DollarsInput;
        if (DollarsInput < 0)
        {
            cout << "That is not a valid input" << endl;
            GetInputCurrency();
        }

        DollarIn();
    }
    else if (InputChoice == 4)
    {
        cout << "How Many Yuan (¥)?: " << endl;
        cin >> YuanInput;
        if (YuanInput < 0)
        {
            cout << "That is not a valid input" << endl;
            GetInputCurrency();
        }

        YuanIn();
    }
    else if (InputChoice >= 0 && InputChoice <= 5)     {
        InvalidIn();
        GetInputCurrency();
    }
    GoAgain();
    if (AgainInput !=1)
    {
        break;
    }
    
}
}
