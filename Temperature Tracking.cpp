// Task

// Design a program that helps track daily temperatures for a week. The program should:

//     Prompt the user to enter the temperature for each day of the week and store these into an array
//     Calculate and display the average temperature for the entire week
//     Identify and display how many days has a temperature above 25 degrees and output an appropriate message

// Key Concepts
// Iteration (for or while), Arrays


//declare int days
//declare double temperature [array]
//declare sum
//declare above25
//
//
//make an array to store 7 temperatures
//
//prompt user to type temperatures in that array
//
//make sum of those temperatures
//
//declare avarage
//calculate avarage temp deviding sum/days
//
//cout output results
//
//if daysabove25 ==0 cout 0 days were hotter than 25 degrees
//if daysAbove25 == days cout 7 days were hotter than 25 degrees
//else some days were hotter than 25
//
//return 0


#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    const int days = 7 ;
    double temps[days];
    double sum;
    int above25;

    //array for days
    string dayNames[days] = 
    {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };


    //input 
    for (int i=0; i < days; i++)
    {
        cout << "Please enter temperature for  " << dayNames[i] << ": ";
        cin >> temps[i];
    }

    int aboveCount;
    string aboveDays;
    //array
    for (int i=0; i < days; i++)
    {
        //total
        sum += temps[i];

        //check if above 25
        if (temps[i] > 25)
        {
            if (aboveCount > 0)
            {
                aboveDays += " and ";
            }
            aboveDays += dayNames[i];
            above25++;
        }
    }

    double avarage = sum/days;
    
    cout << "--------------------------------------------\n";
    cout << "Avarage week temperature is " << avarage << " degrees\n" ;
    
    if (above25 == 0)
    {
        cout << "There was no hotter days than 25 deggrees.\n";
    }  
        else
        {
            cout << "The days with temperature above 25 are "<< aboveDays << ".\n";
        }
    

    return 0;
}

