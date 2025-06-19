/*
 * Loops in C
 * This program demonstrates for, while, and do-while loops
 */

#include <stdio.h>

int main() {
    // For loop - when you know the number of iterations
    printf("=== For Loop ===\n");
    printf("Counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // For loop - counting backwards
    printf("Countdown from 5 to 1:\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("Blast off!\n\n");
    
    // For loop - even numbers
    printf("Even numbers from 2 to 10:\n");
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // While loop - when condition is checked before execution
    printf("=== While Loop ===\n");
    int count = 1;
    printf("While loop counting to 5:\n");
    while (count <= 5) {
        printf("%d ", count);
        count++;
    }
    printf("\n\n");
    
    // While loop - input validation
    printf("Guess the number (1-10): ");
    int guess, secret = 7;
    scanf("%d", &guess);
    
    while (guess != secret) {
        if (guess < secret) {
            printf("Too low! Try again: ");
        } else {
            printf("Too high! Try again: ");
        }
        scanf("%d", &guess);
    }
    printf("Correct! The number was %d\n\n", secret);
    
    // Do-while loop - executes at least once
    printf("=== Do-While Loop ===\n");
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You selected Option 1\n");
                break;
            case 2:
                printf("You selected Option 2\n");
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    } while (choice != 3);
    
    // Nested loops
    printf("=== Nested Loops ===\n");
    printf("Multiplication table (5x5):\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
    printf("\n");
    
    // Pattern printing with nested loops
    printf("Star pattern:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Break and continue statements
    printf("=== Break and Continue ===\n");
    printf("Numbers 1-10, but skip 5 and stop at 8:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip this iteration
        }
        if (i == 9) {
            break;     // Exit the loop
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Finding prime numbers
    printf("Prime numbers from 2 to 20:\n");
    for (int num = 2; num <= 20; num++) {
        int isPrime = 1;  // Assume it's prime
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n\n");
    
    // Sum of numbers
    printf("=== Sum Calculation ===\n");
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("Sum of numbers 1 to 100: %d\n", sum);
    
    // Factorial calculation
    printf("\n=== Factorial Calculation ===\n");
    int n = 5;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%d! = %d\n", n, factorial);
    
    // Fibonacci sequence
    printf("\n=== Fibonacci Sequence ===\n");
    int first = 0, second = 1, next;
    printf("First 10 Fibonacci numbers:\n");
    printf("%d %d ", first, second);
    
    for (int i = 3; i <= 10; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
    
    return 0;
}

/*
 * LOOP COMPARISON:
 * 
 * FOR LOOP:
 * - Best when you know the number of iterations
 * - Initialization, condition, and increment in one line
 * - Most common for counting
 * 
 * WHILE LOOP:
 * - Best when condition needs to be checked before each iteration
 * - Good for input validation, reading files
 * - May not execute at all if condition is false initially
 * 
 * DO-WHILE LOOP:
 * - Executes at least once
 * - Good for menus, input validation where you need at least one attempt
 * - Condition checked after execution
 * 
 * BREAK vs CONTINUE:
 * - break: Exits the loop completely
 * - continue: Skips current iteration, goes to next iteration
 * 
 * EXERCISE:
 * 1. Print all even numbers from 1 to 50
 * 2. Create a program that finds the largest number entered by user (enter -1 to stop)
 * 3. Print the multiplication table for any number
 * 4. Create a number guessing game with limited attempts
 * 5. Calculate the sum of digits of a number using loops
 * 6. Print a right triangle pattern with numbers
 */
