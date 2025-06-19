/*
 * Exercise 2: Simple Calculator
 * Practice: Input/output, operators, and conditionals
 */

#include <stdio.h>

int main() {
    // TODO: Declare variables for two numbers and operation choice
    
    printf("=== Simple Calculator ===\n");
    
    // TODO: Get two numbers from user
    printf("Enter first number: ");
    // Your input code here
    
    printf("Enter second number: ");
    // Your input code here
    
    // TODO: Display menu of operations
    printf("\nSelect operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulo (%%)\n");
    printf("Your choice (1-5): ");
    // Your input code here
    
    // TODO: Use switch statement or if-else to perform operation
    // TODO: Display the result
    // TODO: Handle division by zero case
    
    return 0;
}

/*
 * LEARNING GOALS:
 * - Practice scanf() for numeric input
 * - Use switch statement or if-else chains
 * - Perform arithmetic operations
 * - Handle edge cases (division by zero)
 * - Format output nicely
 * 
 * BONUS CHALLENGES:
 * - Add more operations (power, square root)
 * - Allow multiple calculations in a loop
 * - Validate user input (check if choice is 1-5)
 * 
 * EXPECTED OUTPUT EXAMPLE:
 * Enter first number: 10
 * Enter second number: 3
 * Select operation: 1
 * Result: 10 + 3 = 13
 */
