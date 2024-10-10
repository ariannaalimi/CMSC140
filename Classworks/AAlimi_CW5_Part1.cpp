/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 5 Part 1
 * Description: Using different loops to display stars
 * Due Date: 4/2/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    int STARS = 1;
    cout << "(i)" << endl;
    while (STARS <= 10)
    {
        cout << "*";
        STARS++;
    }
    
    
    STARS = 1;
    cout << endl;
    cout << endl;
    cout << "(ii)" << endl;
    do
    {
        cout << "*";
        STARS++;
    }
    while (STARS <= 20);
    
    
    int ROW;
    cout << endl;
    cout << endl;
    cout << "(iii)" << endl;
    for (ROW = 1; ROW <= 10; ROW++)
    {
        for (STARS = 1; STARS <= ROW; STARS++)
        {
            cout << "*";
            
        }
        cout << endl;
    }
    
    
    cout << endl;
    cout << "(iv)" << endl;
    for (ROW = 1; ROW <= 20; ROW++)
    {
        for (STARS = 1; STARS <= ROW; STARS++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    cout << endl;
    cout << "(v)" << endl;
    for (ROW = 1; ROW <= 10; ROW++)
    {
        for (STARS = 10; STARS >= ROW; STARS--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    cout << endl;
    cout << "(vi)" << endl;
    for (ROW = 1; ROW <= 20; ROW++)
    {
        for (STARS = 20; STARS >= ROW; STARS--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}



