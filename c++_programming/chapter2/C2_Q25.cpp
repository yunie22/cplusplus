#include <iostream>
using namespace std;
const double PI = 3.1416;

int main()
{
	double length, radius, area;
	
	cout << "Enter the length of the wire: ";
	cin >> length;
	cout << endl;
	
	radius = length / 2 / PI;
	area = PI * radius * radius;
	
	cout << "Radius of the circle = " << radius << endl;
	cout << "Area of the circle = " << area << endl;
	
	return 0;
}
