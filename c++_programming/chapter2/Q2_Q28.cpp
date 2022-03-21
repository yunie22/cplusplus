#include <iostream>
using namespace std;

int main()
{
	double numberOfStudents, caloriesNumber;
	double nutCalories, driedFruitCalories, totalCalories;
	double amount;
	
	cout << "Enter the number of students: ";
	cin >> numberOfStudents;
	
	cout << "Enter the number of calories required for each student: ";
	cin >> caloriesNumber;
	
	cout << "Enter the number of calories in each pound of nuts: ";
	cin >> nutCalories;
	cout << endl;
	
	driedFruitCalories = nutCalories / 0.7;
	totalCalories = nutCalories + driedFruitCalories;
	amount = (caloriesNumber / totalCalories) * numberOfStudents;
	
	cout << "Amount of nuts and dried fruit needed for the students: "
		 << amount << endl;
		 
	return 0;
}
