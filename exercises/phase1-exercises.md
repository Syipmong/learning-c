# Complete C Learning Exercises: Foundations to Intermediate

This directory contains comprehensive hands-on exercises for practicing concepts from beginner to intermediate C programming.

## Phase 1: Foundations

### Exercise 1: Personal Information Program ✓
**File:** `exercise1-personal-info.c`
**Topics:** Variables, input/output, basic formatting
**Description:** Create a program that asks for and displays personal information using various data types and format specifiers.

### Exercise 2: Simple Calculator ✓
**File:** `exercise2-calculator.c`
**Topics:** Variables, operators, input/output
**Description:** Build a basic calculator that performs arithmetic operations and demonstrates operator usage.

### Exercise 3: Operators Practice ✓
**File:** `exercise3-operators.c`
**Topics:** All operator types, precedence, type conversion
**Description:** Comprehensive practice with arithmetic, comparison, logical, and assignment operators.

### Exercise 4: Conditionals and Decision Making ✓
**File:** `exercise4-conditionals.c`
**Topics:** if-else, switch, nested conditionals, logical conditions
**Description:** Master decision-making structures with practical examples like grade calculators and menu systems.

### Exercise 5: Loops and Iteration ✓
**File:** `exercise5-loops.c`
**Topics:** for, while, do-while loops, nested loops, break/continue
**Description:** Practice all loop types with pattern printing, calculations, and interactive programs.

## Phase 2: Core Concepts

### Exercise 6: Functions Mastery ✓
**File:** `exercise6-functions.c`
**Topics:** Function declaration, parameters, return values, recursion, scope
**Description:** Learn modular programming with various function types including recursive functions.

### Exercise 7: Arrays and Strings ✓
**File:** `exercise7-arrays-strings.c`
**Topics:** Array manipulation, string handling, 2D arrays, searching, sorting
**Description:** Master array operations and string processing with practical applications.

### Exercise 8: Pointers and Memory Management ✓
**File:** `exercise8-pointers.c`
**Topics:** Pointer arithmetic, dynamic allocation, function pointers, memory management
**Description:** Deep dive into pointers, dynamic memory, and advanced memory management techniques.

## Phase 3: Intermediate Concepts

### Exercise 9: Structures and Unions ✓
**File:** `exercise9-structures.c`
**Topics:** Structure definition, nested structures, arrays of structures, unions
**Description:** Learn to organize complex data with structures and understand unions.

### Exercise 10: File I/O and Data Persistence ✓
**File:** `exercise10-fileio.c`
**Topics:** File operations, text/binary files, CSV processing, error handling
**Description:** Master file handling for data persistence and file-based applications.

## How to Use These Exercises

### Compilation
Each exercise can be compiled individually:
```bash
gcc exercise1-personal-info.c -o exercise1-personal-info
gcc exercise6-functions.c -o exercise6-functions -lm
```

### Recommended Order
1. Start with Phase 1 exercises (1-5) to build foundations
2. Move to Phase 2 exercises (6-8) for core programming concepts
3. Progress to Phase 3 exercises (9-10) for intermediate topics

### Learning Tips
- Read the comments and explanations in each exercise file
- Try to complete the TODO sections before looking at the solutions
- Experiment with the code - modify values and see what happens
- Practice the additional challenges listed at the end of each file
- Don't hesitate to ask questions about concepts you don't understand

### Additional Practice
Each exercise file contains:
- **Practice Questions** to test your understanding
- **Additional Tasks** to extend your learning
- **Advanced Challenges** for extra practice
- **Real-world applications** of the concepts

## Next Steps

After completing these exercises, you'll be ready to move on to:
- Phase 4: Advanced C Programming (pointers to functions, data structures)
- Phase 5: System Programming (process management, signals)
- Phase 6: Scalable Applications (modular design, testing)
- Phase 7: C++ Transition (OOP concepts, STL)

## Legacy Exercise Descriptions

### Original Exercise 3: Grade Calculator
Create a program `exercise3.c` that:
- Asks for student name and number of subjects
- Takes marks for each subject
- Calculates average and assigns letter grade
- Shows pass/fail status

**Grading Scale:**
- A: 90-100
- B: 80-89
- C: 70-79
- D: 60-69
- F: Below 60

## Exercise 4: Number Pattern Generator
Create a program `exercise4.c` that prints these patterns:

**Pattern 1 (Right Triangle):**
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

**Pattern 2 (Pyramid):**
```
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
```

## Exercise 5: Temperature Converter
Create a program `exercise5.c` that:
- Shows a menu for temperature conversion
- Converts between Celsius, Fahrenheit, and Kelvin
- Continues until user chooses to exit

**Formulas:**
- C to F: F = (C × 9/5) + 32
- F to C: C = (F - 32) × 5/9
- C to K: K = C + 273.15
- K to C: C = K - 273.15

## Exercise 6: Number Guessing Game
Create a program `exercise6.c` that:
- Generates a random number between 1-100 (use 42 for now)
- Gives user 7 attempts to guess
- Provides "too high" or "too low" hints
- Shows number of attempts remaining

## Exercise 7: Prime Number Checker
Create a program `exercise7.c` that:
- Asks user for a number
- Checks if it's prime
- If not prime, shows all its factors
- Asks if user wants to check another number

## Exercise 8: Multiplication Table
Create a program `exercise8.c` that:
- Asks user for a number
- Asks for table size (how many multiples)
- Displays the multiplication table
- Formats output nicely

**Example for number 7, size 10:**
```
Multiplication Table for 7:
7 × 1 = 7
7 × 2 = 14
7 × 3 = 21
...
7 × 10 = 70
```

## Exercise 9: Simple Menu System
Create a program `exercise9.c` that implements a simple banking system:
- Show account balance
- Deposit money
- Withdraw money (check for sufficient funds)
- Show transaction history (just count of transactions)
- Exit

Start with an initial balance of $1000.

## Exercise 10: Comprehensive Challenge
Create a program `exercise10.c` that combines multiple concepts:
- Student grade management for multiple students
- Add, edit, and display student information
- Calculate class average
- Find highest and lowest scoring students
- Use all concepts learned in Phase 1

## Submission Guidelines

1. Create each exercise in a separate `.c` file
2. Test your programs thoroughly
3. Add comments explaining your logic
4. Make sure programs compile without warnings
5. Handle invalid input gracefully

## Compilation Commands

For each exercise:
```bash
gcc -Wall -Wextra -std=c99 -g exercise1.c -o exercise1.exe
./exercise1.exe
```

Or use the provided build script:
```bash
./build-exercises.bat
```

## Tips for Success

1. **Start Simple**: Begin with basic functionality, then add features
2. **Test Frequently**: Compile and test after each small change
3. **Read Error Messages**: GCC provides helpful error information
4. **Use Debugging**: Add printf statements to trace program flow
5. **Practice Regularly**: Try variations of each exercise

---

**Good luck with your exercises!** 🚀

Once you complete these exercises, you'll be ready for [Phase 2 - Core Concepts](../02-core-concepts/README.md).
