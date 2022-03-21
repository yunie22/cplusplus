#include <iostream>
using namespace std;
const double LITER = 3.78;

int main()
{
	double amount, cost, profit, number, totalCost, totalProfit;
	
	cout << "Enter total amount of mlik produced in liters: ";
	cin >> amount;
	
	cout << "Enter cost of producing one liter of milk: ";
	cin >> cost;
	
	cout << "Enter profit on one carton of milk: ";
	cin >> profit;
	
	number = static_cast<int>(amount / LITER);
	totalCost = amount * cost;
	totalProfit = number * profit;
	
	cout << endl;
	
	cout << "Number of milk cartons needed to hold milk: " << number << endl;
	cout << "Cost of producing milk: $" << totalCost << endl;
	cout << "Profit for producing milk: $" << totalProfit << endl;
	
	return 0;
}
