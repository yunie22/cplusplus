#include <iostream>
using namespace std;

int main ()
{
	double num1, num2, num3, num4, num5, sum;
	
	cout << "Enter five decimal numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	sum = num1 + num2 + num3 + num4 + num5;
	
	cout << "Sum to the nearest integer = " << static_cast<int>(sum) << endl;
	
	return 0;
}
