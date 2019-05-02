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


        /*
        Purpose: Calculates the users Calorie Maintenance level based on their weight in pounds.
        Pre: User provides their weight in pounds to the program.
        Post: An upper and lower bound for Calories are calculated and then averaged to give the Caloric Maintenance level.
        */
        void CalcMaintenance();

         /*
        Purpose: Gives information to the user on how to effectively lose weight.
        Pre: *none
        Post: This menu screen is purely informational and only gives advice for someone to lose weight
        */
        void LoseWeight();



};

#endif