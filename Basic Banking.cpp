// 3. Basic Banking
// Task

// Create a program that simulates a basic bank account system. The program should:

//     Start with an initial balance
//     Present the user with a menu of options

// 1: Deposit
// 2: Withdraw
// 3: View Balance
// 4: Exit

//     Implement each operation via a separate function
//         viewMenu: Prints the menu of options
//         deposit(currentBalance, amount): Adds the amount to the balance
//         withdraw(currentBalance, amount): Subtracts the amount from the balance
//         displayBalance(currentBalance) : Prints the balance
//     Allow the user to repeatedly display and select from the menu until they decide to exit

// Key Concepts
// Functions, Iteration


//void menu() cout 1.deposit 2.withdraw 3.vie..//funciton that prints menu
//void depoit(currentBalance, amount){if amount < 0}add money to balance {else cout the deposit amount must be positive}
//void withdraw(currentBalance, amount){if amount <= balance, current balance -= amount, else you dont have anough fund on your balance}
//void displayBalance(currentBalance){cout current balance}

//main 
//declare balance = 0
//while (switch case 1 Depoist,2.withdraw.3vie balance.4exit)

#include <iostream>
using namespace std;

bool isProgramRunning = true;
double currentBalance = 0.0;

void viewMenu()
{
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. View balance" << endl;
    cout << "4. Exit" << endl;
}

double deposit(double currentBalance, double amount) 
{
    if (amount <= 0) 
    {
        cout << "Deposit amount must be positive." << endl;
        return currentBalance;
    }
    cout << "Depositing " << amount << "." << endl;
    return currentBalance + amount;
}

double withdraw(double currentBalance, double amount) 
{
    if (amount <= 0) 
    {
        cout << "Withdraw amount must be positive." << endl;
        return currentBalance;
    }
    if (amount > currentBalance) 
    {
        cout << "Insufficient funds." << endl;
        return currentBalance;
    }
    return currentBalance - amount;
}

void viewBalance(double currentBalance)
{
    cout << "Current balance: " << currentBalance << endl;
}

void depositingProcces()
{
    double value;
    cout << "Enter the deposit value: " << endl;
    cin >> value;
    currentBalance = deposit(currentBalance, value);
}

void withdrawinProcces()
{
    double value;
    cout << "Enter the withdraw value: " << endl;
    cin >> value;
    currentBalance = withdraw(currentBalance, value);
}

int main()
{
    while (isProgramRunning)
    {
        viewMenu();

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            depositingProcces();
            break;
        case 2:
            withdrawinProcces();
            break;
        case 3:
            viewBalance(currentBalance);
            break;
        case 4:
            cout << "Exiting program." << endl;
            isProgramRunning = false;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
}