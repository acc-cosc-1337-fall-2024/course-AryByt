//write include statements
#include <iostream>
#include "repetition.h"
//write using statements

int main() 
{
	int choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Factorial" << std::endl;
        std::cout << "2. Greatest Common Divisor" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                std::cout << "Enter a number to find its factorial: ";
                std::cin >> num;
                std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
                break;
            }
            case 2: {
                int num1, num2;
                std::cout << "Enter two numbers to find their GCD: ";
                std::cin >> num1 >> num2;
                std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
                break;
            }
            case 3:
                std::cout << "Exiting program..." << std::endl;
                return 0;
            default:
                std::cout << "Not a valid choice please enter a valid choice." << std::endl;
        }
    } while (true);

	return 0;
}
