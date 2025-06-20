/*
 * Exercise: Hello World and Basic Output
 * 
 * This is a hands-on exercise for the 01-hello-world.c lesson.
 * Complete the tasks below to practice basic C program structure and output.
 * 
 * Instructions:
 * 1. Read each task carefully
 * 2. Write the code in the designated areas
 * 3. Test your solutions by compiling and running the program
 * 4. Experiment with different outputs
 */

#include <stdio.h>

int main() {
    printf("=== Hello World Exercise ===\n\n");
    
    // Task 1: Basic Hello World
    printf("Task 1: Your First Program\n");
    printf("--------------------------\n");
    
    // TODO: Print "Hello, World!" to the screen
    // Write your code here:
    printf("Hello, world!\n");
    
    printf("\n");
    
    // Task 2: Personal Greeting
    printf("Task 2: Personal Greeting\n");
    printf("-------------------------\n");
    
    // TODO: Print a personalized greeting with your name
    // Example: "Hello, my name is [Your Name]"
    // Write your code here:
    printf("Hello, my name is Ndu Emmaunel Obinna.\n");
    
    printf("\n");
    
    // Task 3: Multiple Lines
    printf("Task 3: Multi-line Output\n");
    printf("-------------------------\n");
    
    // TODO: Print your name, age, and favorite hobby on separate lines
    // Use \n for new lines
    // Write your code here:
    printf("Name: Ndu Emmaunel Obinna\n Age: 19\n Hobby: Gaming\n");
    
    
    printf("\n");
    
    // Task 4: Formatting Practice
    printf("Task 4: Text Formatting\n");
    printf("-----------------------\n");
    
    // TODO: Create a formatted output like this:
    // ******************
    // *   Welcome to   *
    // *   C Programming*
    // ******************
    // Write your code here:
    printf("******************\n");
    printf("*   Welcome to   *\n");
    printf("* C Programming*\n");
    printf("******************\n");
    
    
    
    
    printf("\n");
    
    // Task 5: Escape Sequences
    printf("Task 5: Escape Sequences\n");
    printf("------------------------\n");
    
    // TODO: Print the following using escape sequences:
    // - A string with quotes: She said "Hello!"
    // - A path with backslashes: C:\Program Files\
    // - Text with tabs between words
    // Write your code here:
    printf("She said \"Hello!\"\n");
    printf("C:\\Program Files\\\n");
    printf("Name:\tPaula\tAge:\t21\tCity:\tNew Orleans\n");
    
    
    
    printf("\n");
    
    // Task 6: ASCII Art (Challenge)
    printf("Task 6: ASCII Art Challenge\n");
    printf("---------------------------\n");
    
    // TODO: Create a simple ASCII art of your choice
    // Examples: smiley face, house, tree, etc.
    // Write your code here:
    printf("  *****  \n");
    printf(" *     * \n");
    printf("*  o o  *\n");
    printf("*   ^   *\n");
    printf("* \\___/ *\n");
    printf(" *     * \n");
    printf("  *****  \n");

    
    
    
    
    
    printf("\n");
    
    // Task 7: Program Information
    printf("Task 7: Program Information\n");
    printf("---------------------------\n");
    
    // TODO: Print information about this program:
    // - Program name
    // - Your name as author
    // - Current date
    // - Purpose of the program
    // Write your code here:
    printf("Program Name: C \n");
    printf("Author: Ndu Emmaunel Obinna\n");
    printf("Date: 2025-06-20\n");
    printf("Purpose: Practice basic C output and formatting.\n");
    
    
    
    
    printf("\nExercise completed!\n");
    return 0;
}

/*
 * SAMPLE OUTPUTS (for inspiration):
 * 
 * Task 4: Text Formatting
 * ******************
 * *   Welcome to   *
 * *   C Programming*
 * ******************
 * 
 * Task 5: Escape Sequences
 * She said "Hello!"
 * C:\Program Files\
 * Name:    John    Age:    25    City:    Boston
 * 
 * Task 6: ASCII Art Example
 *   ^___^
 *  (  o.o  )
 *   > ^ <
 * 
 * COMPILATION:
 * gcc 01-exercise.c -o 01-exercise
 * 
 * LEARNING OBJECTIVES:
 * - Understand basic C program structure
 * - Practice using printf function
 * - Learn escape sequences (\n, \t, \", \\)
 * - Build confidence with C syntax
 * - Experiment with formatted output
 */

// \n: Newline. Moves the cursor to the beginning of the next line.
// \t: Horizontal tab. Inserts a horizontal tab space.
// \r: Carriage return. Moves the cursor to the beginning of the current line.
// \b: Backspace. Moves the cursor one position back.
// \a: Alert (bell). Produces an audible or visual alert.
// \\: Backslash. Represents a literal backslash character.
// \': Single quote. Represents a literal single quote character.
// \": Double quote. Represents a literal double quote character.
// \?: Question mark. Represents a literal question mark character (primarily used to avoid misinterpretation as a trigraph).
// \v: Vertical tab. Inserts a vertical tab.
// \f: Form feed. Moves the cursor to the beginning of the next page.
// \0: Null character. Represents the null character, typically used to mark the end of a C string.
// \nnn: Octal representation. Represents a character using its octal ASCII value (e.g., \072 for a colon).
// \xhh: Hexadecimal representation. Represents a character using its hexadecimal ASCII value (e.g., \x4A for 'J').