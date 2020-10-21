#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int roomsOnFloor = 0;
  int totalRooms = 0;
  int totalFloors = 0;
  int totalOccupiedRooms = 0;
  int occupiedRoomsOnFloor = 0;
  float percentOccupied = 0.0f;

  cout << "Enter number of floors: ";
  cin >> totalFloors;

  while (totalFloors < 1)
  {
    cout << "Number of floors must be at least 1.\n Please re -enter: ";
    cin >> totalFloors;
  }

  for (int i = 1; i <= totalFloors; i++)
  {
    if (i != 13)
    {
      cout << "\nEnter the number of rooms on floor " << i << ": ";
      cin >> roomsOnFloor;

      while (roomsOnFloor < 10)
      {
        cout << "Number of rooms on floor must be at least 10.\nPlease re-enter: ";
        cin >> roomsOnFloor;
      }
    }

    cout << "\nHow many rooms are occupied?\nEnter the number of occupied Rooms on floor " << i <<": ";
    cin >> occupiedRoomsOnFloor;

    totalRooms += roomsOnFloor;
    totalOccupiedRooms += occupiedRoomsOnFloor;
  }

  percentOccupied = (totalOccupiedRooms * 1.0f / totalRooms) * 100.0f;

  cout << "\n- The hotel has " << totalFloors << " Floors.\n";
  cout << "\n- The hotel has " << totalRooms << " Rooms.\n";
  cout << "\n- There are " << totalOccupiedRooms << " Rooms That Was Occupied.\n";
  cout << "\n- There are " << totalRooms - totalOccupiedRooms <<" Rooms That's available and not Occupied.\n";
  cout << "\n- Percentage of occupied rooms is " << setprecision(2) << fixed << percentOccupied << "%\n";
  return 0;
}
