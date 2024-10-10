/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Project 5
 * Description: Using arrays and for loops in order to design a magic square
 * Due Date: 5/5/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi 
*/

#include<iostream>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main()
{
    char userChoice;
    do
    {
        int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];

        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);


        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);


        if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
        {
            cout << "This is a Lo Shu magic square." << endl;
        }

        else
        {
            cout << "This is not a Lo Shu magic square." << endl;
        }

        cout << endl;
        cout << endl;
        cout << "Do you want to try again? ";
        cin >> userChoice;
    } while (userChoice == 'y' || userChoice == 'Y');

    const string NAME = "Arianna Alimi";
    const int PROJECT = 5;
    const string dueDate = "5/5/2023";
    
    cout << endl;
    cout << "Programmer: " << NAME << endl;
    cout << "Project #: " << PROJECT << endl;
    cout << "Due Date: " << dueDate << endl;
    


    return 0;
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    for (int a = 0; a < size; a++)
    {


        for (int i = 0; i < size; i++)
        {
            cout << "Enter the nummber for rows " << a << " and column " << i << ": ";

            if (a == 0)
            {
                cin >> arrayRow1[i];
            }
            if (a == 1)
            {
                cin >> arrayRow2[i];
            }
            if (a == 2)
            {
                cin >> arrayRow3[i];
            }
        }
    }
}

void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    for (int a = 0; a < size; a++)
    {


        for (int i = 0; i < size; i++)
        {


            if (a == 0)
            {
                cout << arrayrow1[i] << " ";
            }
            if (a == 1)
            {
                cout << arrayrow2[i] << " ";
            }
            if (a == 2)
            {
                cout << arrayrow3[i] << " ";
            }


        }

        cout << endl;
    }
}

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    return (arrayrow1[0] + arrayrow2[1] + arrayrow3[2] == arrayrow1[2] + arrayrow2[1] + arrayrow3[0]);

}

bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    if ((arrayrow1[0] + arrayrow1[1] + arrayrow1[2] == arrayrow2[0] + arrayrow2[1] + arrayrow2[2]) && (arrayrow1[0] + arrayrow1[1] + arrayrow1[2] == arrayrow3[0] + arrayrow3[1] + arrayrow3[2]) && (arrayrow2[0] + arrayrow2[1] + arrayrow2[2] == arrayrow3[0] + arrayrow3[1] + arrayrow3[2]))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    if ((arrayrow1[0] + arrayrow2[0] + arrayrow3[0] == arrayrow1[1] + arrayrow2[1] + arrayrow3[1]) && (arrayrow1[0] + arrayrow2[0] + arrayrow3[0] == arrayrow1[2] + arrayrow2[2] + arrayrow3[2]) && (arrayrow1[1] + arrayrow2[1] + arrayrow3[1] == arrayrow1[2] + arrayrow2[2] + arrayrow3[2]))
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
    for (int a = 0; a < size; a++)
    {


        for (int i = 0; i < size; i++)
        {


            if (a == 0)
            {
                if (arrayRow1[i] < min || arrayRow1[i] > max)
                {

                    return false;
                }
            }
            if (a == 1)
            {
                if (arrayRow2[i] < min || arrayRow2[i] > max)
                {
                    return false;
                }
            }
            if (a == 2)
            {
                if (arrayRow3[i] < min || arrayRow3[i] > max)
                {
                    return false;
                }
            }
        }
    }

    return true;
}
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    for (int a = 0; a < size; a++)
    {
        if ((arrayRow1[a] != arrayRow2[a]) || (arrayRow1[a] != arrayRow3[a]) || (arrayRow2[a] != arrayRow3[a]))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    if (checkRowSum(arrayRow1, arrayRow2, arrayRow3, size) && checkColSum(arrayRow1, arrayRow2, arrayRow3, size) && checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size) && checkUnique(arrayRow1, arrayRow2, arrayRow3, size) && checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX))
    {
        return true;
    }
    else
    {
        return false;
    }
}