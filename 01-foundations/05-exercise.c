/*
 * Exercise: Conditionals and Decision Making
 * 
 * This is a hands-on exercise for the 05-conditionals.c lesson.
 * Complete the tasks below to practice if-else statements and decision making.
 * 
 * Instructions:
 * 1. Read each task carefully
 * 2. Write the code in the designated areas
 * 3. Test your solutions by compiling and running the program
 * 4. Try different inputs to test all code paths
 */

#include <stdio.h>

int main() {
    printf("=== Conditionals Exercise ===\n\n");
    
    // Task 1: Simple If-Else
    printf("Task 1: Age Category\n");
    printf("--------------------\n");
    
    // TODO: Ask user for their age
    // Determine and print their category:
    // - Child (0-12)
    // - Teenager (13-19)
    // - Adult (20-64)
    // - Senior (65+)
    // Write your code here:
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 2: Grade Calculator
    printf("Task 2: Grade Calculator\n");
    printf("------------------------\n");
    
    // TODO: Ask user for a test score (0-100)
    // Assign letter grade:
    // A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60
    // Also check for invalid scores (negative or > 100)
    // Write your code here:
    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 3: Number Comparison
    printf("Task 3: Number Comparison\n");
    printf("-------------------------\n");
    
    // TODO: Ask user for two numbers
    // Compare them and print:
    // - Which number is larger
    // - If they are equal
    // - The difference between them
    // Write your code here:
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 4: Even or Odd
    printf("Task 4: Even or Odd Checker\n");
    printf("---------------------------\n");
    
    // TODO: Ask user for a number
    // Check if it's even or odd
    // Also check if it's positive, negative, or zero
    // Write your code here:
    
    
    
    
    
    
    printf("\n");
    
    // Task 5: Simple Calculator with Conditionals
    printf("Task 5: Calculator with Menu\n");
    printf("----------------------------\n");
    
    // TODO: Create a calculator with menu:
    // Ask user to choose operation (1-4):
    // 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division
    // Ask for two numbers
    // Perform the operation and display result
    // Handle division by zero
    // Write your code here:
    
    
    
    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 6: Leap Year Checker
    printf("Task 6: Leap Year Checker\n");
    printf("-------------------------\n");
    
    // TODO: Ask user for a year
    // Determine if it's a leap year using these rules:
    // - Divisible by 4 AND (not divisible by 100 OR divisible by 400)
    // Examples: 2000 (leap), 1900 (not leap), 2004 (leap)
    // Write your code here:
    
    
    
    
    
    
    printf("\n");
    
    // Task 7: Triangle Classifier
    printf("Task 7: Triangle Classifier\n");
    printf("---------------------------\n");
    
    // TODO: Ask user for three sides of a triangle
    // Determine:
    // 1. If it's a valid triangle (sum of any two sides > third side)
    // 2. If valid, classify as: Equilateral, Isosceles, or Scalene
    // Write your code here:
    
    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 8: BMI Calculator with Categories
    printf("Task 8: BMI Calculator\n");
    printf("----------------------\n");
    
    // TODO: Ask user for height (in meters) and weight (in kg)
    // Calculate BMI = weight / (height * height)
    // Categorize:
    // - Underweight: BMI < 18.5
    // - Normal: 18.5 <= BMI < 25
    // - Overweight: 25 <= BMI < 30
    // - Obese: BMI >= 30
    // Write your code here:
    
    
    
    
    
    
    
    
    printf("\n");
    
    // Task 9: Nested Conditionals Challenge
    printf("Task 9: Scholarship Eligibility\n");
    printf("-------------------------------\n");
    
    // TODO: Determine scholarship eligibility based on:
    // - GPA (must be >= 3.5)
    // - SAT score (must be >= 1200)
    // - Extracurricular activities (yes/no)
    // - Financial need (yes/no)
    // 
    // Scholarship types:
    // - Academic: GPA >= 3.8 AND SAT >= 1400
    // - Merit: GPA >= 3.5 AND SAT >= 1200 AND activities
    // - Need-based: GPA >= 3.0 AND financial need
    // - No scholarship: doesn't meet any criteria
    // Write your code here:
    
    
    
    
    
    
    
    
    
    
    
    printf("\nExercise completed!\n");
    return 0;
}

/*
 * SAMPLE INTERACTIONS (for reference):
 * 
 * Task 1: Age Category
 * Enter your age: 17
 * You are a teenager.
 * 
 * Task 2: Grade Calculator
 * Enter your test score (0-100): 87
 * Your grade is: B
 * 
 * Task 5: Calculator with Menu
 * Choose operation:
 * 1. Addition
 * 2. Subtraction
 * 3. Multiplication
 * 4. Division
 * Your choice: 1
 * Enter two numbers: 15 7
 * 15 + 7 = 22
 * 
 * Task 6: Leap Year Checker
 * Enter a year: 2024
 * 2024 is a leap year.
 * 
 * TESTING TIPS:
 * - Test boundary conditions (e.g., exactly 18.5 for BMI)
 * - Test invalid inputs (negative numbers, division by zero)
 * - Test all possible paths through your conditionals
 * - Use different combinations for complex conditions
 * 
 * COMPILATION:
 * gcc 05-exercise.c -o 05-exercise
 * 
 * LEARNING OBJECTIVES:
 * - Master if-else statement syntax
 * - Practice nested conditionals
 * - Learn logical operators in conditions
 * - Handle edge cases and invalid input
 * - Build decision-making algorithms
 */
