/*
 * Operators in C
 * This program demonstrates different types of operators
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Variables for demonstration
    int a = 10, b = 3;
    float x = 5.5, y = 2.2;
    
    printf("=== Arithmetic Operators ===\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: a + b = %d\n", a + b);
    printf("Subtraction: a - b = %d\n", a - b);
    printf("Multiplication: a * b = %d\n", a * b);
    printf("Division: a / b = %d\n", a / b);        // Integer division
    printf("Modulo: a %% b = %d\n", a % b);         // Remainder
    
    printf("\nFloat division: %.2f / %.2f = %.2f\n", x, y, x / y);
    
    // Assignment operators
    printf("\n=== Assignment Operators ===\n");
    int num = 10;
    printf("Initial value: %d\n", num);
    
    num += 5;   // num = num + 5
    printf("After +=5: %d\n", num);
    
    num -= 3;   // num = num - 3
    printf("After -=3: %d\n", num);
    
    num *= 2;   // num = num * 2
    printf("After *=2: %d\n", num);
    
    num /= 4;   // num = num / 4
    printf("After /=4: %d\n", num);
    
    num %= 3;   // num = num % 3
    printf("After %%=3: %d\n", num);
    
    // Increment and decrement operators
    printf("\n=== Increment/Decrement Operators ===\n");
    int count = 5;
    printf("Initial count: %d\n", count);
    printf("count++: %d (post-increment)\n", count++);  // Uses then increments
    printf("After post-increment: %d\n", count);
    printf("++count: %d (pre-increment)\n", ++count);   // Increments then uses
    printf("count--: %d (post-decrement)\n", count--);  // Uses then decrements
    printf("--count: %d (pre-decrement)\n", --count);   // Decrements then uses
    
    // Comparison operators
    printf("\n=== Comparison Operators ===\n");
    int p = 8, q = 12;
    printf("p = %d, q = %d\n", p, q);
    printf("p == q: %s\n", (p == q) ? "true" : "false");
    printf("p != q: %s\n", (p != q) ? "true" : "false");
    printf("p < q: %s\n", (p < q) ? "true" : "false");
    printf("p > q: %s\n", (p > q) ? "true" : "false");
    printf("p <= q: %s\n", (p <= q) ? "true" : "false");
    printf("p >= q: %s\n", (p >= q) ? "true" : "false");
    
    // Logical operators
    printf("\n=== Logical Operators ===\n");
    bool isTrue = true;
    bool isFalse = false;
    printf("isTrue = %s, isFalse = %s\n", 
           isTrue ? "true" : "false", isFalse ? "true" : "false");
    
    printf("isTrue && isFalse: %s\n", (isTrue && isFalse) ? "true" : "false");
    printf("isTrue || isFalse: %s\n", (isTrue || isFalse) ? "true" : "false");
    printf("!isTrue: %s\n", (!isTrue) ? "true" : "false");
    printf("!isFalse: %s\n", (!isFalse) ? "true" : "false");
    
    // Practical example: Age verification
    printf("\n=== Practical Example ===\n");
    int age = 20;
    bool hasLicense = true;
    bool canDrive = (age >= 18) && hasLicense;
    printf("Age: %d, Has license: %s\n", age, hasLicense ? "Yes" : "No");
    printf("Can drive: %s\n", canDrive ? "Yes" : "No");
    
    // Operator precedence example
    printf("\n=== Operator Precedence ===\n");
    int result1 = 2 + 3 * 4;        // Multiplication first
    int result2 = (2 + 3) * 4;      // Parentheses first
    printf("2 + 3 * 4 = %d\n", result1);
    printf("(2 + 3) * 4 = %d\n", result2);
    
    return 0;
}

/*
 * OPERATOR PRECEDENCE (High to Low):
 * 1. () [] -> .
 * 2. ! ~ ++ -- + - * & (unary)
 * 3. * / %
 * 4. + -
 * 5. < <= > >=
 * 6. == !=
 * 7. &&
 * 8. ||
 * 9. = += -= *= /= %=
 * 
 * EXERCISE:
 * 1. Create a calculator that performs all basic operations
 * 2. Write a program that checks if a year is a leap year
 * 3. Create a grade calculator (A: 90-100, B: 80-89, etc.)
 * 4. Make a program that determines if someone can vote (age >= 18)
 */
