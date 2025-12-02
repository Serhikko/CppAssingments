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

// // use while (cin.fail()) {//Check if user enters valid input
//     cout << "Invalid input" << endl;//output error message
//     cin.clear(); //clear bad input flag
//     cin.ignore(1000, '\n'); //ignore input
//     cin >> x; //get number again
//   }

//1.declare variables(magnitude,userIput,Descriptor)
//2.Prompt user input,and cin it.
//3.Validate user input
//3.use witch to define what descripor is what magnitude

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declaring variables
    double magnitude,userInput;
    int switcher;
    string descriptior;

    //prompting the user
    cout << "Enter Earhquake magnitude";
    cin >> userInput;

    switcher = magnitude;//because switch must be an integer,we should declare another variable so it will wount give us error.
    
    switch (switcher) 
    {
    case 0:
    case 1:
        cout << "Magnitude is less then 2 is considered Mirco earthquacke";
        break;
    case 2:
        cout << "Magnitude is 2.0 to less than 3.0 is considered Very Minor earthquacke";
        break;
    case 3:
        cout << "Magnitude is 3.0 to less than 4.0 is considered Minor earthquacke";
        break;
    case 4:
        cout << "Magnitude is 4.0 to less than 5.0 is considered Light earthquacke";
        break;
    case 5:
        cout << "Magnitude is 5.0 to less than 6.0 is considered Moderate earthquacke";
        break;
    case 6:
        cout << "Magnitude is 6.0 to less than 7.0 is considered Strong earthquacke";
        break;
    case 7:
        cout << "Magnitude is 7.0 to less than 8.0 is considered Major earthquacke";
        break;
    case 8:
        cout << "Magnitude is 8.0 to less than 10.0  is considered Great earthquacke";
        break;
    case 9:
        cout << "Magnitude is 8.0 to less than 10.0  is considered Great earthquacke";
        break;
    default:
        cout << "Magnitude is More than 10.0 is considered Meteoric earthquacke";
        break;
    }


}