#include <iostream>
using namespace std;

int main()
{
	int time, hr, min;
	
	cout << "Enter the elapsed time for an event in seconds: ";
	cin >> time;
	
	hr = time / 3600;
	time = time % 3600;
	
	min = time / 60;
	time = time % 60;
	
	cout << "Elapsed time in hours, minutes, and seconds = "
		 << hr << ":" << min << ":" << time << endl;=
	
	return 0;
}
