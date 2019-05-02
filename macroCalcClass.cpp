#include <iostream>

using namespace std;


class MacroCalcClass{


public:
void Menu(){

int userSelection=0;
bool validChoice=false;

cout<<"****************************************"<<endl;  //40 stars
cout<<"*                                      *"<<endl;
cout<<"*                                      *"<<endl;
cout<<"*            Welcome to the            *"<<endl;
cout<<"*                                      *"<<endl;
cout<<"*       MacroNutrient Calculator       *"<<endl;
cout<<"*                                      *"<<endl;
cout<<"*                                      *"<<endl;
cout<<"****************************************"<<endl;  //40 stars

cout<<endl<<endl<<"Press 1 to continue or 2 to exit..."<<endl;

while(validChoice==false)
{
    cin>>userSelection;

    if(userSelection==1)
    {
        validChoice=true;
        MenuOptions();
    }
    else if(userSelection==2)
    {
        validChoice=true;

        exit(0);

    }
    else
    {
        cout<<"Incorrect input. Please choose 1 to continue or 2 to exit."<<endl;
    }
    
}




}//end Menu

int MenuOptions(){
    system("clear");

    int userSelection;

cout<<"1. Calculate Calories in Food item."<<endl;
cout<<"2. Calculate Maintenance level Calories."<<endl;
cout<<"3. Information on how to lose weight."<<endl;
cout<<"4. Information on how to gain weight."<<endl;
cout<<"5. Exit"<<endl<<endl;
cout<<"Please select from the list of options above"<<endl;

cout<<endl;
cout<<endl;
cin>>userSelection; //gets the users choice



switch(userSelection){

case 1:CalcFoodCal();break;
case 2:break;
case 3:break;
case 4:break;
case 5:break;



default:break;


}//end switch


}//end MenuOptions

int CalcFoodCal()
{

    system("clear"); //clears the screen

    int carbs=0;
    int fat=0;
    int protein=0;
    float servingSize=0;
    float totNumServings=0;
    int userSelection=0;
    bool validAns=false;

    float totalCal=0;

    cout<<"While all information is provided to you on food labels, this calculator"<<endl;
    cout<<"will walk you through how each macronutrient comes into play for food."<<endl<<endl;
    cout<<"You will need a food label in order to answer the following questions."<<endl<<endl;

    cout<<"Please enter the amount of carbohydrates according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>carbs;

    cout<<"Please enter the amount of protein according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>protein;

    cout<<"Please enter the amount of fat according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>fat;


    cout<<"Please enter the total number of servings according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>totNumServings;

    totalCal=(4*carbs)+ (4*protein)+(9*fat);    //this calcs the number of Calories in a single serving

    totalCal=totalCal*totNumServings;       //this contains the total amount of Calories in the item

    cout<<"This specific food item has "<<totalCal<<" Calories in the if you consume all of it."<<endl;

//NEED TO CALCULATE TOTAL CAL BASED ON ESHA AND ATWA STANDARDS AND JUST GIVE A RATIO

    cout<<endl<<endl<<"**Note that this may be more than the bolded amount of Calories on the food label."<<endl;

    cout<<"This is because the bold lettered 'Calories' is the amount for a single serving, not the whole item."<<endl;

    cout<<"This is because the bold lettered 'Calories' is the amount for a single serving, not the whole item."<<endl<<endl;

    cout<<"Press 1 to go back to the Menu."<<endl;
    cout<<"Press 2 to try another food item."<<endl;

    cout<<"Press E to Exit the program."<<endl;
    cin>>userSelection;

    while(validAns==false)
    {
        if(userSelection==1)
        {
            MenuOptions();

            validAns=true;


        }
        else if(userSelection==2)
        {

            CalcFoodCal();
            validAns=true;

        }
        else if(userSelection==69||userSelection==101)      //if they choose an e or an E, exit
        {
            cout<<"They pressed e"<<endl;
            validAns=true;

            exit(0);
        }
        else
        {
            cout<<"Not a valid character to choose. Please choose from the above given options."<<endl;

        }
    }//end while


} //end CalcFoodCal



};//end MacroCalcClass