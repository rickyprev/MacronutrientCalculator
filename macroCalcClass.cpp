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
case 2:CalcMaintenance();break;
case 3:LoseWeight();break;
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
    float servingSize=0.0f;
    float totNumServings=0.0f;
    int userSelection=0;
    bool validAns=false;

    float singleServEsha=0;
    float singleServAtwa=0;       //the different standards used and for a single serving

    float totalCalEsha=0;
    float totalCalAtwa=0;       //the different standards used and for the whole item


    cout<<"While all information is provided to you on food labels, this calculator"<<endl;
    cout<<"will walk you through how each macronutrient comes into play for food."<<endl<<endl;
    cout<<"You will need a food label in order to answer the following questions."<<endl<<endl;

    cout<<"Please enter the amount of CARBOHYDRATES according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>carbs;

    cout<<"Please enter the amount of PROTEIN according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>protein;

    cout<<"Please enter the amount of FAT according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>fat;


    cout<<"Please enter the total NUMBER OF SERVINGS according to the food label."<<endl;
    cout<<"(in grams)"<<endl;
    cin>>totNumServings;

    singleServEsha=(4*carbs)+ (4*protein)+(9*fat);    //this calcs the number of Calories in a single serving

    totalCalEsha= singleServEsha*totNumServings;       //this contains the total amount of Calories in the item

     singleServAtwa=(4.07*carbs)+ (3.47*protein)+(8.47*fat);    //this calcs the number of Calories in a single serving

    totalCalAtwa=singleServAtwa*totNumServings;       //this contains the total amount of Calories in the item

    cout<<"This specific food shows somewhere between or close to "<<singleServAtwa<<" Calories and "<<singleServEsha<<" Calories on the label."<<endl;


    cout<<endl<<endl<<"**Note that this is a interval because of the different standards to use for measurement (ESHA and ATWA)."<<endl;


    cout<<"If you were to eat the entire contents, the total Calories would be between "<<totalCalAtwa<<" Calories and "<<totalCalEsha<<" Calories."<<endl<<endl;

    cout<<"Press 1 to go back to the Menu."<<endl;
    cout<<"Press 2 to try another food item."<<endl;

    cout<<"Press 3 to Exit the program."<<endl;
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
        else if(userSelection==3)      //if they choose an e or an E, exit
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

void CalcMaintenance(){
    system("clear");

    float weight=0.0f;
    float caloricMaintLow=0.0;
    float caloricMaintHigh=0.0;
    bool validAns=false;
    int userSelection=0;


    cout<<"Your Calorie Maintenance level is the total amount of Calories required every day to maintain your current body state."<<endl;
    cout<<"There are other things that come into play such as your metabolism, activity level, gender, age, and a few other factors, however this is the."<<endl;
    cout<<"best place to start."<<endl;
    cout<<"The calculator in this program is the most simple method of calculating your Caloric maintenance level."<<endl<<endl;

    cout<<"Please enter your weight in lbs."<<endl;

    cin>>weight;
    system("clear");

    caloricMaintLow=weight*14;
    caloricMaintHigh=weight*17;

    cout<<endl<<endl<<"Your esimated daily Calorie intake is "<<((caloricMaintHigh+caloricMaintLow)/2)<<" Calories"<<endl<<endl;

    cout<<"This is the amount of Calories you need to intake daily to remain in your current state of health."<<endl;
    cout<<"Also, a good rule of thumb is split the total amount of Calories you need to consume into "<<endl;
    cout<<"40% protein, 40% Carbohydrates, and 20% fat. "<<endl<<endl;


    cout<<"Press 1 to go back to the Menu."<<endl;
    cout<<"Press 2 to try maintenance calculation."<<endl;
    cout<<"Press 3 to Exit the program."<<endl;

    while(validAns==false)
    {
    cin>>userSelection;

    if(userSelection==1)
    {
        validAns=true;
        MenuOptions();
    }
    else if(userSelection==2)
    {
        validAns=true;
        CalcMaintenance();
        

    }
    else if(userSelection==3)
    {
            exit(0);
    }
    else
    {
        cout<<"Incorrect input. Please choose 1 to continue, 2 to redo a maintenance calculation, or 3 to exit."<<endl;
    }
    
}

}//end calcMaintenance


void LoseWeight()
{

    bool validAns=false;
    int userSelection=0;
    system("clear");

    cout<<"The path to weight loss/leaning out starts primarily in the kitchen. It's essential you are eating MOSTLY healthy foods."<<endl;
    cout<<"MOSTLY is bolded because a mess up here and there will not destroy a consistent healthy diet, you still need to enjoy yourself once in a while."<<endl<<endl;
    cout<<"Exercise is the next most important component. You must burn calories through rigorous activity, meaning you should be sweating"<<endl;
    cout<<"significantly for at least 30-45 minutes of activity."<<endl;

    cout<<"Once you get into a routine and you still don't see any change in weight for a few weeks, then it's time to start adjusting your Calorie intake"<<endl;
    cout<<"Start by reducing your total Calorie intake by as little as 300-400 calories to start with. Continue with your exercise routine and monitor weekly progress."<<endl<<endl;
    cout<<"Any weight loss over 1-2 pounds weekly is UNHEALTHY. (*other than the first 2 weeks of exercising because this is just water weight)"<<endl;
    cout<<"Continue to monitor and change what's necessary, decrease calories or increase exercise."<<endl<<endl;
    cout<<"When you decrease Calories, pull from your CARBOHYDRATES first and then small amounts from FAT or PROTEIN but do not drastically reduce any single one!!"<<endl;
    cout<<"Remember, losing weight is a marathon, not a sprint. It takes time so find enjoyment in the pursuit and enjoy a healthier lifestyle :)"<<endl<<endl;


    cout<<"Press 1 to go back to the Menu."<<endl;
    cout<<"Press 2 to Exit."<<endl;

    while(validAns==false)
    {
    cin>>userSelection;

    if(userSelection==1)
    {
        validAns=true;
        MenuOptions();
    }
    else if(userSelection==2)
    {
     validAns=true;

        exit(0);

    }
    else
    {
        cout<<"Incorrect input! Please choose 1 to go back to the Menu or 2 to Exit the program."<<endl;
    }
    
}


}//end LoseWeight



};//end MacroCalcClass