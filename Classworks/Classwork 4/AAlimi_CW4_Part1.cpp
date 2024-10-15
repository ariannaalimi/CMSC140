/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 4 Part 1
 * Description: This program calculates the discount depending on tickets sold
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
    int TICKETS;
    cout << "How many days of tickets were sold? ";
    cin >> TICKETS;

    if (TICKETS <= 0)
        cout << "Tickets sold must be greater than zero.";

    double TOTAL = TICKETS * 109; // Total cost without discount included
    double PRICE; // Total cost with discount included
    double discountPrice; // Only the discount number
    double tenPercent = .10;
    double twentyFivePercent = .25;
    double thirtyThreePercent = .33;
    double fourtyTwoPercent = .42;

    double DISCOUNT;
    if ((TICKETS == 1) || (TICKETS == 2))
        cout << showpoint << fixed << setprecision(2) << "The total cost of the purchase is $" << TOTAL;


    if ((TICKETS == 3) || (TICKETS == 4))
    {
        DISCOUNT = tenPercent;
        discountPrice = (TOTAL * DISCOUNT);
        PRICE = TOTAL - discountPrice;
        cout << showpoint << fixed << setprecision(2) << "The total cost of the purchase is $" << PRICE;
    }


    if ((TICKETS == 5) || (TICKETS == 6))
    {
        DISCOUNT = twentyFivePercent;
        discountPrice = (TOTAL * DISCOUNT);
        PRICE = TOTAL - discountPrice;
        cout << showpoint << fixed << setprecision(2) << "The total cost of the purchase is $" << PRICE;
    }


    if ((TICKETS == 7) || (TICKETS == 8) || (TICKETS == 9))
    {
        DISCOUNT = thirtyThreePercent;
        discountPrice = (TOTAL * DISCOUNT);
        PRICE = TOTAL - discountPrice;
        cout << showpoint << fixed << setprecision(2) << "The total cost of the purchase is $" << PRICE;
    }


    if (TICKETS >= 10)
    {
        DISCOUNT = fourtyTwoPercent;
        discountPrice = (TOTAL * DISCOUNT);
        PRICE = TOTAL - discountPrice;
        cout << showpoint << fixed << setprecision(2) << "The total cost of the purchase is $" << PRICE;
    }


    return 0;

}
