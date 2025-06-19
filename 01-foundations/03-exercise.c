/*
 * Exercise: Input and Output
 * 
 * This is a hands-on exercise for the 03-input-output.c lesson.
 * Complete the tasks below to practice reading user input and formatting output.
 * 
 * Instructions:
 * 1. Read each task carefully
 * 2. Write the code in the designated areas
 * 3. Test your solutions by compiling and running the program
 * 4. Try different inputs to see how your program responds
 */

#include <stdio.h>

int main() {
    printf("=== Input and Output Exercise ===\n\n");
    
    // Task 1: Basic Input
    printf("Task 1: Basic User Input\n");
    printf("------------------------\n");
    
    // TODO: Ask the user for their name and age
    // Read the input and display it back
    // Use appropriate format specifiers
    // Write your code here:
    
    
    
    
    
    printf("\n");
    
    // Task 2: Multiple Inputs
    printf("Task 2: Multiple Data Types\n");
    printf("---------------------------\n");
    
    // TODO: Ask user for:
    // - Favorite number (int)
    // - Height in meters (float)
    // - First initial (char)
    // Read all inputs and display them in a formatted way
    // Write your code here:
    
    
    
    
    
    
    printf("\n");
    
    // Task 3: String Input with Spaces
    printf("Task 3: String Input\n");
    printf("--------------------\n");
    
    // TODO: Ask user for their full name (including spaces)
    // Ask for their favorite quote (including spaces)
    // Use appropriate input method for strings with spaces
    // Write your code here:
    
    
    
    
    
    printf("\n");
    
    // Task 4: Formatted Output
    printf("Task 4: Formatted Output\n");
    printf("------------------------\n");
    
    // TODO: Ask user for a decimal number
    // Display it in different formats:
    // - With 2 decimal places
    // - With 0 decimal places
    // - In scientific notation
    // - With field width of 10
    // Write your code here:
    
    
    
    
    
    
    printf("\n");
    
    // Task 5: Simple Calculator
    printf("Task 5: Interactive Calculator\n");
    printf("------------------------------\n");
    
    // TODO: Create a simple calculator:
    // - Ask user for two numbers
    // - Ask for operation (+, -, *, /)
    // - Perform calculation and display result
    // Handle division by zero
    // Write your code here:
    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 6: Temperature Converter
    printf("Task 6: Temperature Converter\n");
    printf("-----------------------------\n");
    
    // TODO: Create a temperature converter:
    // - Ask user for temperature in Celsius
    // - Convert to Fahrenheit: F = (C * 9/5) + 32
    // - Convert to Kelvin: K = C + 273.15
    // - Display all three temperatures with 1 decimal place
    // Write your code here:
    
    
    
    
    
    
    printf("\n");
    
    // Task 7: Personal Information Form
    printf("Task 7: Personal Information Form\n");
    printf("---------------------------------\n");
    
    // TODO: Create a form that asks for:
    // - Full name
    // - Age
    // - Email address
    // - Phone number
    // - Favorite color
    // Then display all information in a nice formatted card
    // Write your code here:
    
    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 8: Input Validation Challenge
    printf("Task 8: Input Validation\n");
    printf("------------------------\n");
    
    // TODO: Ask user for their age
    // Check if the age is reasonable (between 0 and 150)
    // Display appropriate message based on the age
    // Hint: You'll need conditional statements (covered in next lesson)
    // For now, just read the age and display a message
    // Write your code here:
    
    
    
    
    
    printf("\n");
    
    // Task 9: Receipt Generator
    printf("Task 9: Receipt Generator\n");
    printf("-------------------------\n");
    
    // TODO: Create a simple receipt generator:
    // - Ask for item name, quantity, and price per item
    // - Calculate total cost (quantity * price)
    // - Add 8.5% tax
    // - Display a formatted receipt
    // Write your code here:
    
    
    
    
    
    
    
    
    printf("\nExercise completed!\n");
    return 0;
}

/*
 * SAMPLE INTERACTION (for reference):
 * 
 * Task 1: Basic User Input
 * Enter your name: Alice
 * Enter your age: 25
 * Hello Alice, you are 25 years old!
 * 
 * Task 4: Formatted Output
 * Enter a decimal number: 123.456789
 * With 2 decimal places: 123.46
 * With 0 decimal places: 123
 * Scientific notation: 1.234568e+02
 * Field width 10: |   123.46|
 * 
 * Task 6: Temperature Converter
 * Enter temperature in Celsius: 25
 * 25.0°C = 77.0°F = 298.2K
 * 
 * IMPORTANT NOTES:
 * - Remember to use scanf carefully with strings
 * - Use %[^\n] for strings with spaces
 * - Clear input buffer when needed
 * - Always validate user input when possible
 * 
 * COMPILATION:
 * gcc 03-exercise.c -o 03-exercise
 * 
 * LEARNING OBJECTIVES:
 * - Master scanf for different data types
 * - Practice printf formatting options
 * - Handle string input with spaces
 * - Build interactive programs
 * - Understand input/output best practices
 */
