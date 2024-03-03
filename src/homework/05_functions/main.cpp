#include <iostream>
#include "func.h"
int main() {
    int choice;
    std::string dna;

    do {
        std::cout << "Menu\n"
                     "1- Get GC Content\n"
                     "2- Get DNA Complement\n"
                     "3- Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter DNA string: ";
                std::cin >> dna;
                std::cout << "GC content: " << get_gc_content(dna) << std::endl;
                break;
            case 2:
                std::cout << "Enter DNA string: ";
                std::cin >> dna;
                std::cout << "DNA complement: " << get_dna_complement(dna) << std::endl;
                break;
            case 3:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}

