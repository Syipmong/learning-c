/*
 * Exercise 3: Operators Practice
 * 
 * This exercise helps you practice all types of operators in C:
 * - Arithmetic operators
 * - Comparison operators
 * - Logical operators
 * - Assignment operators
 * - Increment/decrement operators
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>

int main() {
    printf("=== Exercise 3: Operators Practice ===\n\n");
    
    // Task 1: Arithmetic Operations
    printf("Task 1: Basic Arithmetic\n");
    int a = 15, b = 4;
    
    // TODO: Calculate and print the following operations
    // Print in format: "15 + 4 = 19"
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    
    printf("\n");
    
    // Task 2: Floating point arithmetic
    printf("Task 2: Floating Point Division\n");
    float x = 15.0, y = 4.0;
    // TODO: Show the difference between integer and float division
    printf("Integer division: %d / %d = %d\n", (int)x, (int)y, (int)x / (int)y);
    printf("Float division: %.1f / %.1f = %.2f\n", x, y, x / y);
    
    printf("\n");
    
    // Task 3: Comparison Operators
    printf("Task 3: Comparison Operations\n");
    int num1 = 10, num2 = 20;
    
    // TODO: Complete these comparison operations
    printf("%d == %d is %s\n", num1, num2, (num1 == num2) ? "true" : "false");
    printf("%d != %d is %s\n", num1, num2, (num1 != num2) ? "true" : "false");
    printf("%d < %d is %s\n", num1, num2, (num1 < num2) ? "true" : "false");
    printf("%d > %d is %s\n", num1, num2, (num1 > num2) ? "true" : "false");
    printf("%d <= %d is %s\n", num1, num2, (num1 <= num2) ? "true" : "false");
    printf("%d >= %d is %s\n", num1, num2, (num1 >= num2) ? "true" : "false");
    
    printf("\n");
    
    // Task 4: Logical Operators
    printf("Task 4: Logical Operations\n");
    int p = 1, q = 0; // 1 = true, 0 = false
    
    // TODO: Complete these logical operations
    printf("p && q = %d\n", p && q);
    printf("p || q = %d\n", p || q);
    printf("!p = %d\n", !p);
    printf("!q = %d\n", !q);
    
    printf("\n");
    
    // Task 5: Increment and Decrement
    printf("Task 5: Increment/Decrement\n");
    int counter = 5;
    
    printf("Initial value: %d\n", counter);
    printf("Pre-increment (++counter): %d\n", ++counter);
    printf("Post-increment (counter++): %d\n", counter++);
    printf("After post-increment: %d\n", counter);
    printf("Pre-decrement (--counter): %d\n", --counter);
    printf("Post-decrement (counter--): %d\n", counter--);
    printf("Final value: %d\n", counter);
    
    printf("\n");
    
    // Task 6: Assignment Operators
    printf("Task 6: Assignment Operators\n");
    int value = 10;
    
    printf("Initial value: %d\n", value);
    value += 5;
    printf("After += 5: %d\n", value);
    value -= 3;
    printf("After -= 3: %d\n", value);
    value *= 2;
    printf("After *= 2: %d\n", value);
    value /= 4;
    printf("After /= 4: %d\n", value);
    value %= 3;
    printf("After %%= 3: %d\n", value);
    
    printf("\n");
    
    // Task 7: Challenge Problem
    printf("Task 7: Challenge - Temperature Converter\n");
    float celsius;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // TODO: Convert celsius to fahrenheit using the formula: F = (C * 9/5) + 32
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    printf("%.1f°C = %.1f°F\n", celsius, fahrenheit);
    
    // TODO: Also convert to Kelvin: K = C + 273.15
    float kelvin = celsius + 273.15;
    printf("%.1f°C = %.2fK\n", celsius, kelvin);
    
    printf("\n");
    
    // Task 8: Operator Precedence
    printf("Task 8: Operator Precedence\n");
    int result;
    
    // TODO: Predict and verify these results
    result = 2 + 3 * 4;
    printf("2 + 3 * 4 = %d\n", result);
    
    result = (2 + 3) * 4;
    printf("(2 + 3) * 4 = %d\n", result);
    
    result = 10 / 2 * 3;
    printf("10 / 2 * 3 = %d\n", result);
    
    result = 10 / (2 * 3);
    printf("10 / (2 * 3) = %d\n", result);
    
    return 0;
}

/*
 * Practice Questions:
 * 
 * 1. Why does 15 / 4 give 3 instead of 3.75 when using integers?
 * 2. What's the difference between ++i and i++?
 * 3. What happens if you use % with floating point numbers?
 * 4. How does operator precedence affect: 2 + 3 * 4?
 * 5. Try modifying the values and see how the results change.
 * 
 * Compilation:
 * gcc exercise3-operators.c -o exercise3-operators
 * 
 * Learning Objectives:
 * - Understand all types of operators in C
 * - Practice operator precedence rules
 * - Learn the difference between integer and floating point arithmetic
 * - Master increment/decrement operators
 * - Apply operators in practical problems
 */
