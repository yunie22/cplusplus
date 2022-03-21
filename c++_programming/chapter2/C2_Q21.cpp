#include <iostream>
using namespace std;
const double K = 6.67E-8;

int main()
{
	double mOne, mTwo, distance, force;
	
	cout << "Enter the mass of the first body: ";
	cin >> mOne;
	
	cout << "Enter the mass of the second body: ";
	cin >> mTwo;
	
	cout << "Enter the distance between the bodies: ";
	cin >> distance;
	cout << endl;
	
	force = K * ((mOne * mTwo) / (distance * distance));
	
	cout << "The force between the bodies = " << force << endl;
	
	return 0;
}
