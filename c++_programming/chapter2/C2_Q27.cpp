#include <iostream>
using namespace std;

int main()
{
	double lengthDoor, widthDoor, lengthFirstWindow, widthFirstWindow;
	double lengthSecondWindow, widthSecondWindow, lengthBookshelf, widthBookshelf;
	double lengthRoom, widthRoom, heightRoom, totalArea, paint, amount;
	
	cout << "Enter the following values in feet.\n" << endl;
	
	cout << "Enter length of the door: ";
	cin >> lengthDoor;
	cout << "Enter width of the door: ";
	cin >> widthDoor;
	cout << endl;
	
	cout << "Enter length of the first window: ";
	cin >> lengthFirstWindow;
	cout << "Enter width of the first window: ";
	cin >> widthFirstWindow;
	cout << endl;
	
	cout << "Enter length of the second window: ";
	cin >> lengthSecondWindow;
	cout << "Enter width of the second window: ";
	cin >> widthSecondWindow;
	cout << endl;
	
	cout << "Enter length of the bookshelf: ";
	cin >> lengthBookshelf;
	cout << "Enter width of the bookshelf: ";
	cin >> widthBookshelf;
	cout << endl;
	
	cout << "Enter length of the room: ";
	cin >> lengthRoom;
	cout << "Enter width of the room: ";
	cin >> widthRoom;
	cout << "Enter height of the room: ";
	cin >> heightRoom;
	cout << endl;
	
	cout << "Enter the area that can be painted with one gallon of paint: ";
	cin >> paint;
	cout << endl;
	
	totalArea = 2 * ((lengthRoom * heightRoom) + (widthRoom * heightRoom)) -
		(lengthDoor * widthDoor) - (lengthFirstWindow * widthFirstWindow) -
		(lengthSecondWindow * widthSecondWindow) - (lengthBookshelf * widthBookshelf);
	amount = totalArea / paint;
	
	cout << "Amount of paint needed to paint the wlals of the room = " << amount 
		 << " gallon" << endl;
	
	return 0;
}
