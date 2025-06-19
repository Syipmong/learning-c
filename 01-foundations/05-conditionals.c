/*
 * Conditional Statements in C
 * This program demonstrates if, else if, else, and switch statements
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Simple if statement
    printf("=== Simple If Statement ===\n");
    int temperature = 25;
    
    if (temperature > 30) {
        printf("It's hot outside! (Temperature: %d°C)\n", temperature);
    }
    
    if (temperature <= 30) {
        printf("It's not too hot. (Temperature: %d°C)\n", temperature);
    }
    
    // If-else statement
    printf("\n=== If-Else Statement ===\n");
    int age = 20;
    
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }
    
    // If-else if-else chain
    printf("\n=== If-Else If-Else Chain ===\n");
    int score = 85;
    
    if (score >= 90) {
        printf("Grade: A (Excellent!)\n");
    } else if (score >= 80) {
        printf("Grade: B (Good!)\n");
    } else if (score >= 70) {
        printf("Grade: C (Average)\n");
    } else if (score >= 60) {
        printf("Grade: D (Below Average)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
    
    // Nested if statements
    printf("\n=== Nested If Statements ===\n");
    bool hasTicket = true;
    int ticketAge = 17;
    
    if (hasTicket) {
        printf("You have a ticket.\n");
        if (ticketAge >= 18) {
            printf("You can watch the R-rated movie.\n");
        } else {
            printf("You can only watch PG-13 movies.\n");
        }
    } else {
        printf("You need to buy a ticket first.\n");
    }
    
    // Logical operators in conditions
    printf("\n=== Logical Operators in Conditions ===\n");
    int income = 50000;
    int creditScore = 720;
    
    if (income >= 30000 && creditScore >= 700) {
        printf("Loan approved!\n");
    } else if (income >= 30000 || creditScore >= 750) {
        printf("Loan under review.\n");
    } else {
        printf("Loan denied.\n");
    }
    
    // Conditional (ternary) operator
    printf("\n=== Ternary Operator ===\n");
    int num = 15;
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    
    // Multiple conditions
    char letter = 'A';
    bool isVowel = (letter == 'A' || letter == 'E' || letter == 'I' || 
                   letter == 'O' || letter == 'U' ||
                   letter == 'a' || letter == 'e' || letter == 'i' || 
                   letter == 'o' || letter == 'u');
    printf("'%c' is %s vowel\n", letter, isVowel ? "a" : "not a");
    
    // Switch statement
    printf("\n=== Switch Statement ===\n");
    int day = 3;
    
    switch (day) {
        case 1:
            printf("Monday - Start of work week\n");
            break;
        case 2:
            printf("Tuesday - Getting into the groove\n");
            break;
        case 3:
            printf("Wednesday - Hump day!\n");
            break;
        case 4:
            printf("Thursday - Almost there\n");
            break;
        case 5:
            printf("Friday - TGIF!\n");
            break;
        case 6:
        case 7:
            printf("Weekend - Time to relax!\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
    
    // Switch with characters
    printf("\n=== Switch with Characters ===\n");
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("You can do better.\n");
            break;
        case 'D':
            printf("Need improvement.\n");
            break;
        case 'F':
            printf("Please see instructor.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }
    
    // Practical example: Simple menu system
    printf("\n=== Menu System Example ===\n");
    int choice = 2;
    printf("Menu Options:\n");
    printf("1. View Profile\n");
    printf("2. Edit Profile\n");
    printf("3. Settings\n");
    printf("4. Logout\n");
    printf("Your choice: %d\n", choice);
    
    switch (choice) {
        case 1:
            printf("Displaying profile...\n");
            break;
        case 2:
            printf("Opening profile editor...\n");
            break;
        case 3:
            printf("Opening settings...\n");
            break;
        case 4:
            printf("Logging out...\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
    }
    
    return 0;
}

/*
 * KEY CONCEPTS:
 * 1. Use if-else for boolean conditions
 * 2. Use else if for multiple exclusive conditions
 * 3. Use switch for discrete values (int, char)
 * 4. Always include break in switch cases
 * 5. Use default case for error handling
 * 6. Ternary operator for simple conditions
 * 
 * EXERCISE:
 * 1. Create a program that determines if a year is a leap year
 * 2. Make a simple calculator using switch statement
 * 3. Create a program that categorizes BMI (underweight, normal, overweight, obese)
 * 4. Write a program that converts numerical grades to letter grades
 * 5. Create a traffic light simulator using switch statement
 */
