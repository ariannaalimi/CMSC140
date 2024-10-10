/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Project 4
 * Description: Using mulitple functions to calulcate the absences of employees
 * Due Date: 04/16/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int getNumOfEmployees(); //function prototypes
int getTotalAbsent(int);
int calculateAvgDaysAbsent(int, int);

ofstream outputFile;


int main()
{
    outputFile.open("employeeAbsences.txt");
    outputFile << "EMPLOYEE ABSENCE REPORT" << endl;

    cout << "Calculate the average number of days a comapny's employees are absent." << endl;
    cout << endl;



    int EMPLOYEES = getNumOfEmployees();

    int totalAbsences = getTotalAbsent(EMPLOYEES);

    double AVERAGE = calculateAvgDaysAbsent(totalAbsences, EMPLOYEES);

    const string PROGRAMMER = "Arianna Alimi";
    cout << "Programmer: " << PROGRAMMER;

    outputFile << endl;
    outputFile << "The " << EMPLOYEES << " employees were absent a total of " << totalAbsences << " days." << endl;
    outputFile << "The average number of days absent is " << setprecision(1) << showpoint << fixed << AVERAGE << " days." << endl;

    const string CLASS = "CMSC140 CRN 34975";
    const string ASSIGNMENT = "Project 4";
    const string dueDate = "04/16/2023";

    outputFile << endl;
    outputFile << "Class: " << CLASS << endl;
    outputFile << "Assignment: " << ASSIGNMENT << endl;
    outputFile << "Programmer: " << PROGRAMMER << endl;
    outputFile << "Due Date: " << dueDate << endl;

    outputFile.close();

}

int getNumOfEmployees()
{
    int employeeNum;
    cout << "Please enter the number of employees in the company: ";
    cin >> employeeNum;

    while (employeeNum < 1)
    {
        cout << "Integer must be greater than 0. Please try again: ";
        cin >> employeeNum;
    }

    return employeeNum;
}

int getTotalAbsent(int NUM1) // NUM1 = Number of Employees
{
    int theTotalAb = 0;
    for (int a = 1; a <= NUM1; a++)
    {
        int employeeID;
        cout << "Please enter an employee ID: ";
        cin >> employeeID;

        outputFile << setw(8) << employeeID;

        int ABSENT;
        cout << "Please enter the number of days this employee was absent: ";
        cin >> ABSENT;


        while (ABSENT < 0)
        {
            cout << "The number of days must not be negative." << endl;
            cout << "Please re-enter the number of days absent: ";
            cin >> ABSENT;


        }

        outputFile << setw(10) << ABSENT << endl;

        theTotalAb += ABSENT;
    }
    return theTotalAb;
}

int calculateAvgDaysAbsent(int NUMBER1, int NUMBER2) //NUMBER1 = # of Absences, NUMBER2 = # of Employees
{
    double AVG = NUMBER1 / NUMBER2;
    return AVG;
}








