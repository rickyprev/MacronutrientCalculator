#ifndef MACRO_H
#define MACRO_H
#include <iostream>
/* 

This is the header file (.h). It contains all the prototypes for the methods that are used in
the MacroNutrient Calculator.

*/

class MacroCalcClass
{
    public:
        /*
        Purpose: The home menu for the MacroNutrientCalculator
        Pre: none
        Post: Displays the menu.
        */
        void Menu();

        /*
        Purpose: Gives a list of options for the user to choose from.
        Pre: The home menu was already shown to the user.
        Post: Displays the options for the user and waits for their input.
        */
        int MenuOptions();

        /*
        Purpose: Shows the user how Calories are calculated on food labels and explains how they 
                 come up with their numbers.
        Pre: User provides the numbers of each macronutrient on the food label.
        Post: The total amount of Calories for the item is displayed to the user. Options to repeat or choose
              another option are given.
        */
        int CalcFoodCal();

};

#endif