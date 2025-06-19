/*
 * Exercise 8: Pointers and Memory Management
 * 
 * This exercise helps you practice:
 * - Pointer declaration and usage
 * - Pointer arithmetic
 * - Dynamic memory allocation
 * - Pointers with arrays and strings
 * - Function pointers
 * - Memory management best practices
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes for function pointer demonstration
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
void printArray(int *arr, int size);

int main() {
    printf("=== Exercise 8: Pointers and Memory Management ===\n\n");
    
    // Task 1: Basic Pointer Operations
    printf("Task 1: Basic Pointer Operations\n");
    
    int x = 42;
    int *ptr = &x;
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // TODO: Modify value through pointer
    *ptr = 100;
    printf("After modifying through pointer:\n");
    printf("Value of x: %d\n", x);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("\n");
    
    // Task 2: Pointer Arithmetic
    printf("Task 2: Pointer Arithmetic\n");
    
    int arr[] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr; // Points to first element
    
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(arr_ptr + %d) = %d\n", 
               i, arr[i], i, *(arr_ptr + i));
    }
    
    // TODO: Demonstrate pointer increment
    printf("\nUsing pointer increment:\n");
    arr_ptr = arr; // Reset pointer
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d (address: %p)\n", i, *arr_ptr, (void*)arr_ptr);
        arr_ptr++; // Move to next element
    }
    printf("\n");
    
    // Task 3: Pointers and Strings
    printf("Task 3: Pointers and Strings\n");
    
    char str[] = "Hello, World!";
    char *str_ptr = str;
    
    printf("String: %s\n", str);
    printf("Using pointer to print characters:\n");
    
    // TODO: Print each character using pointer
    while (*str_ptr != '\0') {
        printf("%c", *str_ptr);
        str_ptr++;
    }
    printf("\n");
    
    // TODO: Count string length using pointers
    str_ptr = str; // Reset pointer
    int length = 0;
    while (*str_ptr != '\0') {
        length++;
        str_ptr++;
    }
    printf("String length (using pointer): %d\n", length);
    printf("\n");
    
    // Task 4: Dynamic Memory Allocation
    printf("Task 4: Dynamic Memory Allocation\n");
    
    int n;
    printf("Enter the number of integers to store: ");
    scanf("%d", &n);
    
    // TODO: Allocate memory dynamically
    int *dynamic_arr = (int*)malloc(n * sizeof(int));
    
    if (dynamic_arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &dynamic_arr[i]);
    }
    
    printf("You entered: ");
    printArray(dynamic_arr, n);
    
    // TODO: Find sum using pointer arithmetic
    int sum = 0;
    int *temp_ptr = dynamic_arr;
    for (int i = 0; i < n; i++) {
        sum += *(temp_ptr + i);
    }
    printf("Sum: %d\n", sum);
    
    // TODO: Resize array (realloc)
    printf("Resizing array to %d elements\n", n + 3);
    dynamic_arr = (int*)realloc(dynamic_arr, (n + 3) * sizeof(int));
    
    if (dynamic_arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    // Add new elements
    for (int i = n; i < n + 3; i++) {
        dynamic_arr[i] = (i + 1) * 10;
    }
    
    printf("Resized array: ");
    printArray(dynamic_arr, n + 3);
    
    // TODO: Free allocated memory
    free(dynamic_arr);
    dynamic_arr = NULL; // Good practice
    printf("Memory freed successfully\n\n");
    
    // Task 5: Pointer to Pointer
    printf("Task 5: Pointer to Pointer\n");
    
    int value = 25;
    int *single_ptr = &value;
    int **double_ptr = &single_ptr;
    
    printf("Value: %d\n", value);
    printf("Value via single pointer: %d\n", *single_ptr);
    printf("Value via double pointer: %d\n", **double_ptr);
    
    printf("Address of value: %p\n", (void*)&value);
    printf("Value of single_ptr: %p\n", (void*)single_ptr);
    printf("Address of single_ptr: %p\n", (void*)&single_ptr);
    printf("Value of double_ptr: %p\n", (void*)double_ptr);
    printf("\n");
    
    // Task 6: Function Pointers
    printf("Task 6: Function Pointers\n");
    
    // TODO: Declare function pointer
    int (*operation)(int, int);
    
    int a = 15, b = 5;
    
    // Point to different functions
    operation = add;
    printf("%d + %d = %d\n", a, b, operation(a, b));
    
    operation = subtract;
    printf("%d - %d = %d\n", a, b, operation(a, b));
    
    operation = multiply;
    printf("%d * %d = %d\n", a, b, operation(a, b));
    printf("\n");
    
    // Task 7: Array of Function Pointers
    printf("Task 7: Array of Function Pointers\n");
    
    int (*operations[])(int, int) = {add, subtract, multiply};
    char *op_names[] = {"Addition", "Subtraction", "Multiplication"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", op_names[i], operations[i](a, b));
    }
    printf("\n");
    
    // Task 8: Dynamic String Management
    printf("Task 8: Dynamic String Management\n");
    
    printf("Enter a string: ");
    char buffer[1000];
    scanf(" %[^\n]", buffer);
    
    // TODO: Allocate exact memory for string
    int str_len = strlen(buffer);
    char *dynamic_str = (char*)malloc((str_len + 1) * sizeof(char));
    
    if (dynamic_str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    strcpy(dynamic_str, buffer);
    printf("Dynamic string: %s\n", dynamic_str);
    printf("String length: %d\n", str_len);
    
    // TODO: Convert to uppercase using pointers
    char *temp = dynamic_str;
    while (*temp) {
        if (*temp >= 'a' && *temp <= 'z') {
            *temp = *temp - 'a' + 'A';
        }
        temp++;
    }
    
    printf("Uppercase string: %s\n", dynamic_str);
    
    free(dynamic_str);
    dynamic_str = NULL;
    printf("\n");
    
    // Task 9: Memory Leak Prevention
    printf("Task 9: Memory Management Best Practices\n");
    
    // TODO: Demonstrate proper memory management
    char **string_array;
    int num_strings;
    
    printf("Enter number of strings: ");
    scanf("%d", &num_strings);
    
    // Allocate array of string pointers
    string_array = (char**)malloc(num_strings * sizeof(char*));
    if (string_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Allocate memory for each string
    for (int i = 0; i < num_strings; i++) {
        printf("Enter string %d: ", i + 1);
        char temp_buffer[100];
        scanf(" %[^\n]", temp_buffer);
        
        string_array[i] = (char*)malloc((strlen(temp_buffer) + 1) * sizeof(char));
        if (string_array[i] == NULL) {
            printf("Memory allocation failed!\n");
            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(string_array[j]);
            }
            free(string_array);
            return 1;
        }
        strcpy(string_array[i], temp_buffer);
    }
    
    printf("\nYou entered:\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%d: %s\n", i + 1, string_array[i]);
    }
    
    // TODO: Free all allocated memory
    for (int i = 0; i < num_strings; i++) {
        free(string_array[i]);
    }
    free(string_array);
    string_array = NULL;
    
    printf("All memory freed successfully!\n");
    
    return 0;
}

// Function implementations for function pointer demonstration
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

/*
 * Additional Practice Tasks:
 * 
 * TODO: Implement these functions using pointers:
 * 
 * 1. void swapStrings(char **str1, char **str2)
 * 2. int *findMax(int *arr, int size) - returns pointer to max element
 * 3. char *concatenateStrings(char *str1, char *str2) - dynamic allocation
 * 4. void reverseArray(int *arr, int size) - using pointers
 * 5. int **create2DArray(int rows, int cols) - dynamic 2D array
 * 6. void free2DArray(int **arr, int rows) - free 2D array
 * 7. char **splitString(char *str, char delimiter, int *count)
 * 8. void sortStringArray(char **strings, int count)
 * 
 * Advanced Challenges:
 * 
 * 1. Implement a dynamic linked list with pointers
 * 2. Create a simple memory pool allocator
 * 3. Build a string parser with dynamic allocation
 * 4. Implement a generic sorting function using function pointers
 * 5. Create a callback system for event handling
 */

