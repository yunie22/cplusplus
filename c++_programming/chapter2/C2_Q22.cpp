#include <iostream>
using namespace std;
const int METRIC_TON = 2205;

int main()
{
	double rice, number;
	
	cout << "Enter the amount of rice a bag can hold, in pounds: ";
	cin >> rice;
	cout << endl;
	
	number = METRIC_TON / rice;
	
	cout << "Number of bags needed to store one metric ton of rice = "
		 << number << endl;
		 
	return 0;
}
