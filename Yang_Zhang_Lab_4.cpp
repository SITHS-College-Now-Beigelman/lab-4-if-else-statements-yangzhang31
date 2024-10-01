//Yang Zhang 
//Lab 4
//10.1.2024

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //Variables
    string fruitName; //The name of the fruit
    float gramsOfSugar; //The grams of sugar in one cup of the fruit
    int timesOfLoop; //The amount of times the code loops

    //System only asks this question once
    cout << "How many times do you want to answer the question? : ";
    cin >> timesOfLoop;
    cout << endl;

    //Prompt user to input the fruit name and the grams of sugar  
    while (timesOfLoop != 0 && timesOfLoop > 0)
    {
        cout << "------------------- " << timesOfLoop << " -------------------" << endl; //Extra cout statement to make it look pretty :<
        cout << endl;
        cout << "Input a fruit name (NO SPACES): "; //Prompting user to type in fruit name
        cin >> fruitName; //Userinput of the fruit name
        cout << "Input the number of grams of sugar that one cup of the fruit contains (NO SPACES): "; //Prompting user for the amount of sugar in one cup of the fruit
        cin >> gramsOfSugar; //Userinput of the grams of sugar
        cout << endl; //Line break

        //If statements
        if (gramsOfSugar <= 10) //If the variable 'gramsOfSugar' is less than 10 then print that the name 'fruitName' is a low sugar fruit
        {
            cout << fruitName << " Is a low sugar fruit!" << endl;
        }
    
        if (gramsOfSugar > 10 && gramsOfSugar < 14) //If the variable 'gramsOfSugar' is greater than 10 & less than 14 then print that the name 'fruitName' is a medium sugar fruit
        {
            cout << fruitName << " Is a medium sugar fruit!" << endl;
        }
    
        if (gramsOfSugar >= 14) //If the variable 'gramsOfSugar' is greater than 14 then print that the name 'fruitName' is a high sugar fruit
        {   
            cout << fruitName << " Is a high sugar fruit!" << endl;
        }
        
        cout << endl; //Adds a space at the end to make it look better

        //Minus the variable so that the while loop doesn't go on forever
        timesOfLoop = timesOfLoop - 1;
    
    }

    return 0;

}

/*
How many times do you want to answer the question? : 5

------------------- 5 -------------------

Input a fruit name (NO SPACES): grapes
Input the number of grams of sugar that one cup of the fruit contains (NO SPACES): 23.37

grapes Is a high sugar fruit!

------------------- 4 -------------------

Input a fruit name (NO SPACES): avocado
Input the number of grams of sugar that one cup of the fruit contains (NO SPACES): .99

avocado Is a low sugar fruit!

------------------- 3 -------------------

Input a fruit name (NO SPACES): strawberries
Input the number of grams of sugar that one cup of the fruit contains (NO SPACES): 7

strawberries Is a low sugar fruit!

------------------- 2 -------------------

Input a fruit name (NO SPACES): grapefruit
Input the number of grams of sugar that one cup of the fruit contains (NO SPACES): 10.6

grapefruit Is a medium sugar fruit!

------------------- 1 -------------------

Input a fruit name (NO SPACES): orange
Input the number of grams of sugar that one cup of the fruit contains (NO SPACES): 14

orange Is a high sugar fruit!
*/