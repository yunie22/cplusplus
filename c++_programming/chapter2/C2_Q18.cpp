#include <iostream>
using namespace std;
const double TAX_RATE = 0.14;
const double CLOTHES_AND_ACCESSORIES = 0.10;
const double SCHOOL_SUPPLIES = 0.01;
const double SAVINGS_BONDS = 0.25;
const double ADDITIONAL_SAVINGS_BONDS = 0.50;

int main()
{
	double payRate, hours, incomeBeforeTaxes, netIncome;
	double clothesAccessories, schoolSupplies;
	double savingsBonds, additionalSavingsBonds;
	
	cout << "Enter pay rate for an hour: ";
	cin >> payRate;
	
	cout << "Enter number of hours worked each week: ";
	cin >> hours;
	cout << endl;
	
	incomeBeforeTaxes = payRate * hours;
	netIncome = incomeBeforeTaxes * (1 - TAX_RATE);
	
	cout << "Income before taxes = $" << incomeBeforeTaxes << endl;
	cout << "Income after taxes = $" << netIncome << endl;
	
	clothesAccessories = netIncome * CLOTHES_AND_ACCESSORIES;
	schoolSupplies = netIncome * SCHOOL_SUPPLIES;
	netIncome = netIncome - clothesAccessories - schoolSupplies;
	
	cout << "Money spent on clothes and other accessories = $" << clothesAccessories << endl;
	cout << "Money spent on school supplies = $" << schoolSupplies << endl;
	
	savingsBonds = netIncome * SAVINGS_BONDS;
	additionalSavingsBonds = static_cast<int>(savingsBonds) * ADDITIONAL_SAVINGS_BONDS;
	
	cout << "Money spent to buy savings bonds = $" << savingsBonds << endl;
	cout << "Money parents spend to buy additional savings bonds = $" << additionalSavingsBonds << endl;
	
	return 0;	 
}
