//write include statements
#include <iostream>
#include "hwexpressions.h"
//write namespace using statement for cout

int main()
{
	double meal_amount, tip_rate; 

	std::cout << "Enter meal amount: ";
	std::cin >> meal_amount;
	std::cout << "Enter tip rate %: ";
	std::cin >> tip_rate;

	double tax_amount = get_sales_tax_amount(meal_amount);
	double tip_amount = get_tip_amount(meal_amount, tip_rate);
	double total = meal_amount + tax_amount + tip_amount; 

	std::cout << "Meal Amount: " << meal_amount << '\n' ;
	std::cout << "Sales Tax: "<< tax_amount << '\n';
	std::cout << "Tip Amount: " << tip_amount << '\n';
	std::cout << "Total: "<< total << '\n'; 

	return 0;
}
