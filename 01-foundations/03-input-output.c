/*
 * Input and Output in C
 * This program demonstrates how to get input from user and display output
 */

#include <stdio.h>

int main() {
    // Variables to store user input
    char name[50];
    int age;
    float height;
    char grade;
    
    // Getting input from user
    printf("=== Personal Information Form ===\n");
    
    printf("Enter your name: ");
    // Note: scanf with %s stops at whitespace, use fgets for full names
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);  // Note the space before %c
    
    // Clearing the input buffer (important for clean input)
    while (getchar() != '\n');
    
    // Displaying the collected information
    printf("\n=== Your Information ===\n");
    printf("Name: %s\n", name);
    printf("Age: %d years old\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);
    
    // Some calculations with the input
    printf("\n=== Calculations ===\n");
    printf("In 10 years, you'll be %d years old\n", age + 10);
    printf("Your height in centimeters: %.1f cm\n", height * 100);
    
    // Different output formatting
    printf("\n=== Formatted Output Examples ===\n");
    printf("Age with leading zeros: %04d\n", age);
    printf("Height with 3 decimal places: %.3f\n", height);
    printf("Height in scientific notation: %e\n", height);
    
    // Getting a full line of text (including spaces)
    char fullName[100];
    printf("\nEnter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Full name: %s", fullName);  // fgets includes newline
    
    return 0;
}

/*
 * IMPORTANT NOTES:
 * 1. Always use & with scanf for variables (except arrays/strings)
 * 2. %s with scanf stops at whitespace, use fgets for full lines
 * 3. Add space before %c in scanf to consume any leftover whitespace
 * 4. sizeof() gives the size of an array
 * 
 * EXERCISE:
 * 1. Create a program that asks for two numbers and displays their sum
 * 2. Make a program that converts Celsius to Fahrenheit
 * 3. Create a simple form that collects student information (name, ID, GPA)
 * 4. Try different format specifiers and see their effects
 */
