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
    
    // STUDENT DISCOVERY SECTION - Your Understanding is Correct!
    printf("\n=== YOUR DISCOVERIES EXPLAINED ===\n");
    
    // Ampersand (&) rule demonstration
    printf("\n1. THE AMPERSAND (&) RULE:\n");
    printf("✅ You discovered: Use & with int, float, char for scanf\n");
    printf("✅ You discovered: DON'T use & with arrays/strings\n");
    
    printf("\nWHY this happens:\n");
    printf("• scanf needs the MEMORY ADDRESS to store data\n");
    printf("• & gives the address of variables\n");
    printf("• Arrays ARE already addresses, so no & needed\n");
    
    int testNum;
    char testArray[20];
    printf("\nExample addresses:\n");
    printf("Address of testNum: %p (use &testNum in scanf)\n", (void*)&testNum);
    printf("Address of testArray: %p (use testArray in scanf)\n", (void*)testArray);
    printf("See? Array name IS the address!\n");
    
    // scanf vs fgets demonstration
    printf("\n2. SCANF vs FGETS for STRINGS:\n");
    printf("✅ You discovered: scanf stops at spaces\n");
    printf("✅ You discovered: fgets reads whole lines\n");
    
    printf("\nComparison:\n");
    printf("scanf(\"%%s\", name):  Reads \"John\" from \"John Smith\"\n");
    printf("fgets(name, size, stdin): Reads \"John Smith\\n\"\n");
    printf("fgets is SAFER and more COMPLETE!\n");
    
    // Whitespace handling
    printf("\n3. WHITESPACE HANDLING:\n");
    printf("✅ You discovered: Space before %%c is important\n");
    printf("WHY: scanf leaves newline in buffer\n");
    printf("SOLUTION: \" %%c\" consumes leftover whitespace\n");
    
    return 0;
}

/*
 * STUDENT MASTERY - YOU UNDERSTAND THE KEY CONCEPTS!
 * 
 * ✅ AMPERSAND (&) RULE - You Got It!
 * 1. Use & with scanf for: int, float, double, char (single variables)
 * 2. DON'T use & with: arrays, strings (they're already addresses)
 * 3. WHY: scanf needs memory address to store data
 * 
 * ✅ SCANF vs FGETS - You Understand the Difference!
 * 4. scanf("%s", name) stops at first whitespace
 * 5. fgets(name, size, stdin) reads entire line including spaces
 * 6. fgets is SAFER and better for user input
 * 
 * ✅ WHITESPACE ISSUES - You Know the Solution!
 * 7. scanf(" %c", &grade) - space before %c is crucial
 * 8. Clears leftover newlines from input buffer
 * 9. Prevents input reading problems
 * 
 * MEMORY CONCEPT YOU'VE GRASPED:
 * • Variables need & to get their address
 * • Arrays are already addresses (no & needed)
 * • scanf stores data AT the address you provide
 * 
 * REAL-WORLD LESSON:
 * • Always use fgets() for string input in production code
 * • scanf() is good for learning, fgets() is good for real programs
 * • Input validation is crucial (check what user actually entered)
 * 
 * EXERCISES TO REINFORCE YOUR UNDERSTANDING:
 * 1. Create a program using ONLY fgets() for all input
 * 2. Try scanf() without & and see the compilation error
 * 3. Test what happens when you enter "John Smith" for scanf("%s")
 * 4. Compare scanf() and fgets() behavior with same input
 */
