/*
 * Exercise 5: Loops and Iteration
 * 
 * This exercise helps you practice:
 * - for loops
 * - while loops
 * - do-while loops
 * - Nested loops
 * - Loop control (break, continue)
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>

int main() {
    printf("=== Exercise 5: Loops Practice ===\n\n");
    
    // Task 1: Basic for loop - Counting
    printf("Task 1: Basic Counting\n");
    
    // TODO: Count from 1 to 10
    printf("Counting from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // TODO: Count backwards from 10 to 1
    printf("Counting backwards from 10 to 1:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    
    // TODO: Count by 2s from 0 to 20
    printf("Even numbers from 0 to 20:\n");
    for (int i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Task 2: While loop - User input validation
    printf("Task 2: Input Validation with While Loop\n");
    int number;
    
    // TODO: Keep asking for a number between 1 and 100
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &number);
    
    while (number < 1 || number > 100) {
        printf("Invalid! Please enter a number between 1 and 100: ");
        scanf("%d", &number);
    }
    
    printf("Great! You entered: %d\n\n", number);
    
    // Task 3: Do-while loop - Menu system
    printf("Task 3: Interactive Menu\n");
    int choice;
    
    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add two numbers\n");
        printf("2. Multiply two numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                float a, b;
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("%.2f + %.2f = %.2f\n", a, b, a + b);
                break;
            }
            case 2: {
                float a, b;
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("%.2f * %.2f = %.2f\n", a, b, a * b);
                break;
            }
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);
    
    printf("\n");
    
    // Task 4: Nested loops - Patterns
    printf("Task 4: Pattern Printing\n");
    
    // TODO: Print a right triangle of stars
    printf("Right triangle pattern:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // TODO: Print a multiplication table
    printf("Multiplication table (1-5):\n");
    printf("   ");
    for (int i = 1; i <= 5; i++) {
        printf("%4d", i);
    }
    printf("\n");
    
    for (int i = 1; i <= 5; i++) {
        printf("%2d ", i);
        for (int j = 1; j <= 5; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    
    printf("\n");
    
    // Task 5: Mathematical calculations with loops
    printf("Task 5: Mathematical Calculations\n");
    
    // TODO: Calculate factorial
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%d! = %lld\n", n, factorial);
    }
    
    // TODO: Calculate sum of numbers
    printf("Enter a number to calculate sum from 1 to n: ");
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum from 1 to %d = %d\n", n, sum);
    
    // TODO: Find Fibonacci sequence
    printf("Enter number of Fibonacci terms to display: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else if (n == 1) {
        printf("Fibonacci sequence: 0\n");
    } else {
        printf("Fibonacci sequence: ");
        int first = 0, second = 1;
        printf("%d %d ", first, second);
        
        for (int i = 3; i <= n; i++) {
            int next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
    
    printf("\n");
    
    // Task 6: Loop control - break and continue
    printf("Task 6: Loop Control (break and continue)\n");
    
    // TODO: Find prime numbers using break and continue
    printf("Prime numbers from 2 to 50:\n");
    for (int num = 2; num <= 50; num++) {
        int is_prime = 1; // Assume it's prime
        
        // Check if num is divisible by any number from 2 to num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0; // Not prime
                break; // No need to check further
            }
        }
        
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n\n");
    
    // TODO: Skip even numbers using continue
    printf("Odd numbers from 1 to 20:\n");
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Task 7: Advanced pattern - Diamond shape
    printf("Task 7: Diamond Pattern\n");
    int rows = 5;
    
    // Upper half of diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower half of diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // Task 8: Challenge - Number Guessing Game
    printf("Task 8: Number Guessing Game\n");
    int secret_number = 42; // In a real game, this would be random
    int guess, attempts = 0;
    int max_attempts = 5;
    
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d attempts to guess it!\n", max_attempts);
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess == secret_number) {
            printf("Congratulations! You guessed it in %d attempts!\n", attempts);
            break;
        } else if (guess < secret_number) {
            printf("Too low! ");
        } else {
            printf("Too high! ");
        }
        
        printf("Attempts remaining: %d\n", max_attempts - attempts);
        
    } while (attempts < max_attempts);
    
    if (guess != secret_number) {
        printf("Sorry! The number was %d. Better luck next time!\n", secret_number);
    }
    
    return 0;
}

/*
 * Practice Questions:
 * 
 * 1. When would you use a for loop vs a while loop?
 * 2. What's the difference between while and do-while loops?
 * 3. How do break and continue statements work?
 * 4. What happens if you forget to increment the counter in a while loop?
 * 5. How do nested loops work? What's the time complexity?
 * 
 * Challenges to try:
 * 1. Create a program that draws different geometric patterns
 * 2. Implement a simple calculator that keeps running until user quits
 * 3. Write a program to find all perfect numbers up to 1000
 * 4. Create a password strength checker with multiple criteria
 * 5. Build a text-based tic-tac-toe game
 * 
 * Compilation:
 * gcc exercise5-loops.c -o exercise5-loops
 * 
 * Learning Objectives:
 * - Master all types of loops in C
 * - Learn when to use each type of loop
 * - Practice nested loops and patterns
 * - Understand loop control statements
 * - Build interactive programs with loops
 */
