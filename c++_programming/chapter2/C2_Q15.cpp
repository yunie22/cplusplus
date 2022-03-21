#include <iostream>
using namespace std;
const double PI = 3.141593;

int main()
{
	double radius, area, price, pricePerSquareInch;
	
	cout << "Enter the radius of the pizza: ";
	cin >> radius;
	
	cout << "Enter the price of the pizza: $";
	cin >> price;
	
	area = PI * radius * radius;
	pricePerSquareInch = price / area;
	
	cout << endl;
	
	cout << "Price of the pizza per square inch = $" << pricePerSquareInch << endl;
	
	return 0;
}
