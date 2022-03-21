#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double amount, thickness, ratio;
	double length, width, area;
		
	cout << "Enter the amount of premixed concrete (in cubic yards): ";
	cin >> amount;
	cout << "Enter the thickness of the patio (in inches): ";
	cin >> thickness;
	cout << endl;
	
	cout << "Enter the ratio of length and width: ";
	cin >> ratio;
	
	amount *= 27;
	thickness /= 12;
	
	area = amount / thickness;
	width = sqrt(area / ratio);
	length = ratio * width;
	
	cout << "Length of the patio = " << length << " feet" << endl;
	cout << "Width of the patio = " << width << " feet" << endl;
	 
	return 0;
}
