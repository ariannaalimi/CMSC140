/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Project 1
 * Description: This program uses arithmetic operators to calculate user’s inputted numbers
 * Due Date: 2/19/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << "**************** Robot Prototype Scripting ********************" << endl;
    cout << endl;

    string NAME;
    int AGE, MONTHS, DAYS, HOURS, MINUTES, SECONDS;
    const int daysOfMonth = 30;
    const string robotName = "Nao";

    //Asking the name (introduction)
    cout << "Hello, welcome to Montgomery College! My name is " << robotName << ". May I have your name? " << endl;
    getline(cin, NAME);
    cout << "Nice to have you with us today, " << NAME << "!" << endl;

    //Asking the age of important person
    cout << "Let me impress you with a small game." << endl;
    cout << "Give me the age of an important person or pet to you." << endl;
    cout << "Please give me only a number:" << endl;
    cin >> AGE;

    //calculating years, months, days, hours, min, sec, human age
    MONTHS = AGE * 12;
    DAYS = MONTHS * daysOfMonth;
    HOURS = DAYS * 24;
    MINUTES = HOURS * 60;
    SECONDS = MINUTES * 60;
    const int dogAge = AGE * 7;
    const int fishAge = AGE * 5;

    cout << fixed; //use to get rid of e in numbers
    cout << endl;
    cout << "You have entered " << AGE << "." << endl;
    cout << " " << "If this is for a person, the age can be expressed as:" << endl;
    cout << " " << AGE << " years" << endl;
    cout << " " << "or " << MONTHS << " months" << endl;
    cout << " " << "or about " << DAYS << " days" << endl;
    cout << " " << "or about " << HOURS << " hours" << endl;
    cout << " " << "or about " << MINUTES << " minutes" << endl;
    cout << " " << "or about " << SECONDS << " seconds." << endl;
    cout << " " << "If this is for a dog, it is " << dogAge << " years old in human age." << endl;
    cout << " " << "If this is for a gold fish, it is " << fishAge << " years old in human age." << endl;

    //Playing another game using operators
    int firstNumber, secondNumber;

    cout << endl;
    cout << "Let's play another game, " << NAME << ". Give me a whole number." << endl;
    cin >> firstNumber;

    cout << "Very well. Give me another whole number." << endl;
    cin >> secondNumber;

    int ADD = firstNumber + secondNumber;
    int DIVIDE = firstNumber / secondNumber;
    double DIVIDE2;

    cout << "Using the operator '+' in C++, the result of " << firstNumber << " + " << secondNumber << " is " << ADD << endl;
    cout << "Using the operator '/', the result of " << firstNumber << " / " << secondNumber << " is " << DIVIDE << endl;

    //use static_cast to change numbers to decimal form
    DIVIDE2 = static_cast<double>(firstNumber) / (secondNumber);

    cout << setprecision(1) << fixed << "however, the result of " << static_cast<double>(firstNumber) << " / " << static_cast<double>(secondNumber) << " is about " << DIVIDE2 << "." << endl;

    const string programmerName = "Arianna Alimi";
    const int assignmentNumber = 1;
    const string dueDate = "2/19/2023";

    cout << endl;
    cout << "Thank you for testing my program!!" << endl;
    cout << "PROGRAMMER: " << programmerName << endl;
    cout << "CMSC140 Common Project " << assignmentNumber << endl;
    cout << "Due Date: " << dueDate << endl;

    return 0;
}
