/*
 * Exercise 4: Conditionals and Decision Making
 * 
 * This exercise helps you practice:
 * - if, else if, else statements
 * - switch statements
 * - Nested conditionals
 * - Logical conditions
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>

int main() {
    printf("=== Exercise 4: Conditionals Practice ===\n\n");
    
    // Task 1: Basic if-else
    printf("Task 1: Number Classification\n");
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // TODO: Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is positive\n", number);
    } else if (number < 0) {
        printf("%d is negative\n", number);
    } else {
        printf("%d is zero\n", number);
    }
    
    // TODO: Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
    
    printf("\n");
    
    // Task 2: Grade Calculator
    printf("Task 2: Grade Calculator\n");
    int score;
    
    printf("Enter your test score (0-100): ");
    scanf("%d", &score);
    
    // TODO: Assign letter grade based on score
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    printf("Score: %d, Grade: %c\n", score, grade);
    
    // TODO: Add validation for invalid scores
    if (score < 0 || score > 100) {
        printf("Warning: Invalid score! Scores should be between 0 and 100.\n");
    }
    
    printf("\n");
    
    // Task 3: Switch Statement - Menu System
    printf("Task 3: Calculator Menu\n");
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1-4): ");
    
    int choice;
    scanf("%d", &choice);
    
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    // TODO: Complete the switch statement
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    printf("\n");
    
    // Task 4: Nested Conditionals - Age Group Classification
    printf("Task 4: Age Group Classification\n");
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // TODO: Classify age into different groups with specific subcategories
    if (age >= 0 && age <= 120) { // Valid age range
        if (age < 13) {
            printf("You are a child.\n");
            if (age < 3) {
                printf("Specifically: Toddler\n");
            } else if (age < 6) {
                printf("Specifically: Preschooler\n");
            } else {
                printf("Specifically: School-age child\n");
            }
        } else if (age < 20) {
            printf("You are a teenager.\n");
            if (age < 16) {
                printf("Specifically: Early teen\n");
            } else {
                printf("Specifically: Late teen\n");
            }
        } else if (age < 65) {
            printf("You are an adult.\n");
            if (age < 30) {
                printf("Specifically: Young adult\n");
            } else if (age < 50) {
                printf("Specifically: Middle-aged adult\n");
            } else {
                printf("Specifically: Older adult\n");
            }
        } else {
            printf("You are a senior citizen.\n");
            if (age >= 80) {
                printf("Specifically: Octogenarian or older\n");
            }
        }
    } else {
        printf("Invalid age entered!\n");
    }
    
    printf("\n");
    
    // Task 5: Complex Logical Conditions
    printf("Task 5: Weather Activity Recommender\n");
    int temperature, humidity, wind_speed;
    char is_raining;
    
    printf("Enter temperature (°F): ");
    scanf("%d", &temperature);
    printf("Enter humidity (%%): ");
    scanf("%d", &humidity);
    printf("Enter wind speed (mph): ");
    scanf("%d", &wind_speed);
    printf("Is it raining? (y/n): ");
    scanf(" %c", &is_raining); // Note the space before %c
    
    // TODO: Recommend activities based on weather conditions
    printf("\nWeather Analysis:\n");
    
    // Check if it's good weather for outdoor activities
    if (is_raining == 'n' || is_raining == 'N') {
        if (temperature >= 65 && temperature <= 85 && humidity < 70 && wind_speed < 15) {
            printf("Perfect weather for outdoor activities!\n");
            printf("Recommended: Hiking, picnic, sports\n");
        } else if (temperature >= 50 && temperature < 90 && wind_speed < 25) {
            printf("Good weather for some outdoor activities.\n");
            if (temperature < 65) {
                printf("A bit cool - bring a jacket!\n");
            }
            if (temperature > 85) {
                printf("Quite warm - stay hydrated!\n");
            }
            if (humidity >= 70) {
                printf("High humidity - might feel muggy.\n");
            }
            printf("Recommended: Walking, light outdoor activities\n");
        } else {
            printf("Weather conditions are challenging for outdoor activities.\n");
            if (temperature < 32) {
                printf("Freezing temperature!\n");
            }
            if (temperature > 95) {
                printf("Very hot - stay indoors!\n");
            }
            if (wind_speed >= 25) {
                printf("Very windy conditions!\n");
            }
            printf("Recommended: Indoor activities\n");
        }
    } else {
        printf("It's raining - better stay indoors!\n");
        printf("Recommended: Reading, movies, indoor games\n");
    }
    
    printf("\n");
    
    // Task 6: Challenge - Rock Paper Scissors Logic
    printf("Task 6: Rock Paper Scissors Logic\n");
    int player1, player2;
    
    printf("Rock Paper Scissors!\n");
    printf("1 = Rock, 2 = Paper, 3 = Scissors\n");
    printf("Player 1 choice: ");
    scanf("%d", &player1);
    printf("Player 2 choice: ");
    scanf("%d", &player2);
    
    // TODO: Implement game logic
    if (player1 < 1 || player1 > 3 || player2 < 1 || player2 > 3) {
        printf("Invalid choice! Please use 1, 2, or 3.\n");
    } else {
        // Display choices
        char *choices[] = {"", "Rock", "Paper", "Scissors"};
        printf("Player 1: %s\n", choices[player1]);
        printf("Player 2: %s\n", choices[player2]);
        
        // Determine winner
        if (player1 == player2) {
            printf("It's a tie!\n");
        } else if ((player1 == 1 && player2 == 3) ||  // Rock beats Scissors
                   (player1 == 2 && player2 == 1) ||  // Paper beats Rock
                   (player1 == 3 && player2 == 2)) {  // Scissors beats Paper
            printf("Player 1 wins!\n");
        } else {
            printf("Player 2 wins!\n");
        }
    }
    
    return 0;
}

/*
 * Practice Questions:
 * 
 * 1. What's the difference between if-else and switch statements?
 * 2. When would you use nested conditionals vs multiple if statements?
 * 3. Why do we need 'break' statements in switch cases?
 * 4. How do logical operators (&&, ||, !) work in conditions?
 * 5. What happens if you forget the space before %c in scanf?
 * 
 * Challenges to try:
 * 1. Add input validation to all user inputs
 * 2. Create a traffic light system with timing
 * 3. Build a simple text-based adventure game
 * 4. Implement a BMI calculator with health recommendations
 * 
 * Compilation:
 * gcc exercise4-conditionals.c -o exercise4-conditionals
 * 
 * Learning Objectives:
 * - Master if-else and switch statements
 * - Learn to nest conditionals effectively
 * - Practice complex logical conditions
 * - Understand operator precedence in conditions
 * - Build decision-making programs
 */
