/*
 * Exercise: Operators Practice
 * 
 * This is a hands-on exercise for the 04-operators.c lesson.
 * Complete the tasks below to practice using different types of operators in C.
 * 
 * Instructions:
 * 1. Read each task carefully
 * 2. Write the code in the designated areas
 * 3. Test your solutions by compiling and running the program
 * 4. Compare your results with expected outputs
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("=== Operators Exercise ===\n\n");
    
    // Task 1: Basic Arithmetic
    printf("Task 1: Basic Arithmetic Operations\n");
    printf("------------------------------------\n");
    
    // TODO: Declare two integers: num1 = 25, num2 = 7
    // Write your code here:
    
    int num1 = 25;
    int num2 = 7;
    
    // TODO: Calculate and print the following operations:
    // Addition, Subtraction, Multiplication, Division, Modulo
    // Format: "25 + 7 = 32"
    // Write your code here:

    printf("\n %d + %d = %d\n", num1, num2, num1+num2);
    
    
    
    
    
    
    printf("\n");
    
    // Task 2: Assignment Operators
    printf("Task 2: Assignment Operators\n");
    printf("----------------------------\n");
    
    // TODO: Start with value = 20
    // Apply the following operations and print each step:
    // += 10, -= 5, *= 3, /= 2, %= 7
    // Write your code here:
    int num = 20;
    printf("Initial value: %d \n", num);
    printf("After += 10: %d\n", num+=10);
    printf("After -= 5: %d\n", num-=5);
    printf("After *= 3: %d\n", num*=3);
    printf("\n after /= 2: %d \n", num/=2);
    printf("\n after %%= 7: %d \n", num%=7);
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 3: Increment and Decrement
    printf("Task 3: Increment and Decrement\n");
    printf("-------------------------------\n");
    
    // TODO: Declare counter = 10
    // Show the difference between pre and post increment/decrement
    // Print: initial value, ++counter, counter++, --counter, counter--
    // Write your code here:
    int counter = 10;
    printf("Initial value: %d\n", counter);
    printf("Pre-increment (++counter): %d\n", ++counter);
    printf("Post-increment (counter++): %d\n", counter++);
    printf("After post-increment: %d\n", counter);
    printf("Pre-decrement (--counter): %d\n", --counter);
    printf("Post-decrement (counter--): %d\n", counter--);
    printf("Final value: %d\n", counter);
    printf("Final value after all operations: %d\n", counter);

    
    
    
    
    
    
    printf("\n");
    
    // Task 4: Comparison Operations
    printf("Task 4: Comparison Operations\n");
    printf("-----------------------------\n");
    
    // TODO: Compare two numbers: a = 15, b = 20
    // Test all comparison operators (==, !=, <, >, <=, >=)
    // Print results as "15 < 20 is true" or "15 > 20 is false"
    // Write your code here:

    int a = 15;
    int b = 20;
    printf("%d == %d is %s\n", a, b, (a == b) ? "true" : "false");
    printf("%d != %d is %s\n", a, b, (a != b) ? "true" : "false");
    printf("%d < %d is %s\n", a, b, (a < b) ? "true" : "false");
    printf("%d > %d is %s\n", a, b, (a > b) ? "true" : "false");
    printf("%d <= %d is %s\n", a, b, (a <= b) ? "true" : "false");
    printf("%d >= %d is %s\n", a, b, (a >= b) ? "true" : "false");

    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 5: Logical Operators
    printf("Task 5: Logical Operators\n");
    printf("-------------------------\n");
    
    // TODO: Create boolean variables: canVote = true, hasID = false
    // Test logical operations: &&, ||, !
    // Example: "Can vote AND has ID: false"
    // Write your code here:
    
    
    
    
    
    printf("\n");
    
    // Task 6: Real-world Application
    printf("Task 6: Student Grade System\n");
    printf("---------------------------\n");
    
    // TODO: Create a grade evaluation system
    // Declare: score = 85, attendance = 90, hasProject = true
    // Calculate final eligibility using logical operators:
    // - Pass if score >= 60 AND attendance >= 75
    // - Honors if score >= 85 AND attendance >= 85 AND hasProject == true
    // Write your code here:
    
    
    
    
    
    
    printf("\n");
    
    // Task 7: Operator Precedence Challenge
    printf("Task 7: Operator Precedence\n");
    printf("---------------------------\n");
    
    // TODO: Calculate the following expressions and predict results:
    // Expression 1: 5 + 3 * 2
    // Expression 2: (5 + 3) * 2  
    // Expression 3: 10 > 5 && 3 < 7
    // Expression 4: 2 + 3 > 4 || 1 == 1
    // Print both the expression and result
    // Write your code here:
    
    
    
    
    
    printf("\n");
    
    // Task 8: Interactive Calculator
    printf("Task 8: Build a Simple Calculator\n");
    printf("---------------------------------\n");
    
    // TODO: Ask user for two numbers and an operation
    // Perform the calculation and display result
    // Handle basic operations: +, -, *, /, %
    // Write your code here:
    
    
    
    
    
    
    
    
    printf("\nExercise completed!\n");
    return 0;
}

/*
 * EXPECTED OUTPUTS (for reference):
 * 
 * Task 1: Basic Arithmetic Operations
 * 25 + 7 = 32
 * 25 - 7 = 18
 * 25 * 7 = 175
 * 25 / 7 = 3
 * 25 % 7 = 4
 * 
 * Task 2: Assignment Operators
 * Initial value: 20
 * After += 10: 30
 * After -= 5: 25
 * After *= 3: 75
 * After /= 2: 37
 * After %= 7: 2
 * 
 * Task 7: Operator Precedence
 * 5 + 3 * 2 = 11 (not 16)
 * (5 + 3) * 2 = 16
 * 10 > 5 && 3 < 7 = 1 (true)
 * 2 + 3 > 4 || 1 == 1 = 1 (true)
 * 
 * COMPILATION:
 * gcc 04-exercise.c -o 04-exercise
 * 
 * LEARNING OBJECTIVES:
 * - Practice all types of operators in C
 * - Understand operator precedence
 * - Apply operators in real-world scenarios
 * - Build confidence with C syntax
 */
