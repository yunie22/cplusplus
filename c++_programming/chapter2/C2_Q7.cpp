#include <iostream>
using namespace std;

int main()
{
	double number;
	
	cout << "Enter a decimal number:";
	cin >> number;
	cout << endl;
	
	cout << "Nearest integer of the number entered: " << static_cast<int>(number);
	
	return 0;
}
