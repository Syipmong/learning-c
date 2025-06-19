/*
 * Exercise 7: Arrays and Strings Mastery
 * 
 * This exercise helps you practice:
 * - Array declaration and initialization
 * - Array manipulation and algorithms
 * - String handling and string functions
 * - Multi-dimensional arrays
 * - Array and string utility functions
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("=== Exercise 7: Arrays and Strings Practice ===\n\n");
    
    // Task 1: Basic Array Operations
    printf("Task 1: Basic Array Operations\n");
    
    // TODO: Initialize and display an array
    int numbers[10] = {5, 2, 8, 1, 9, 3, 7, 4, 6, 0};
    printf("Original array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // TODO: Find maximum and minimum
    int max = numbers[0], min = numbers[0];
    int max_index = 0, min_index = 0;
    
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            max_index = i;
        }
        if (numbers[i] < min) {
            min = numbers[i];
            min_index = i;
        }
    }
    
    printf("Maximum: %d at index %d\n", max, max_index);
    printf("Minimum: %d at index %d\n", min, min_index);
    
    // TODO: Calculate sum and average
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    float average = (float)sum / 10;
    
    printf("Sum: %d, Average: %.2f\n", sum, average);
    printf("\n");
    
    // Task 2: Array Sorting (Bubble Sort)
    printf("Task 2: Array Sorting\n");
    
    // Create a copy to sort
    int sorted_array[10];
    for (int i = 0; i < 10; i++) {
        sorted_array[i] = numbers[i];
    }
    
    // TODO: Implement bubble sort
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (sorted_array[j] > sorted_array[j + 1]) {
                // Swap elements
                int temp = sorted_array[j];
                sorted_array[j] = sorted_array[j + 1];
                sorted_array[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sorted_array[i]);
    }
    printf("\n\n");
    
    // Task 3: Array Search
    printf("Task 3: Array Search\n");
    
    int search_value;
    printf("Enter a number to search for: ");
    scanf("%d", &search_value);
    
    // TODO: Linear search
    int found = 0, position = -1;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == search_value) {
            found = 1;
            position = i;
            break;
        }
    }
    
    if (found) {
        printf("%d found at index %d\n", search_value, position);
    } else {
        printf("%d not found in the array\n", search_value);
    }
    printf("\n");
    
    // Task 4: String Basics
    printf("Task 4: String Operations\n");
    
    char str1[100], str2[100], str3[200];
    
    printf("Enter first string: ");
    scanf(" %[^\n]", str1); // Read string with spaces
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    
    // TODO: String length
    printf("Length of '%s': %lu\n", str1, strlen(str1));
    printf("Length of '%s': %lu\n", str2, strlen(str2));
    
    // TODO: String copy
    strcpy(str3, str1);
    printf("Copied string: '%s'\n", str3);
    
    // TODO: String concatenation
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated string: '%s'\n", str3);
    
    // TODO: String comparison
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("The strings are equal\n");
    } else if (comparison < 0) {
        printf("'%s' comes before '%s' alphabetically\n", str1, str2);
    } else {
        printf("'%s' comes after '%s' alphabetically\n", str1, str2);
    }
    printf("\n");
    
    // Task 5: String Manipulation
    printf("Task 5: String Manipulation\n");
    
    char text[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", text);
    
    // TODO: Count characters, words, and vowels
    int char_count = 0, word_count = 0, vowel_count = 0;
    int in_word = 0;
    
    for (int i = 0; text[i] != '\0'; i++) {
        char_count++;
        
        // Count vowels
        char ch = tolower(text[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
        
        // Count words
        if (text[i] != ' ' && text[i] != '\t' && text[i] != '\n') {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    
    printf("Character count: %d\n", char_count);
    printf("Word count: %d\n", word_count);
    printf("Vowel count: %d\n", vowel_count);
    
    // TODO: Convert to uppercase and lowercase
    char upper_text[100], lower_text[100];
    strcpy(upper_text, text);
    strcpy(lower_text, text);
    
    for (int i = 0; upper_text[i] != '\0'; i++) {
        upper_text[i] = toupper(upper_text[i]);
        lower_text[i] = tolower(lower_text[i]);
    }
    
    printf("Uppercase: %s\n", upper_text);
    printf("Lowercase: %s\n", lower_text);
    printf("\n");
    
    // Task 6: Reverse String
    printf("Task 6: String Reversal\n");
    
    char to_reverse[100];
    printf("Enter a string to reverse: ");
    scanf(" %[^\n]", to_reverse);
    
    int len = strlen(to_reverse);
    char reversed[100];
    
    // TODO: Reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = to_reverse[len - 1 - i];
    }
    reversed[len] = '\0';
    
    printf("Original: %s\n", to_reverse);
    printf("Reversed: %s\n", reversed);
    
    // TODO: Check if palindrome
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (tolower(to_reverse[i]) != tolower(to_reverse[len - 1 - i])) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("'%s' is a palindrome!\n", to_reverse);
    } else {
        printf("'%s' is not a palindrome.\n", to_reverse);
    }
    printf("\n");
    
    // Task 7: 2D Arrays (Matrix Operations)
    printf("Task 7: 2D Arrays (Matrices)\n");
    
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];
    
    printf("Matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    // TODO: Matrix addition
    printf("Matrix Addition (Matrix1 + Matrix2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // Task 8: Student Grade Management System
    printf("Task 8: Student Grade Management\n");
    
    const int NUM_STUDENTS = 5;
    const int NUM_SUBJECTS = 3;
    
    char student_names[NUM_STUDENTS][50] = {
        "Alice", "Bob", "Charlie", "Diana", "Eve"
    };
    
    float grades[NUM_STUDENTS][NUM_SUBJECTS] = {
        {85.5, 90.0, 88.5},  // Alice
        {78.0, 82.5, 80.0},  // Bob
        {92.0, 89.5, 94.0},  // Charlie
        {88.0, 86.5, 90.5},  // Diana
        {75.5, 79.0, 77.5}   // Eve
    };
    
    char subjects[NUM_SUBJECTS][20] = {"Math", "Science", "English"};
    
    printf("Student Report Card:\n");
    printf("%-10s", "Student");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("%-10s", subjects[j]);
    }
    printf("%-10s\n", "Average");
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-10s", student_names[i]);
        
        float total = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%-10.1f", grades[i][j]);
            total += grades[i][j];
        }
        
        float average = total / NUM_SUBJECTS;
        printf("%-10.1f\n", average);
    }
    
    // TODO: Find class averages for each subject
    printf("\nClass Averages:\n");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        float subject_total = 0;
        for (int i = 0; i < NUM_STUDENTS; i++) {
            subject_total += grades[i][j];
        }
        float subject_average = subject_total / NUM_STUDENTS;
        printf("%s: %.1f\n", subjects[j], subject_average);
    }
    
    return 0;
}

/*
 * Additional Practice Tasks:
 * 
 * TODO: Implement these functions:
 * 
 * 1. Array Functions:
 *    - int findSecondLargest(int arr[], int size)
 *    - void rotateArray(int arr[], int size, int positions)
 *    - int removeDuplicates(int arr[], int size)
 *    - void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[])
 * 
 * 2. String Functions:
 *    - int countWords(char str[])
 *    - void removeSpaces(char str[])
 *    - int isAnagram(char str1[], char str2[])
 *    - void findAndReplace(char str[], char find[], char replace[])
 * 
 * 3. Advanced Challenges:
 *    - Implement your own string functions (without using string.h)
 *    - Create a simple text editor with basic operations
 *    - Build a word frequency counter
 *    - Implement matrix multiplication
 *    - Create a simple encryption/decryption program
 */

/*
 * Practice Questions:
 * 
 * 1. What's the difference between char str[] and char *str?
 * 2. How are arrays passed to functions in C?
 * 3. What happens when you access an array index out of bounds?
 * 4. Why do we need the null terminator '\0' in strings?
 * 5. How do 2D arrays work in memory?
 * 6. What's the difference between strcpy and strncpy?
 * 7. How do you initialize a 2D array with different values?
 * 
 * Compilation:
 * gcc exercise7-arrays-strings.c -o exercise7-arrays-strings
 * 
 * Learning Objectives:
 * - Master array declaration, initialization, and manipulation
 * - Understand string handling and common string operations
 * - Learn to work with multi-dimensional arrays
 * - Practice algorithm implementation with arrays
 * - Build practical applications using arrays and strings
 */
