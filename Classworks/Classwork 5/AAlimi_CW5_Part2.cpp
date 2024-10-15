/*
 * Class: CMSC140 CRN 34975
 * Instructor: Elia Shahbazi
 * Classwork 5 Part 2
 * Description: Storing data into a txt. file
 * Due Date: 4/2/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Arianna Alimi
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string NAME;
	cout << "Enter your name: ";
	getline(cin, NAME);

	string phoneNumber;
	cout << "Enter your phone number: ";
	getline(cin, phoneNumber);

	string ADDRESS;
	cout << "Enter your street address: ";
	getline(cin, ADDRESS);

	string CITY;
	cout << "Enter your city: ";
	getline(cin, CITY);

	string STATE;
	cout << "Enter your state: ";
	getline(cin, STATE);

	string ZIP;
	cout << "Enter your zip code: ";
	getline(cin, ZIP);

	cout << endl;
	cout << "This is your information:" << endl;
	cout << endl;

	cout << "Name : " << NAME << endl;
	cout << "Phone Number: " << phoneNumber << endl;
	cout << "Address: " << ADDRESS << endl;
	cout << "         " << CITY << ", " << STATE << ", " << ZIP;

	fstream outputFile;
	outputFile.open("List.txt", ios::out);
	if (outputFile.is_open())
	{
		outputFile << NAME << endl;
		outputFile << phoneNumber << endl;
		outputFile << ADDRESS << endl;
		outputFile << CITY << endl;
		outputFile << STATE << endl;
		outputFile << ZIP << endl;
		outputFile.close();
	}

	return 0;
}

