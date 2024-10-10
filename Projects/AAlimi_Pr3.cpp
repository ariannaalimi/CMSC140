/*
* Class: CMSC140 CRN 34975
* Instructor: Elia Shahbazi
* Project 3
* Description: Using loops to display prices for different rooms in a hotel
* Due Date: 4/2/2023
* I pledge that I have completed the programming assignment independently.
  I have not copied the code from a student or any source.
  I have not given my code to any student.
  Print your Name here: Arianna Alimi 
*/

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    cout << "=========================================================" << endl;
    cout << setw(28.5) << "BlueMont Hotel" << endl;
    cout << "=========================================================" << endl;

    string LOCATION;
    cout << "Enter the location for this hotel chain: ";
    getline(cin, LOCATION);
    
    
    int FLOORS;
    cout << "Enter total number of floors of the hotel: ";
    cin >> FLOORS;
    
    
    while ((FLOORS < 1) || (FLOORS > 5))
    {
        cout << "Number of floors should be between 1 and 5 !! Please try again." << endl;
        cout << endl;
        cout << "Enter total number of floors of the hotel: ";
        cin >> FLOORS;
    }
    
    int ROOMS;
    int SINGLE;
    int doubleRoom;
    int KING;
    int SUITE;
    int addFloors;
    const double costOfSingle = 60;
    const double costOfDouble = 75;
    const double costOfKing = 100;
    const double costOfSuite = 150;
    double runningTotalOfRooms = 0;
    double totalNumOfRooms = 0;
    double totalOccupiedRooms = 0;
    int totalUnoccupiedRooms = 0;
    int min_floor;
    int min_rooms = 1000;
    
    for (addFloors = 1; addFloors <= FLOORS; addFloors++)
    {
            cout << endl;
            cout << "Enter total number of rooms in the " << addFloors << "th Floor: ";
            cin >> ROOMS;
            
            while ((ROOMS < 1) || (ROOMS > 30))
            {
                cout << "Number of rooms should be between 1 and 30 !! Please try again." << endl;
                cout << endl;
                cout << "Enter the total number of rooms in the " << addFloors << "th Floor: ";
                cin >> ROOMS;
            }
           
           
            cout << "How many SINGLE rooms are occupied in the " << addFloors << "th Floor: ";
            cin >> SINGLE;

            cout << "How many DOUBLE rooms are occupied in the " << addFloors << "th Floor: ";
            cin >> doubleRoom;

            cout << "How many KING rooms are occupied in the " << addFloors << "th Floor: ";
            cin >> KING;

            cout << "How many SUITE rooms are occupied in the " << addFloors << "th Floor: ";
            cin >> SUITE;
           
           while (SINGLE + doubleRoom + KING + SUITE > ROOMS)
           {
               cout << endl;
               cout << "The occupied rooms exceed the number of rooms inputted. Try again!!" << endl;
               
               cout << "How many SINGLE rooms are occupied in the " << addFloors << "th Floor: ";
               cin >> SINGLE;
               
               cout << "How many DOUBLE rooms are occupied in the " << addFloors << "th Floor: ";
               cin >> doubleRoom;
               
               cout << "How many KING rooms are occupied in the " << addFloors << "th Floor: ";
               cin >> KING;
               
               cout << "How many SUITE rooms are occupied in the " << addFloors << "th Floor: ";
               cin >> SUITE;
           }
           
            if (min_rooms > ROOMS)
            {
                min_rooms = 0 + ROOMS;
                min_floor = 0 + addFloors;
            }
           
            runningTotalOfRooms += (costOfSingle * SINGLE) + (costOfDouble * doubleRoom) + (costOfKing * KING) + (costOfSuite * SUITE);
            totalNumOfRooms += ROOMS;
            totalOccupiedRooms += SINGLE + doubleRoom + KING + SUITE;
    }
    

    double occupancyRate = (totalOccupiedRooms / totalNumOfRooms) * 100;
    totalUnoccupiedRooms = (totalNumOfRooms - totalOccupiedRooms);
    
    
    cout << endl;
    cout << "============================================================================================" << endl;
    cout << setw(46) << "BlueMont Hotel located in " << LOCATION << endl;
    cout << setw(55) << " TODAY'S ROOM RATES <US$/night> " << endl;
    cout << setw(20) << " Single Room " << setw(20) << " Double Room " << setw(20) << " King Room " << setw(20) << " Suite Room " << endl;
    cout << setw(15) << " 60 " << setw(20) << " 75 " << setw(21) << "100" << setw(20) << "150" << endl;
    cout << "============================================================================================" << endl;
    cout << showpoint << setprecision(2) << fixed << setw(30) << " Hotel Income: " << setw(9) << "$" << runningTotalOfRooms << endl;
    cout << setw(30) << " Total # of rooms: " << setw(9) << int(totalNumOfRooms) << endl;
    cout << setw(30) << "Total # of Occupied Rooms: " << setw(9) << int(totalOccupiedRooms) << endl;
    cout << setw(30) << " Total # UnOccupied Rooms: " << setw(9) << totalUnoccupiedRooms << endl;
    cout << setprecision(2) << showpoint << fixed << setw(30) << "Occupancy Rate: " << setw(9) << occupancyRate << "%" << endl;
 
    cout << endl;
    cout << min_floor << "th Floor with " << min_rooms << " rooms has the least number of rooms." << endl;
   
    if (occupancyRate < 60.00)
    {
       cout << "Need to improve the occupancy rate!!" << endl;
    }
   
   
    const string PROGRAMMER = "Arianna Alimi";
    const string PROJECT = "Common Project 3";
    const string dueDate = "4/2/2023";
   
    cout << endl;
    cout << "Thank you for testing my program!!" << endl;
    cout << "PROGRAMMER: " << PROGRAMMER << endl;
    cout << "CMSC140 " << PROJECT << endl;
    cout << "Due Date: " << dueDate << endl;

    return 0;
    
}
