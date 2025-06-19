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
    
    // Strings in C (arrays of characters)
    printf("\n=== Strings in C ===\n");
    printf("C does NOT have a built-in string data type!\n");
    printf("Instead, strings are arrays of characters ending with '\\0'\n\n");
    
    // Different ways to declare strings
    char name1[20] = "John";           // Array with specific size
    char name2[] = "Alice";            // Array size determined automatically
    char name3[10] = {'B', 'o', 'b', '\0'};  // Manual character array
    char *name4 = "Charlie";           // Pointer to string literal
    
    printf("name1: %s (size: %zu bytes)\n", name1, sizeof(name1));
    printf("name2: %s (size: %zu bytes)\n", name2, sizeof(name2));
    printf("name3: %s (size: %zu bytes)\n", name3, sizeof(name3));
    printf("name4: %s\n", name4);
    
    // String characteristics
    printf("\nString characteristics:\n");
    printf("Each character: 1 byte\n");
    printf("Null terminator '\\0': 1 byte\n");
    printf("\"Hello\" needs 6 bytes: H-e-l-l-o-\\0\n");
    
    // Detailed byte analysis for each string
    printf("\n=== DETAILED BYTE ANALYSIS ===\n");
    
    // String content vs array size
    printf("String content vs allocated memory:\n");
    printf("name1 = \"John\":\n");
    printf("  - Content: J-o-h-n-\\0 = 5 bytes used\n");
    printf("  - Allocated: char[20] = 20 bytes total\n");
    printf("  - Wasted: 15 bytes (filled with random data or zeros)\n");
    
    printf("\nname2 = \"Alice\":\n");
    printf("  - Content: A-l-i-c-e-\\0 = 6 bytes\n");
    printf("  - Allocated: char[6] = 6 bytes (exact fit)\n");
    printf("  - Wasted: 0 bytes\n");
    
    printf("\nname3 = \"Bob\":\n");
    printf("  - Content: B-o-b-\\0 = 4 bytes used\n");
    printf("  - Allocated: char[10] = 10 bytes total\n");
    printf("  - Wasted: 6 bytes\n");
    
    printf("\nname4 = \"Charlie\" (pointer):\n");
    printf("  - String: C-h-a-r-l-i-e-\\0 = 8 bytes (in read-only memory)\n");
    printf("  - Pointer variable: %zu bytes (stores memory address)\n", sizeof(name4));
    
    // Common string examples with byte counts
    printf("\n=== COMMON STRING BYTE EXAMPLES ===\n");
    char empty[] = "";                    // Just null terminator
    char single[] = "A";                  // One char + null
    char hello[] = "Hello";               // 5 chars + null
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // 26 chars + null
    
    printf("\"\" (empty string): %zu bytes\n", sizeof(empty));
    printf("\"A\": %zu bytes\n", sizeof(single));
    printf("\"Hello\": %zu bytes\n", sizeof(hello));
    printf("\"ABCDEFGHIJKLMNOPQRSTUVWXYZ\": %zu bytes\n", sizeof(alphabet));
    
    // Memory layout visualization
    printf("\n=== MEMORY LAYOUT VISUALIZATION ===\n");
    printf("\"Hello\" in memory:\n");
    printf("Index:  [0] [1] [2] [3] [4] [5]\n");
    printf("Char:    H   e   l   l   o  \\0\n");
    printf("ASCII:  72  101 108 108 111  0\n");
    printf("Bytes:   1   1   1   1   1   1  = 6 total\n");
    
    // Individual character access
    printf("\nAccessing individual characters:\n");
    printf("First character of name1: %c\n", name1[0]);
    printf("Second character of name1: %c\n", name1[1]);
    printf("Last visible character of name1: %c\n", name1[3]);
    printf("Null terminator of name1: %d (ASCII value)\n", name1[4]);
    
    // String vs Character
    printf("\nString vs Character:\n");
    char single_char = 'A';            // Single character (1 byte)
    char string_with_A[] = "A";        // String with one character + null (2 bytes)
    printf("Single char 'A': %c (size: %zu bytes)\n", single_char, sizeof(single_char));
    printf("String \"A\": %s (size: %zu bytes)\n", string_with_A, sizeof(string_with_A));
    
    // Variable modifications
    printf("\n=== Variable Modifications ===\n");
    age = age + 1;  // or age++;
    printf("Next year age: %d\n", age);
      price = price * 1.1;  // 10% increase
    printf("New price: $%.2f\n", price);
    
    // My personal information (added by student)
    printf("\n=== My Information ===\n");
    char myName[] = "Yipmong Said";
    char *myCity = "Plateau";
    int myAge = 20;
    float myHeight = 1.75f; // in meters
    char myGrade = 'A';
    
    // Print my information
    printf("Name: %s (size: %zu bytes)\n", myName, sizeof(myName));
    printf("City: %s\n", myCity);
    printf("Age: %d years\n", myAge);
    printf("Height: %.2f meters\n", myHeight);
    printf("Grade: %c\n", myGrade);
    
    // String analysis for my name
    printf("\nString analysis for my name:\n");
    printf("Characters in \"%s\": %zu bytes total\n", myName, sizeof(myName));
    printf("First character: %c\n", myName[0]);
    printf("Last visible character: %c\n", myName[sizeof(myName)-2]); // -2 because of null terminator

    printf("\n === My name in sentence === \n");
    printf("My name is %s, I live in %s, I am %d years old, my height is %.3f meters, and my grade is %d. \n", myName,myCity, myAge, myHeight, myGrade);
    
    // Demonstrating format specifier errors
    printf("\n=== FORMAT SPECIFIER EXPERIMENTS ===\n");
    printf("CORRECT format specifiers:\n");
    printf("Age as integer: %d\n", myAge);
    printf("Height as float: %.2f\n", myHeight);
    printf("Grade as character: %c\n", myGrade);
    
    /* 
     * WRONG FORMAT SPECIFIERS - These would cause COMPILE ERRORS:
     * 
     * printf("Age as string: %s\n", myAge);        // ERROR: int used with %s
     * printf("Height as integer: %d\n", myHeight); // WARNING: float used with %d
     * printf("Grade as integer: %d\n", myGrade);   // This actually works (shows ASCII)
     * printf("Name as integer: %d\n", myName);     // ERROR: array used with %d
     * 
     * The compiler catches these mismatches and warns you!
     */
    
    printf("\nWhat you discovered:\n");
    printf("✅ GCC compiler checks printf format specifiers\n");
    printf("✅ Wrong formats cause compile-time errors/warnings\n");
    printf("✅ This prevents runtime crashes and undefined behavior\n");
    
    // Some safe "wrong" examples that show warnings but compile:
    printf("\nSafe format experiments (may show warnings):\n");
    printf("Grade as ASCII number: %d\n", myGrade);  // char -> int (safe)
    printf("Age as unsigned: %u\n", myAge);          // int -> unsigned (usually safe)
    
    printf("\n === END OF PROGRAM ===\n");
    
    // My experimental discovery section
    printf("\n=== STUDENT DISCOVERY: WARNINGS vs ERRORS ===\n");
    printf("🎉 I discovered: Programs can compile WITH warnings!\n");
    printf("📚 Learning moment: Understanding compiler messages\n\n");
    
    printf("COMPILE ERRORS (❌ Won't compile):\n");
    printf("- Missing semicolons\n");
    printf("- Undefined variables\n");
    printf("- Syntax mistakes\n");
    printf("- Type mismatches (sometimes)\n\n");
    
    printf("WARNINGS (⚠️ Compiles but risky):\n");
    printf("- Format specifier mismatches\n");
    printf("- Unused variables\n");
    printf("- Implicit type conversions\n");
    printf("- Potential logic issues\n\n");
    
    printf("Why warnings still compile:\n");
    printf("✓ C compiler can 'guess' what you meant\n");
    printf("✓ Some conversions are 'safe enough'\n");
    printf("✓ Gives you flexibility (and rope to hang yourself!)\n");
    printf("⚠️ But warnings often indicate real problems!\n");
    
    return 0;
}

