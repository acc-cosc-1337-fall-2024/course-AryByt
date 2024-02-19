//write include statement for decisions header

#include "decisions.h"
//Write code for function(s) code here
// Implementation of get_letter_grade_using_if function
std::string get_letter_grade_using_if(int grade) {
    // Check if the grade is between 90 and 100
    if (grade >= 90 && grade <= 100)
        return "A"; // Return 'A' if grade is in the range
    else if (grade >= 80 && grade <= 89)
        return "B"; 
    else if (grade >= 70 && grade <= 79)
        return "C";
    else if (grade >= 60 && grade <= 69)
        return "D"; 
    // Check if the grade is between 0 and 59
    else if (grade >= 0 && grade < 60)
        return "F"; // Return 'F' if grade is in the range
    else 
        return "Out of range"; // Return 'Out of range' if grade is not in any specified range
}

// Function to convert numerical grade to letter grade using a switch statement
std::string get_letter_grade_using_switch(int grade) {
    // Define a variable to hold the letter grade
    std::string letter_grade = "";
    // Use a switch statement to handle different grade ranges
    switch (grade / 10) {
        // For grades in the range 90-100
        case 10:
        case 9:
            letter_grade = "A"; // Assign letter grade A
            break; // Exit the switch statement
        case 8:
            letter_grade = "B"; 
            break;
        case 7:
            letter_grade = "C"; 
            break;
        case 6:
            letter_grade = "D";
            break;
        // For all other grades
        default:
            if (grade < 0 || grade > 100) {
                letter_grade = "Out of range"; // Prompt for out-of-range grades
            } else {
                letter_grade = "F"; // Assign letter grade F for other cases
            }
            break;
    }
    // Return the calculated letter grade
    return letter_grade;
}