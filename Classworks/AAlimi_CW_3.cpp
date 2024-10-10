/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 3
 * Description: This program calculates the final and average score after inputting user's scores
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
    string NAME;
    double SYLLABUS, CHAPTER1, CHAPTER2, EXAM, PRACTICE;

    cout << "Enter Student's name: ";
    getline(cin, NAME);
    cout << endl;

    cout << "Enter Syllabus Quiz Score ranging from 0 to 100: ";
    cin >> SYLLABUS;
    cout << endl;

    cout << " Enter Chapter 1 Quiz Score ranging from 0 to 100: ";
    cin >> CHAPTER1;
    cout << endl;

    cout << "Enter Chapter 2 Quiz Score ranging from 0 to 100: ";
    cin >> CHAPTER2;
    cout << endl;

    cout << "Enter Exam Score ranging from 0 to 100: ";
    cin >> EXAM;
    cout << endl;

    cout << "Enter Practice Score ranging from 0 to 100: ";
    cin >> PRACTICE;
    cout << endl;

    double finalScore = SYLLABUS + CHAPTER1 + CHAPTER2 + EXAM + PRACTICE;
    double averageScore = finalScore / 5;

    cout << NAME << ":  Final Score: " << finalScore << setprecision(2) << fixed << " Average Score: " << averageScore << endl;

    return 0;
}
