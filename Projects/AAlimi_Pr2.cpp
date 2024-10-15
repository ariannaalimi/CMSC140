/*
* Class: CMSC140 CRN 34975
* Instructor: Elia Shahbazi
* Project 2
* Description: This program converts from metric system to imperial system
* Due Date: 3/5/2023
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Arianna Alimi
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string countryName;
    cout << "Enter a country name: ";
    getline(cin, countryName);
    cout << endl;
    cout << endl;

    cout << "Converter Toolkit" << endl;
    cout << "-----------------" << endl;
    cout << "1. Temperature Converter" << endl;
    cout << "2. Distance Converter" << endl;
    cout << "3. Weight Converter" << endl;
    cout << "4. Quit" << endl;
    cout << endl;

    int userChoice;
    cout << "Enter your choice (1-4): ";
    cin >> userChoice;



    switch (userChoice)
    {

        case 1: //if user selects option 1
            {
                const double NINE = 9.0;
                const int FIVE = 5;
                const int thirtyTwo = 32;
                int TEMPERATURE; // User input of temperature in celsius
                cout << "Please enter temperature in Celsius (such as 24): ";
                cin >> TEMPERATURE;

                const double FAHRENHEIT = (NINE / FIVE) * TEMPERATURE + thirtyTwo; // temperature converter

                cout << "It is " << fixed << setprecision(0) << FAHRENHEIT << " in Fahrenheit" << endl; // use setprecision(0) to only show whole number
                cout << endl;
                break;
            }


        case 2:
            {
                double DISTANCE; // user input of distance in Kilometers
                cout << "Please enter distance in Kilometer (such as 18.54): ";
                cin >> DISTANCE;

                if (DISTANCE >= 0) //Distance has to be a positive number
                {
                    const double pointSix = 0.6;
                    const double MILES = DISTANCE * pointSix;

                    cout << fixed << showpoint << setprecision(2) << "It is " << MILES << " in Miles" << endl;
                    cout << endl;
                }

                else // if distance is a negative number
                {
                    cout << " !!! Program does not convert negative distance !!!";
                    cout << endl;
                    cout << endl;
                }
                break;
            }



        case 3:
            {
                double WEIGHT; // user input of weight in Kilograms
                cout << "Please enter weight in Kilograms (such as 121.6): ";
                cin >> WEIGHT;

                if (WEIGHT >= 0) // weight must be a positive number
                {
                    const double twoPointTwo = 2.2;
                    const double POUNDS = WEIGHT * twoPointTwo;

                    cout << fixed << showpoint << setprecision(1) << "It is " << POUNDS << " in Pounds" << endl;
                }

                else // if weight is not a positive number
                {
                    cout << " !!! Program does not convert negative kilograms !!!";
                    cout << endl;

                }
                cout << endl;
                break;
            }


        case 4: // If user quit
            {
                cout << "Program Ending." << endl;
                cout << endl;
                break;
            }


        default: // if user did not select from menu 1-4
            {
                cout << "The number you inputted is an invalid choice, please try again." << endl;
                cout << endl;
            }

    }


    cout << countryName << " sounds fun!";
    cout << endl;
    cout << endl;

    const string PROGRAMMER = "Arianna Alimi";
    const int projectNumber = 2;
    const string dueDate = "3/5/2023";
    cout << "Thank you for testing my program!!" << endl;
    cout << "PROGRAMMER: " << PROGRAMMER << endl;
    cout << "CMSC140 Common Project " << projectNumber << endl;
    cout << "Due Date: " << dueDate << endl;

    return 0;
}