/*
 * Practice Questions:
 * 
 * 1. What's the difference between int *p and int* p?
 * 2. When should you use malloc vs calloc vs realloc?
 * 3. What happens if you forget to call free()?
 * 4. How do you avoid segmentation faults with pointers?
 * 5. What's the difference between NULL pointer and dangling pointer?
 * 6. Why should you set pointers to NULL after freeing?
 * 7. How do function pointers work in C?
 * 8. What's pointer arithmetic and when is it useful?
 * 
 * Memory Management Rules:
 * 
 * 1. Every malloc/calloc should have a corresponding free
 * 2. Don't access memory after freeing it
 * 3. Don't free the same memory twice
 * 4. Check for NULL after allocation
 * 5. Set pointers to NULL after freeing
 * 6. Don't return pointers to local variables
 * 7. Use valgrind or similar tools to detect memory leaks
 * 
 * Compilation:
 * gcc exercise8-pointers.c -o exercise8-pointers
 * 
 * For memory checking:
 * valgrind --leak-check=full ./exercise8-pointers
 * 
 * Learning Objectives:
 * - Master pointer declaration and usage
 * - Understand dynamic memory allocation
 * - Learn pointer arithmetic and array manipulation
 * - Practice function pointers and callbacks
 * - Develop good memory management habits
 */
