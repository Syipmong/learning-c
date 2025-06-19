/*
 * Variables and Data Types in C
 * This program demonstrates different data types and variable declarations
 */

#include <stdio.h>
#include <stdbool.h>  // For boolean type

int main() {
    // Integer types
    int age = 25;
    short height = 175;      // short int
    long population = 1000000L;
    long long bigNumber = 9223372036854775807LL;
    
    // Floating point types
    float price = 19.99f;
    double pi = 3.14159265359;
    
    // Character type
    char grade = 'A';
    char initial = 'J';
    
    // Boolean type (requires stdbool.h)
    bool isStudent = true;
    bool isWorking = false;
    
    // Unsigned types (only positive numbers)
    unsigned int score = 95;
    
    // Printing different data types
    printf("=== Variable Values ===\n");
    printf("Age: %d years\n", age);
    printf("Height: %d cm\n", height);
    printf("Population: %ld\n", population);
    printf("Big number: %lld\n", bigNumber);
    printf("Price: $%.2f\n", price);
    printf("Pi: %.10f\n", pi);
    printf("Grade: %c\n", grade);
    printf("Initial: %c\n", initial);
    printf("Is student: %s\n", isStudent ? "Yes" : "No");
    printf("Is working: %s\n", isWorking ? "Yes" : "No");
    printf("Score: %u\n", score);
    
    // Size of data types
    printf("\n=== Size of Data Types ===\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of bool: %zu bytes\n", sizeof(bool));
    
    // Variable modifications
    printf("\n=== Variable Modifications ===\n");
    age = age + 1;  // or age++;
    printf("Next year age: %d\n", age);
    
    price = price * 1.1;  // 10% increase
    printf("New price: $%.2f\n", price);
    
    return 0;
}

/*
 * EXERCISE:
 * 1. Add variables for your own information (name initial, favorite number, etc.)
 * 2. Try changing the values and see the output
 * 3. Experiment with different format specifiers (%d, %f, %c, etc.)
 * 4. What happens if you use wrong format specifiers?
 */
