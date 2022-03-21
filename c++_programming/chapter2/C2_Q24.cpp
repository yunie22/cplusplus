#include <iostream>
using namespace std;

int main()
{
	double wire, length, width;
	
	cout << "Enter the length of the wire: ";
	cin >> wire;
	cout << endl;
	
	width = wire / 5;
	length = 1.5 * width;
	
	cout << "The length of the picture frame = " << length << endl;
	cout << "The width of the picture frame = " << width << endl;
	
	return 0;
}