/*
 * KEY POINTS ABOUT STRINGS IN C:
 * 1. No built-in string data type - use char arrays instead
 * 2. Strings must end with null terminator '\0'
 * 3. String literals are stored in read-only memory
 * 4. Use %s format specifier to print strings
 * 5. String length = number of characters + 1 (for '\0')
 *  * KEY DISCOVERY - WARNINGS vs ERRORS:
 * 6. GCC compiler checks printf format specifiers at compile time!
 * 7. ERRORS prevent compilation - program won't build
 * 8. WARNINGS allow compilation - but indicate potential problems
 * 9. Some "wrong" format specifiers cause warnings, not errors
 * 10. C compiler tries to "help" by making reasonable guesses
 * 
 * STUDENT DISCOVERY:
 * ✅ You learned that compilation != no problems
 * ✅ You discovered warnings vs errors distinction
 * ✅ You experienced C's flexibility (and potential dangers)
 * ✅ You saw that warnings often indicate real issues
 * 
 * EXAMPLES OF WHAT YOU TESTED:
 * printf("%d", myHeight);  // ⚠️ WARNING: float used as int
 * printf("%f", myAge);     // ⚠️ WARNING: int used as float  
 * printf("%c", myAge);     // ⚠️ WARNING: int used as char
 * printf("%s", myAge);     // ❌ ERROR: int can't be string
 * 
 * LESSON: Always read and fix warnings! They're trying to help you!
 * 
 * ADDITIONAL EXERCISES:
 * 1. Try using %d with a string variable - see the error
 * 2. Try using %s with an integer - see what happens
 * 3. Experiment with %c on different data types
 * 4. Notice how some conversions warn but still compile
 * 5. Read the compiler warning messages carefully
 */
