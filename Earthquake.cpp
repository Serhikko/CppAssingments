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

//     while (cin.fail()) {//Check if user enters valid input
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



void userInput(double magnitude, int switcher)
{
    //prompting the user
    cout << "Enter Earhquake magnitude  ";
    cin >> magnitude;

    switcher = magnitude;//because switch must be an integer,we should declare another variable so it will wount give us error.
}

void validation(double magnitude)
{
    while (cin.fail()) //Check if user enters valid input
    {
        cout << "Invalid input, Plese enter again" << endl;//output error message
        cin.clear(); //clear bad input flag
        cin.ignore( '\n'); //ignore input,i want to make it to ignore string and char datatypes so it will be passing only the numbers
        cin >> magnitude; //get number again
    }
}

void definer(int switcher)
{
    switch (switcher) 
    {
    case 0:
    case 1:
        cout << "Mirco";
        break;
    case 2:
        cout << "Very Minor";
        break;
    case 3:
        cout << "Minor";
        break;
    case 4:
        cout << "Light";
        break;
    case 5:
        cout << "Moderate";
        break;
    case 6:
        cout << "Strong";
        break;
    case 7:
        cout << "Major";
        break;
    case 8:
        cout << "Great";
        break;
    case 9:
        cout << "Great";
        break;
    default:
        cout << "Meteoric";
        break;
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

    userInput();

    validation();

    outPut();

    definer();

    return 0;
}