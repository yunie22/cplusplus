#include <iostream>
using namespace std;

int main()
{
	double originalPrice, percentage, sellingPrice, salesTaxRate, salesTax, finalPrice;
	
	cout << "Enter the initial price of the item: $";
	cin >> originalPrice;
	
	cout << "Enter the percentage of the marked-up price: ";
	cin >> percentage;
	
	cout << "Enter the sales tax rate: ";
	cin >> salesTaxRate;
	
	salesTax = originalPrice * (salesTaxRate/100);
	sellingPrice = originalPrice * (percentage/100) + originalPrice;
	finalPrice = salesTax + sellingPrice;
	
	cout << endl;
	
	cout << "Original price of the item = $" << originalPrice << endl;
	cout << "Percentage of the mark-up = " << percentage << "%" << endl;
	cout << "Selling price of the item = $" << sellingPrice << endl;
	cout << "Sales tax rate = " << salesTaxRate << "%" << endl;
	cout << "Sales tax = $" << salesTax << endl;
	cout << "Final Price = $" << finalPrice << endl;
	
	return 0;
}
