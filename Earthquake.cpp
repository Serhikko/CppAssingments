// ## 1. Earthquake

// ### Task

// The table below contains earthquake magnitude ranges on the Richter scale and their descriptors.
//  Write a program that reads a magnitude from the user and displays the appropriate descriptor as part of a meaningful message. 
//  For example, if the user enters 5.5 then your program should indicate that a magnitude 5.5 earthquake is considered to be a moderate earthquake.

// | Magnitude             | Descriptor |
// | ----------------------| -----------|
// | Less than 2.0         | Mirco      |
// | 2.0 to less than 3.0  | Very Minor |
// | 3.0 to less than 4.0  | Minor      |
// | 4.0 to less than 5.0  | Light      |
// | 5.0 to less than 6.0  | Moderate   |
// | 6.0 to less than 7.0  | Strong     |
// | 7.0 to less than 8.0  | Major      |
// | 8.0 to less than 10.0 | Great      |
// | More than 10.0        | Meteoric   |

// ### Key Concepts
// Data types, variables, selection statements (if or switch)

// ---



//1.declare variables(magnitude,userIput,Descriptor)
//2.Prompt user input,and cin it.
//3.Validate user input
//3.use witch to define what descripor is what magnitude

#include <iostream>
#include <string>
using namespace std;


double validation(double input)
{
    while (cin.fail()) //Check if user enters valid input
    {
        cout << "Invalid input, Plese enter again" << endl;//output error message
        cin.clear(); //clear bad input flag
        cin.ignore(1000, '\n'); //ignore input,i want to make it to ignore string and char datatypes so it will be passing only the numbers
        cin >> input; //get number again
    }
    return input;
}

double userInput(double input)
{
    //prompting the user
    cout << "Enter Earhquake magnitude  ";
    cin >> input;
    input = validation(input);

    return input;
}

string definer(int choose)
{
    switch (choose) 
    {
    case 0:
    case 1:
        return "Micro";
    case 2:
        return  "Very Minor";
    case 3:
        return  "Minor";
    case 4:
        return  "Light";
    case 5:
        return  "Moderate";
    case 6:
        return  "Strong";
    case 7:
        return  "Major";
    case 8:
        return  "Great";
    case 9:
        return  "Great";
    default:
        return  "Meteoric";
    }
}

void outPut(double magnitude)
{
    //output to make the final sentence
    cout << "a " << magnitude << " magnitude earthquake is considered ";
}

int main()
{
    //declaring variables
    double magnitude;
    int switcher;

    magnitude = userInput(magnitude);

    outPut(magnitude);

    switcher = magnitude;
    cout << definer(switcher);

    return 0;
}