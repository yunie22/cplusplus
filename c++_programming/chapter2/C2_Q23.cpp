#include <iostream>
using namespace std;
const double CHARGE = 0.015;

int main()
{
	double number, purchasePrice, sellingPrice;
	double amountInvested, amountSold;
	double totalServiceCharges, gainedLost, amountReceived;
	
	cout << "Enter number of shares sold: ";
	cin >> number;
	
	cout << "Enter purchase price of each share: ";
	cin >> purchasePrice;
	
	cout << "Enter selling price of each share: ";
	cin >> sellingPrice;
	cout << endl;
	
	amountInvested = number * purchasePrice;
	amountSold = number * sellingPrice;
	totalServiceCharges = (amountInvested + amountSold) * CHARGE;
	gainedLost = amountSold - amountInvested - totalServiceCharges;
	amountReceived = amountSold - totalServiceCharges;
	
	cout << "Amount invested = $" << amountInvested << endl;
	cout << "Total service charges = $" << totalServiceCharges << endl;
	cout << "Amount gained or lost = $" << gainedLost << endl;
	cout << "Amount received after selling the stock = $" << amountReceived << endl;
	
	return 0;
}
