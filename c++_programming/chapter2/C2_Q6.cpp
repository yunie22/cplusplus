#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double studyHours;
	
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
	
	cout << "Enter the number of hours studied: ";
	cin >> studyHours;
	cout << endl;
	
	cout << "Hi " << name << "! You have studied for " << studyHours << " hours today." << endl;
	
	return 0;
}
