/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 6 Part 2
 * Description: Using different functions to calculate a vending machine program
 * Due Date: 04/16/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double COKE = 1.25;
const double PEPSI = 1.00;
const double WATER = 2.00;
const double COFFEE = 1.50;

int showMenu(); // funciton prototype
int takePayment();
int takePurchase();
int displayInfo(double, double, double);

int main()
{


    int CHOICE = showMenu();

    if (CHOICE == 5)
    {
        cout << endl;
        cout << "Exiting Program...";
        exit(0);
    }

    int QUANTITY = takePurchase();

    int amountPaid = takePayment();

    switch (CHOICE)
    {
    case 1:
    {
        displayInfo(COKE, QUANTITY, amountPaid);
        break;
    }

    case 2:
    {
        displayInfo(PEPSI, QUANTITY, amountPaid);
        break;
    }

    case 3:
    {
        displayInfo(WATER, QUANTITY, amountPaid);
        break;
    }

    case 4:
    {
        displayInfo(COFFEE, QUANTITY, amountPaid);
        break;
    }
    case 5:
    {
        cout << endl;
        break;
    }
    }
    return 0;
}

int showMenu() // menu function
{
    int userChoice;
    cout << "**** Vending Machine ****" << endl;
    cout << " 1. Coke      $1.25" << endl;
    cout << " 2. Pepsi     $1.00" << endl;
    cout << " 3. Water     $2.00" << endl;
    cout << " 4. Coffee    $1.50" << endl;
    cout << " 5. Exit Menu" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> userChoice;
    while ((userChoice > 5) || (userChoice < 1))
    {
        cout << "Invalid input. Please try again: ";
        cin >> userChoice;
    }
    return userChoice;
}

int takePayment()
{
    double PAYMENT;
    cout << "How much is your payment? ";
    cin >> PAYMENT;
    return PAYMENT;
}

int takePurchase()
{
    int howMany;
    cout << "How many do you want? ";
    cin >> howMany;
    return howMany;
}

int displayInfo(double num1, double num2, double num3) // num1 = CHOICE, num2 = Quantity, num3 = Payment
{
    double taxAmount = (num1 * num2) * 0.06;
    double TOTAL = taxAmount + (num1 * num2);
    double CHANGE = num3 - TOTAL;

    cout << endl;
    cout << showpoint << setprecision(2) << fixed << "Tax Amount: $" << taxAmount << endl;
    cout << endl;
    cout << "Total Purchase: $" << TOTAL << endl;
    cout << endl;
    cout << "Change: $" << CHANGE << endl;
    return 0;
}






