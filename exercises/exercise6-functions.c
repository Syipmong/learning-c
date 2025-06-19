/*
 * Exercise 6: Functions Mastery
 * 
 * This exercise helps you practice:
 * - Function declaration and definition
 * - Function parameters and return values
 * - Function prototypes
 * - Recursive functions
 * - Scope and lifetime of variables
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>
#include <math.h>

// Function prototypes (declarations)
int add(int a, int b);
float calculateCircleArea(float radius);
void printPattern(int rows);
int factorial(int n);
int fibonacci(int n);
void swapValues(int *a, int *b);
int isPrime(int number);
float power(float base, int exponent);

int main() {
    printf("=== Exercise 6: Functions Practice ===\n\n");
    
    // Task 1: Basic function usage
    printf("Task 1: Basic Functions\n");
    
    int x = 15, y = 25;
    int sum = add(x, y);
    printf("add(%d, %d) = %d\n", x, y, sum);
    
    float radius = 5.0;
    float area = calculateCircleArea(radius);
    printf("Area of circle with radius %.1f = %.2f\n", radius, area);
    
    printf("\n");
    
    // Task 2: Void functions
    printf("Task 2: Void Functions\n");
    printPattern(5);
    printf("\n");
    
    // Task 3: Recursive functions
    printf("Task 3: Recursive Functions\n");
    
    int n = 5;
    printf("Factorial of %d = %d\n", n, factorial(n));
    
    printf("Fibonacci sequence (first 10 terms): ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");
    
    // Task 4: Functions with pointers
    printf("Task 4: Functions with Pointers\n");
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapValues(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    printf("\n");
    
    // Task 5: Prime number checker
    printf("Task 5: Prime Number Checker\n");
    for (int i = 2; i <= 20; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("are prime numbers from 2 to 20\n\n");
    
    // Task 6: Power function
    printf("Task 6: Power Function\n");
    float base = 2.0;
    int exp = 8;
    printf("%.1f^%d = %.2f\n", base, exp, power(base, exp));
    printf("\n");
    
    // Task 7: Interactive calculator using functions
    printf("Task 7: Function-based Calculator\n");
    // This would be implemented with the functions below
    
    return 0;
}

// Task 1: Simple addition function
int add(int a, int b) {
    return a + b;
}

// Task 1: Calculate circle area
float calculateCircleArea(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}

// Task 2: Print a pattern (void function)
void printPattern(int rows) {
    printf("Triangle pattern with %d rows:\n", rows);
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
}

// Task 3: Recursive factorial function
int factorial(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

// Task 3: Recursive Fibonacci function
int fibonacci(int n) {
    // Base cases
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Task 4: Swap function using pointers
void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Task 5: Check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Not prime
    }
    if (number <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0; // Divisible by 2 or 3
    }
    
    // Check for divisors from 5 onwards
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

// Task 6: Power function (base^exponent)
float power(float base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    
    float result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

/*
 * Additional Practice Tasks:
 * 
 * TODO: Implement these functions and test them:
 * 
 * 1. int maximum(int a, int b, int c) - returns the largest of three numbers
 * 2. float average(float arr[], int size) - calculates average of array
 * 3. void reverseString(char str[]) - reverses a string in place
 * 4. int gcd(int a, int b) - finds greatest common divisor (recursive)
 * 5. int countDigits(int number) - counts digits in a number
 * 6. float celsiusToFahrenheit(float celsius) - temperature conversion
 * 7. int isLeapYear(int year) - checks if a year is a leap year
 * 8. void printMultiplicationTable(int n) - prints multiplication table
 * 9. double compound_interest(double principal, double rate, int time)
 * 10. int binary_to_decimal(long long binary) - converts binary to decimal
 */

/*
 * Advanced Function Challenges:
 * 
 * 1. Create a function that sorts an array of integers
 * 2. Implement a function to find the nth prime number
 * 3. Write a function that checks if a string is a palindrome
 * 4. Create a recursive function to solve Tower of Hanoi
 * 5. Implement functions for basic matrix operations (add, multiply)
 * 6. Write a function that generates Pascal's triangle
 * 7. Create a function that validates email format
 * 8. Implement a simple hash function for strings
 * 9. Write a function that finds all factors of a number
 * 10. Create a function that converts decimal to any base (2-16)
 * 
 * Practice Questions:
 * 
 * 1. What's the difference between function declaration and definition?
 * 2. When should you use recursive functions vs iterative functions?
 * 3. How does variable scope work in functions?
 * 4. What happens to local variables when a function returns?
 * 5. Why do we need function prototypes?
 * 6. How do you pass arrays to functions?
 * 7. What's the difference between pass by value and pass by reference?
 * 
 * Compilation:
 * gcc exercise6-functions.c -o exercise6-functions -lm
 * (Note: -lm links the math library)
 * 
 * Learning Objectives:
 * - Master function creation and usage
 * - Understand function parameters and return values
 * - Learn recursive programming
 * - Practice modular programming principles
 * - Understand variable scope and lifetime
 */
