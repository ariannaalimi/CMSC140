/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 8
 * Description: Using arrays and for loops to display scores in order, the max, the min, and average
 * Due Date: 5/7/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi 
*/

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes:
void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);

int main()
{
    int userChoice;
    const int SIZE = 50;
    cout << "How many scores do you want to enter? ";
    cin >> userChoice;

   
    int SCORES[SIZE];

    while (userChoice > 50)
    {
        cout << "The number you have entered is out of range. Please select a number between 1 - 50: ";
        cin >> userChoice;
    }

    while (userChoice < 0)
    {
        cout << "The integer you have entered is not a positive value. Please try again: ";
        cin >> userChoice;
    }

    for (int a = 0; a < userChoice; a++)
    {
        cout << "Enter score #" << a + 1 << ": ";
        cin >> SCORES[a];
        
        while (SCORES[a] < 0)
        {
            cout << "The integer you have entered is not a positive value. Please try again: ";
            cin >> SCORES[a];
        }
    }

    displayArray(SCORES, userChoice);

    cout << endl;

    selectionSort(SCORES, userChoice);

    cout << endl;

    cout << "Highest score: " << findMax(SCORES, userChoice) << endl;

    cout << endl;

    cout << "Lowest score: " << findMin(SCORES, userChoice) << endl;

    cout << endl;

    cout << "Average of scores: " << findAvg(SCORES, userChoice) << endl;


    return 0;
}

void displayArray(int array[], int size)
{
    cout << "Original order scores are: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

}

void selectionSort(int array[], int size)
{
    int INITIAL;
    int a;
    int b;


    cout << "Scores ordered high to low: ";

    for (INITIAL = 0; INITIAL < (size - 1); INITIAL++)
    {
        a = INITIAL;
        b = array[INITIAL];

        for (int c = INITIAL + 1; c < size; c++)
        {
            if (array[c] > b)
            {
                b = array[c];
                a = c;
            }
        }

        swap(array[a], array[INITIAL]);

    }

    for (int d = 0; d < size; d++)
    {
        cout << array[d] << " ";
    }

    cout << endl;
}

int findMax(int array[], int size)
{
    int MAXIMUM = -1;

    for (int a = 0; a < size; a++)
    {
        if (array[a] > MAXIMUM)
        {
            MAXIMUM = array[a];
        }
    }

    return MAXIMUM;
}

int findMin(int array[], int size)
{
    int MINIMUM = 500000;

    for (int a = 0; a < size; a++)
    {
        if (array[a] < MINIMUM)
        {
            MINIMUM = array[a];
        }
    }

    return MINIMUM;
}

double findAvg(int array[], int size)
{
    double ACCUMULATOR = 0;

    for (int a = 0; a < size; a++)
    {
        ACCUMULATOR += array[a];
    }

    return (ACCUMULATOR / size);
}
