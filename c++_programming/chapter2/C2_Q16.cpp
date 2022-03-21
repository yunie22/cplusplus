#include <iostream>
using namespace std;
const double LITER = 3.78;
const double COST= 0.38;
const double PROFIT = 0.27;

int main()
{
	double amount, number, cost, profit;
	
	cout << "Enter total amount of mlik produced in liters: ";
	cin >> amount;
	
	number = static_cast<int>(amount / LITER);
	cost = amount * COST;
	profit = number * PROFIT;
	
	cout << "Number of milk cartons needed to hold milk: " << number << endl;
	cout << "Cost of producing milk: $" << cost << endl;
	cout << "Profit for producing milk: $" << profit << endl;
	
	return 0;
}
