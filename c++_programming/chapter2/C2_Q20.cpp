#include <iostream>
using namespace std;

int main()
{
	double fixedCommission, percentageCommission, baseCost, minimumAdded, maximumAdded;
	double minimumSellingPrice, maximumSellingPrice, minimumCommission, maximumCommission;
	
	cout << "Enter the salesperson's fixed commission: $";
	cin >> fixedCommission;
	
	cout << "Enter the percentage of the commission: ";
	cin >> percentageCommission;
	
	cout << "Enter the purchasing cost of the car: $";
	cin>> baseCost;
	
	cout << "Enter the minimum amount to be added to purchasing cost: $";
	cin >> minimumAdded;
	
	cout << "Enter the maximum amount to be added to purchasing cost: $";
	cin >> maximumAdded;
	cout << endl;
	
	minimumSellingPrice = baseCost + minimumAdded;
	maximumSellingPrice = baseCost + maximumAdded;
	
	percentageCommission /= 100;
	minimumCommission = fixedCommission + minimumAdded * percentageCommission;
	maximumCommission = fixedCommission + maximumAdded * percentageCommission;
	
	cout << "Minimum selling price of the car = $" << minimumSellingPrice << endl;
	cout << "Maximum selling price of the car = $" << maximumSellingPrice << endl;
	cout << "The salesperson's commission range = $" << minimumCommission
		 << " : $" << maximumCommission << endl;
		 
	return 0;	
}
