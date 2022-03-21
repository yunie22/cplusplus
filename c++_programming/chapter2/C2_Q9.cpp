#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, num4, num5, average;
	
	cout << "Enter 5 test scores: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	average = (num1 + num2 + num3 + num4 + num5) / 5;
	
	cout << "Average = " << average << endl;
	
	return 0;
	
}
