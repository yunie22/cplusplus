#include <iostream>
using namespace std;
const int STANDARD = 1000;
const int ACTUAL_VALUE = 1024;

int main()
{
	double size, bytes, actualStorageCapacity;
	
	cout << "Enter the size of the hard drive specified by the manufacturer in GB: ";
	cin >> size;
	cout << endl;
	
	bytes = size * STANDARD * STANDARD * STANDARD;
	actualStorageCapacity = bytes / ACTUAL_VALUE / ACTUAL_VALUE / ACTUAL_VALUE;
	
	cout << "Actual storage capacity of the hard drive: " << actualStorageCapacity << " GB" << endl;
	
	return 0;
}
