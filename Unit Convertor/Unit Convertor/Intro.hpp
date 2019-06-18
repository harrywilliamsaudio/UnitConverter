
//  Intro.hpp
//  Unit Convertor

#ifndef Intro_hpp
#define Intro_hpp
#include <stdio.h>
#include <iostream>

class Intro             // This class contains the welcome screen for the application
{
    int option;          // This 'option' integer stores the user's input from a number key
    int Reset;
    
public:
    
void runIntro();   //This function contains the welcome message, menu and user input validation
    int GetLoopReset();

  
};

#endif /* Intro_hpp */
