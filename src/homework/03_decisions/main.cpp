//write include statements

#include <iostream>
#include "decisions.h"

int main() {
    int choice;
    int grade;

    std::cout << "Main Menu\n";
    std::cout << "1-Letter grade using if\n";
    std::cout << "2-Letter grade using switch\n";
    std::cout << "3-Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    // Prompt the user for the numerical grade
    std::cout << "Enter numerical grade: ";
    std::cin >> grade;

    // Check the choice selected by the user
    switch (choice) {
        case 1:
            std::cout << "Letter grade: " << get_letter_grade_using_if(grade) << std::endl;
            break;
        case 2:
            std::cout << "Letter grade: " << get_letter_grade_using_switch(grade) << std::endl;
            break;
        case 3:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice\n";
    }

    return 0;
}