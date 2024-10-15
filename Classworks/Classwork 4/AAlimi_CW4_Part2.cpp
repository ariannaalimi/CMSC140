/*
* Class: CMSC140 CRN 34975
* Instructor: Elia Shahbazi
* Classwork 4 Part 2
* Description: This program calculates the price of number of colors in signs, lights and old sign removal
* Due Date: 3/5/2023
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Arianna Alimi
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
    int numberOfColors;
    cout << "Enter the numbers of colors in the sign: ";
    cin >> numberOfColors;

    if (numberOfColors <= 0)
        cout << "Invalid number of colors; it must be greater than zero." << endl;

    if (numberOfColors > 0) //User can continue program if they enter a positive number
    {
        char lightedSign;
        cout << "Do you want a lighted sign(y/n)? ";
        cin >> lightedSign;

        char oldSign;
        cout << "Do you need an old sign removed(y/n)? ";
        cin >> oldSign;


        switch (numberOfColors)
        {
            case 1: //if user entered 1
                {
                    //if user wants a lighted sign and an old sign removed
                    if ((lightedSign == 'y') && (oldSign == 'y'))
                    {
                        double costOfLight = 250 * .25;
                        double costOfRemoval = 250 * .10;
                        double PRICE = 250 + costOfLight + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants a lighted sign
                    if ((lightedSign == 'y') && (oldSign == 'n'))
                    {
                        double costOfLight = 250 * .25;
                        double PRICE = 250 + costOfLight;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants a sign removed
                    if ((lightedSign == 'n') && (oldSign == 'y'))
                    {
                        double costOfRemoval = 250 * .10;
                        double PRICE = 250 + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants the base price
                    if ((lightedSign == 'n') && (oldSign == 'n'))
                    {
                        double PRICE = 250;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    break;
                }

            case 2: //if user enter 2
                {
                    //if user wants a lighted sign and an old sign removed
                    if ((lightedSign == 'y') && (oldSign == 'y'))
                    {
                        double costOfLight = 325 * .25;
                        double costOfRemoval = 325 * .10;
                        double PRICE = 325 + costOfLight + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user wants only wants a lighted sign
                    if ((lightedSign == 'y') && (oldSign == 'n'))
                    {
                        double costOfLight = 325 * .25;
                        double PRICE = 325 + costOfLight;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants an old sign removed
                    if ((lightedSign == 'n') && (oldSign == 'y'))
                    {
                        double costOfRemoval = 325 * .10;
                        double PRICE = 325 + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants the base price
                    if ((lightedSign == 'n') && (oldSign == 'n'))
                    {
                        double PRICE = 325;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    break;
                }

            case 3: //if user entered 3
                {
                    //if user wants a lighted sign and an old sign removed
                    if ((lightedSign == 'y') && (oldSign == 'y'))
                    {
                        double costOfLight = 450 * .25;
                        double costOfRemoval = 450 * .10;
                        double PRICE = 450 + costOfLight + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants a lighted sign
                    if ((lightedSign == 'y') && (oldSign == 'n'))
                    {
                        double costOfLight = 450 * .25;
                        double PRICE = 450 + costOfLight;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants an old sign removed
                    if ((lightedSign == 'n') && (oldSign == 'y'))
                    {
                        double costOfRemoval = 450 * .10;
                        double PRICE = 450 + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants the base price
                    if ((lightedSign == 'n') && (oldSign == 'n'))
                    {
                        double PRICE = 450;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    break;
                }

            case 4: //if user entered 4
                {
                    //if user wants a lighted sign and an old sign removed
                    if ((lightedSign == 'y') && (oldSign == 'y'))
                    {
                        double costOfLight = 625 * .25;
                        double costOfRemoval = 625 * .10;
                        double PRICE = 625 + costOfLight + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants a lighted sign
                    if ((lightedSign == 'y') && (oldSign == 'n'))
                    {
                        double costOfLight = 625 * .25;
                        double PRICE = 625 + costOfLight;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants an old sign removed
                    if ((lightedSign == 'n') && (oldSign == 'y'))
                    {
                        double costOfRemoval = 625 * .10;
                        double PRICE = 625 + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants the base price
                    if ((lightedSign == 'n') && (oldSign == 'n'))
                    {
                        double PRICE = 625;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    break;
                }

            default: //if the number of signs is 5 or more
                {
                    //if user wants a lighted sign and an old sign removed
                    if ((lightedSign == 'y') && (oldSign == 'y'))
                    {
                        double costOfLight = 850 * .25;
                        double costOfRemoval = 850 * .10;
                        double PRICE = 850 + costOfLight + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants a lighted sign
                    if ((lightedSign == 'y') && (oldSign == 'n'))
                    {
                        double costOfLight = 850 * .25;
                        double PRICE = 850 + costOfLight;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants an old sign removed
                    if ((lightedSign == 'n') && (oldSign == 'y'))
                    {
                        double costOfRemoval = 850 * .10;
                        double PRICE = 850 + costOfRemoval;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    //if user only wants the base price
                    if ((lightedSign == 'n') && (oldSign == 'n'))
                    {
                        double PRICE = 850;
                        cout << showpoint << fixed << setprecision(2) << "The price is: $" << PRICE;
                    }
                    break;
                }
        }
    }

    cout << endl;

    return 0;
}
