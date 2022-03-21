#include <iostream>
using namespace std;
const int QUARTERS = 25;
const int DIMES = 10;
const int NICKELS = 5;

int main()
{
	int quarters, dimes, nickels, pennies;
	
	cout << "Enter number of quarters: ";
	cin >> quarters;
	
	cout << "Enter number of dimes: ";
	cin >> dimes;
	
	cout << "Enter number of nickels: ";
	cin >> nickels;
	cout << endl;
	
	pennies = quarters * QUARTERS + dimes * DIMES + nickels * NICKELS;
	
	cout << "Total value of the coins in pennies = " << pennies << endl;
	
	return 0;
}
