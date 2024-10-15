/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 7
 * Description: Classwork uses arrays in order to output larger number of inputted integer
 * Due Date: 4/30/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi 
*/

#include <iostream>
#include <iomanip>
using namespace std;

void largerThaN(int[], int, int);

int main()
{
    int userChoice;
    
    const int TEN = 10;
    
    int numbers[TEN] = {30, 20, 50, 2, -1, 44, 3, 12, 90, 32};
    cout << "Enter a number:" << endl;
    cin >> userChoice;
    
    largerThaN(numbers, userChoice, TEN);
    
    return 0;
}

void largerThaN(int numbers[], int userNumber, int TEN)
{
    cout << "The numbers that are larger than " << userNumber << " are: ";
    
    for (int a = 0; a < TEN; a++)
    {
        if (userNumber < numbers[a])
        {
            cout << numbers[a] << " ";
        }
    }
}



