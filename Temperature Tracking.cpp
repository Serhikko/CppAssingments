#include <iostream>
using namespace std;

const int Days = 7;

string DayNames[Days] = 
{
    "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday", "Sunday"
};

void dayTempratureInput(double temperatures[])
{
    for (int i = 0; i < Days; i++)
    {
        cout << "Please enter temperature for " << DayNames[i] << ": ";
        cin >> temperatures[i];
    }
}

double calculateAverageTemprature(double temperatures[])
{
    double sum;

    for (int i = 0; i < Days; i++)
    {
        sum += temperatures[i];
    }

    return sum / Days;
}

string findDaysAboveTemprature(double temperatures[], int temp)
{
    string days;

    for (int i = 0; i < Days; i++)
    {
        if (temperatures[i] > temp)
        {
            days += DayNames[i] + " ";
        }
    }

    return days;
}

void printResult(double average, string aboveDays)
{
    cout << "--------------------------------------------\n";
    cout << "Avarage week temperature is " << average << " degrees\n" ;
    cout << "--------------------------------------------\n";

    cout << "--------------------------------------------\n";
    if (aboveDays.size() == 0)
    {
        cout << "There was no hotter days than 25 deggrees.\n";
    }
    else
    {
        cout << "The days with temperature above 25 are "<< aboveDays << ".\n";
    }
    cout << "--------------------------------------------\n";
}

int main()
{
    //declaring variables

    double temperatures[Days];

    dayTempratureInput(temperatures);

    double average = calculateAverageTemprature(temperatures);

    string aboveDays = findDaysAboveTemprature(temperatures, 25);

    printResult(average, aboveDays);

    return 0;
}