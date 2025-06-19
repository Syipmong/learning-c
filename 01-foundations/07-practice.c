/*
 * Practice Exercise - Combining All Foundation Concepts
 * This program demonstrates a practical application using all concepts learned
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Variables for our student management system
    char studentName[50];
    int studentID;
    int numSubjects;
    float totalMarks = 0.0;
    float average;
    char grade;
    bool passStatus;
    int choice;
    
    printf("==================================================\n");
    printf("       STUDENT GRADE MANAGEMENT SYSTEM\n");
    printf("==================================================\n");
    
    do {
        // Display menu
        printf("\n=== MAIN MENU ===\n");
        printf("1. Add Student Information\n");
        printf("2. Calculate Grade\n");
        printf("3. Display Student Report\n");
        printf("4. Grade Statistics\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                // Input student information
                printf("\n=== STUDENT INFORMATION ===\n");
                printf("Enter student name: ");
                scanf("%s", studentName);
                
                printf("Enter student ID: ");
                scanf("%d", &studentID);
                
                printf("Enter number of subjects: ");
                scanf("%d", &numSubjects);
                
                // Validate number of subjects
                if (numSubjects <= 0 || numSubjects > 10) {
                    printf("Invalid number of subjects! Please enter 1-10.\n");
                    break;
                }
                
                // Input marks for each subject
                totalMarks = 0.0;
                printf("\nEnter marks for %d subjects:\n", numSubjects);
                for (int i = 1; i <= numSubjects; i++) {
                    float marks;
                    printf("Subject %d: ", i);
                    scanf("%f", &marks);
                    
                    // Validate marks
                    if (marks < 0 || marks > 100) {
                        printf("Invalid marks! Please enter marks between 0-100.\n");
                        i--;  // Retry this subject
                        continue;
                    }
                    
                    totalMarks += marks;
                }
                
                printf("Student information saved successfully!\n");
                break;
                
            case 2:
                // Calculate grade
                if (numSubjects == 0) {
                    printf("Please add student information first!\n");
                    break;
                }
                
                printf("\n=== GRADE CALCULATION ===\n");
                average = totalMarks / numSubjects;
                
                // Determine letter grade using if-else
                if (average >= 90) {
                    grade = 'A';
                } else if (average >= 80) {
                    grade = 'B';
                } else if (average >= 70) {
                    grade = 'C';
                } else if (average >= 60) {
                    grade = 'D';
                } else {
                    grade = 'F';
                }
                
                // Determine pass/fail status
                passStatus = (average >= 60) ? true : false;
                
                printf("Average calculated: %.2f%%\n", average);
                printf("Letter Grade: %c\n", grade);
                printf("Status: %s\n", passStatus ? "PASS" : "FAIL");
                break;
                
            case 3:
                // Display student report
                if (numSubjects == 0) {
                    printf("Please add student information first!\n");
                    break;
                }
                
                printf("\n=== STUDENT REPORT ===\n");
                printf("Student Name: %s\n", studentName);
                printf("Student ID: %d\n", studentID);
                printf("Number of Subjects: %d\n", numSubjects);
                printf("Total Marks: %.2f\n", totalMarks);
                printf("Average: %.2f%%\n", average);
                printf("Grade: %c\n", grade);
                printf("Status: %s\n", passStatus ? "PASS" : "FAIL");
                
                // Additional information based on grade
                printf("\nGrade Description: ");
                switch (grade) {
                    case 'A':
                        printf("Excellent Performance!\n");
                        break;
                    case 'B':
                        printf("Good Performance!\n");
                        break;
                    case 'C':
                        printf("Satisfactory Performance.\n");
                        break;
                    case 'D':
                        printf("Below Average Performance.\n");
                        break;
                    case 'F':
                        printf("Unsatisfactory Performance.\n");
                        break;
                }
                break;
                
            case 4:
                // Grade statistics
                printf("\n=== GRADE STATISTICS ===\n");
                printf("Grade Scale:\n");
                printf("A: 90-100%% (Excellent)\n");
                printf("B: 80-89%%  (Good)\n");
                printf("C: 70-79%%  (Satisfactory)\n");
                printf("D: 60-69%%  (Below Average)\n");
                printf("F: 0-59%%   (Fail)\n");
                
                if (numSubjects > 0) {
                    printf("\nYour Statistics:\n");
                    printf("Highest Possible: %.2f%% (if all subjects were 100%%)\n", 
                           (float)(numSubjects * 100) / numSubjects);
                    printf("Current Average: %.2f%%\n", average);
                    printf("Points to next grade: ");
                    
                    float nextGradeThreshold;
                    if (average < 60) nextGradeThreshold = 60;
                    else if (average < 70) nextGradeThreshold = 70;
                    else if (average < 80) nextGradeThreshold = 80;
                    else if (average < 90) nextGradeThreshold = 90;
                    else nextGradeThreshold = 100;
                    
                    printf("%.2f points\n", nextGradeThreshold - average);
                }
                break;
                
            case 5:
                printf("\nThank you for using Student Grade Management System!\n");
                printf("Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice! Please enter 1-5.\n");
                break;
        }
        
        // Pause before showing menu again (except for exit)
        if (choice != 5) {
            printf("\nPress Enter to continue...");
            while (getchar() != '\n');
            getchar();
        }
        
    } while (choice != 5);
    
    return 0;
}

/*
 * CONCEPTS USED IN THIS PROGRAM:
 * 
 * 1. VARIABLES & DATA TYPES:
 *    - int, float, char, bool
 *    - Arrays for strings
 * 
 * 2. INPUT/OUTPUT:
 *    - scanf for input
 *    - printf for formatted output
 * 
 * 3. OPERATORS:
 *    - Arithmetic (+, -, *, /)
 *    - Assignment (=, +=)
 *    - Comparison (>=, <=, ==)
 *    - Logical (&&, ||)
 *    - Ternary (?:)
 * 
 * 4. CONDITIONALS:
 *    - if-else statements
 *    - switch-case statements
 *    - Nested conditions
 * 
 * 5. LOOPS:
 *    - do-while for menu
 *    - for loop for input iteration
 *    - continue for validation
 * 
 * EXERCISE CHALLENGES:
 * 1. Add functionality to store multiple students
 * 2. Add subject names instead of just numbers
 * 3. Add grade point calculation (GPA)
 * 4. Add semester system
 * 5. Add attendance tracking
 * 6. Create a simple file save feature (we'll learn this later)
 * 
 * NEXT STEPS:
 * - Move to Phase 2 to learn about functions
 * - Learn about arrays to store multiple students
 * - Explore pointers for advanced memory management
 */
