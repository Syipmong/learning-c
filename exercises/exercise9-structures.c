/*
 * Exercise 9: Structures and Unions
 * 
 * This exercise helps you practice:
 * - Structure declaration and initialization
 * - Accessing structure members
 * - Arrays of structures
 * - Nested structures
 * - Unions and their differences from structures
 * - Structure pointers and dynamic allocation
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Task 1: Basic Structure Definition
struct Student {
    int id;
    char name[50];
    float gpa;
    int age;
};

// Task 2: Nested Structures
struct Address {
    char street[100];
    char city[50];
    char state[20];
    int zip_code;
};

struct Employee {
    int emp_id;
    char name[50];
    float salary;
    struct Address address;
};

// Task 3: Structure with Array Member
struct Course {
    char course_code[10];
    char course_name[100];
    int credits;
    float grades[50];  // Array for student grades
    int num_students;
};

// Task 4: Union Definition
union Data {
    int integer;
    float floating;
    char character;
    char string[20];
};

// Function prototypes
void printStudent(struct Student s);
void printEmployee(struct Employee *emp);
float calculateAverage(struct Course *course);
struct Student* createStudent(int id, char *name, float gpa, int age);

int main() {
    printf("=== Exercise 9: Structures and Unions ===\n\n");
    
    // Task 1: Basic Structure Operations
    printf("Task 1: Basic Structure Operations\n");
    
    // TODO: Create and initialize a student structure
    struct Student student1 = {101, "Alice Johnson", 3.75, 20};
    
    // Alternative initialization
    struct Student student2;
    student2.id = 102;
    strcpy(student2.name, "Bob Smith");
    student2.gpa = 3.25;
    student2.age = 19;
    
    printf("Student 1:\n");
    printStudent(student1);
    
    printf("\nStudent 2:\n");
    printStudent(student2);
    printf("\n");
    
    // Task 2: Array of Structures
    printf("Task 2: Array of Structures\n");
    
    struct Student class[5] = {
        {201, "Charlie Brown", 3.8, 21},
        {202, "Diana Prince", 3.9, 20},
        {203, "Eve Adams", 3.6, 22},
        {204, "Frank Miller", 3.4, 19},
        {205, "Grace Lee", 3.95, 21}
    };
    
    printf("Class Roster:\n");
    printf("%-5s %-15s %-5s %-5s\n", "ID", "Name", "GPA", "Age");
    printf("----------------------------------------\n");
    
    float total_gpa = 0;
    for (int i = 0; i < 5; i++) {
        printf("%-5d %-15s %-5.2f %-5d\n", 
               class[i].id, class[i].name, class[i].gpa, class[i].age);
        total_gpa += class[i].gpa;
    }
    
    printf("Class Average GPA: %.2f\n\n", total_gpa / 5);
    
    // Task 3: Nested Structures
    printf("Task 3: Nested Structures\n");
    
    struct Employee emp1 = {
        1001,
        "John Doe",
        75000.0,
        {"123 Main St", "Springfield", "IL", 62701}
    };
    
    printf("Employee Information:\n");
    printEmployee(&emp1);
    printf("\n");
    
    // Task 4: Structure Pointers and Dynamic Allocation
    printf("Task 4: Dynamic Structure Allocation\n");
    
    struct Student *dynamic_student = createStudent(301, "Mike Wilson", 3.55, 23);
    
    if (dynamic_student != NULL) {
        printf("Dynamically created student:\n");
        printStudent(*dynamic_student);
        
        // TODO: Modify structure through pointer
        dynamic_student->gpa = 3.75;
        strcpy(dynamic_student->name, "Michael Wilson");
        
        printf("\nAfter modification:\n");
        printStudent(*dynamic_student);
        
        free(dynamic_student);
        dynamic_student = NULL;
    }
    printf("\n");
    
    // Task 5: Course Management System
    printf("Task 5: Course Management System\n");
    
    struct Course cs101;
    strcpy(cs101.course_code, "CS101");
    strcpy(cs101.course_name, "Introduction to Programming");
    cs101.credits = 3;
    cs101.num_students = 8;
    
    // TODO: Initialize student grades
    float grades[] = {85.5, 92.0, 78.5, 88.0, 91.5, 76.0, 89.5, 87.0};
    for (int i = 0; i < cs101.num_students; i++) {
        cs101.grades[i] = grades[i];
    }
    
    printf("Course: %s - %s (%d credits)\n", 
           cs101.course_code, cs101.course_name, cs101.credits);
    printf("Number of students: %d\n", cs101.num_students);
    
    printf("Student grades: ");
    for (int i = 0; i < cs101.num_students; i++) {
        printf("%.1f ", cs101.grades[i]);
    }
    printf("\n");
    
    float course_average = calculateAverage(&cs101);
    printf("Course average: %.2f\n\n", course_average);
    
    // Task 6: Unions
    printf("Task 6: Unions\n");
    
    union Data data;
    
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of char[20]: %lu bytes\n\n", sizeof(char[20]));
    
    // TODO: Demonstrate union usage
    data.integer = 42;
    printf("Stored integer 42:\n");
    printf("As integer: %d\n", data.integer);
    printf("As float: %f\n", data.floating);
    printf("As character: %c\n", data.character);
    printf("\n");
    
    data.floating = 3.14159;
    printf("Stored float 3.14159:\n");
    printf("As integer: %d\n", data.integer);
    printf("As float: %f\n", data.floating);
    printf("As character: %c\n", data.character);
    printf("\n");
    
    strcpy(data.string, "Hello");
    printf("Stored string 'Hello':\n");
    printf("As string: %s\n", data.string);
    printf("As integer: %d\n", data.integer);
    printf("As float: %f\n", data.floating);
    printf("\n");
    
    // Task 7: Student Database System
    printf("Task 7: Student Database System\n");
    
    int num_students;
    printf("Enter number of students: ");
    scanf("%d", &num_students);
    
    // TODO: Dynamically allocate array of structures
    struct Student *database = (struct Student*)malloc(num_students * sizeof(struct Student));
    
    if (database == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Input student data
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &database[i].id);
        
        printf("Name: ");
        scanf(" %[^\n]", database[i].name);
        
        printf("GPA: ");
        scanf("%f", &database[i].gpa);
        
        printf("Age: ");
        scanf("%d", &database[i].age);
    }
    
    // Display all students
    printf("\n=== Student Database ===\n");
    printf("%-5s %-20s %-5s %-5s\n", "ID", "Name", "GPA", "Age");
    printf("------------------------------------------\n");
    
    for (int i = 0; i < num_students; i++) {
        printf("%-5d %-20s %-5.2f %-5d\n", 
               database[i].id, database[i].name, 
               database[i].gpa, database[i].age);
    }
    
    // TODO: Find student with highest GPA
    int highest_index = 0;
    for (int i = 1; i < num_students; i++) {
        if (database[i].gpa > database[highest_index].gpa) {
            highest_index = i;
        }
    }
    
    printf("\nStudent with highest GPA:\n");
    printStudent(database[highest_index]);
    
    // TODO: Search for a student by ID
    int search_id;
    printf("\nEnter student ID to search: ");
    scanf("%d", &search_id);
    
    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (database[i].id == search_id) {
            printf("Student found:\n");
            printStudent(database[i]);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student with ID %d not found.\n", search_id);
    }
    
    free(database);
    database = NULL;
    
    return 0;
}

// Function implementations
void printStudent(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
    printf("Age: %d\n", s.age);
}

void printEmployee(struct Employee *emp) {
    printf("Employee ID: %d\n", emp->emp_id);
    printf("Name: %s\n", emp->name);
    printf("Salary: $%.2f\n", emp->salary);
    printf("Address: %s, %s, %s %d\n", 
           emp->address.street, emp->address.city, 
           emp->address.state, emp->address.zip_code);
}

float calculateAverage(struct Course *course) {
    float sum = 0;
    for (int i = 0; i < course->num_students; i++) {
        sum += course->grades[i];
    }
    return sum / course->num_students;
}

struct Student* createStudent(int id, char *name, float gpa, int age) {
    struct Student *new_student = (struct Student*)malloc(sizeof(struct Student));
    
    if (new_student != NULL) {
        new_student->id = id;
        strcpy(new_student->name, name);
        new_student->gpa = gpa;
        new_student->age = age;
    }
    
    return new_student;
}

/*
 * Additional Practice Tasks:
 * 
 * TODO: Implement these structure-based programs:
 * 
 * 1. Library Management System:
 *    - Book structure (ISBN, title, author, year, available)
 *    - Functions to add, search, and checkout books
 * 
 * 2. Bank Account System:
 *    - Account structure (number, name, balance, type)
 *    - Functions for deposit, withdraw, transfer
 * 
 * 3. Hospital Patient System:
 *    - Patient structure with medical history
 *    - Doctor structure with specialization
 *    - Appointment scheduling system
 * 
 * 4. Inventory Management:
 *    - Product structure (ID, name, price, quantity)
 *    - Supplier structure with contact info
 *    - Functions for stock management
 * 
 * 5. Game Character System:
 *    - Character structure (name, level, health, skills)
 *    - Equipment structure
 *    - Battle and leveling functions
 */

/*
 * Advanced Challenges:
 * 
 * 1. Implement structure comparison functions
 * 2. Create structure serialization (save/load from file)
 * 3. Build a generic sorting function for structures
 * 4. Implement structure copying (deep vs shallow)
 * 5. Create a structure-based linked list
 * 6. Design a union for network packet headers
 * 7. Implement bit fields in structures
 * 8. Create self-referential structures (trees)
 * 
 * Practice Questions:
 * 
 * 1. What's the difference between structures and unions?
 * 2. How is memory allocated for structure members?
 * 3. What's structure padding and alignment?
 * 4. When would you use unions in real programs?
 * 5. How do you pass structures to functions efficiently?
 * 6. What's the difference between . and -> operators?
 * 7. How do you copy structures safely?
 * 8. What are bit fields and when are they useful?
 * 
 * Compilation:
 * gcc exercise9-structures.c -o exercise9-structures
 * 
 * Learning Objectives:
 * - Master structure declaration and usage
 * - Understand nested and complex structures
 * - Learn dynamic structure allocation
 * - Practice structure-based data organization
 * - Understand unions and their use cases
 * - Build real-world data management systems
 */
