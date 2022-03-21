#include <iostream>
using namespace std;

int main()
{
	double capacity, miles, distance;
	
	cout << "Enter the capacity, in gallons, of an automobile fuel tank: ";
	cin >> capacity;
	cout << endl;
	
	cout << "Enter the miles per gallon the automobile can be driven: ";
	cin >> miles;
	cout << endl;
	
	distance = capacity / miles;
	
	cout << "Number of miles the automobile can be driven without refueling: "
		 << distance << endl;
		 
	return 0;
}
