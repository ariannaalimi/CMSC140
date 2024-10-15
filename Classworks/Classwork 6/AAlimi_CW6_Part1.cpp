/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 6 Part 1
 * Description: This program uses two functions to calculate the sum/difference of two integers
 * Due Date: 04/16/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi
*/

#include <iostream>
#include <iomanip>

using namespace std;


int addition(int, int); // function prototype
int subtraction(int, int);

int main()
{
    int userChoice;
    cout << "Enter your choice, 1 for Addition, 2 for Subtraction: ";
    cin >> userChoice;

    while ((userChoice > 2) || (userChoice < 1))
    {
        cout << "Invalid choice of operation. Try again: ";
        cin >> userChoice;
    }

    int firstNumber;
    cout << "Enter your first number: ";
    cin >> firstNumber;

    int secondNumber;
    cout << "Enter your second number: ";
    cin >> secondNumber;
    cout << endl;

    if (userChoice == 1)
    {
        cout << "The result of the operation is: " << addition(firstNumber, secondNumber);
    }

    if (userChoice == 2)
    {
        cout << "The result of the operation is: " << subtraction(firstNumber, secondNumber);
    }

}

int addition(int numberOne, int numberTwo)
{
    int TOTAL = numberOne + numberTwo;
    return TOTAL;
}

int subtraction(int numberOne, int numberTwo)
{
    int TOTAL = numberOne - numberTwo;
    return TOTAL;
}




