# Phase 1 Exercises - Foundations

Complete these exercises to reinforce your understanding of C programming basics.

## Exercise 1: Personal Information Program
Create a program `exercise1.c` that:
- Asks for your name, age, height, and favorite color
- Calculates how old you'll be in 10 years
- Displays all information in a formatted way

**Expected Output:**
```
Enter your name: John
Enter your age: 25
Enter your height (in meters): 1.75
Enter your favorite color: Blue

=== Your Information ===
Name: John
Age: 25 years old
Height: 1.75 meters (175.0 cm)
Favorite Color: Blue
In 10 years, you'll be 35 years old!
```

## Exercise 2: Simple Calculator
Create a program `exercise2.c` that:
- Asks user for two numbers
- Displays a menu of operations (+, -, *, /, %)
- Performs the selected operation
- Shows the result

**Expected Output:**
```
Enter first number: 10
Enter second number: 3

Select operation:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulo (%)
Your choice: 1

Result: 10 + 3 = 13
```

## Exercise 3: Grade Calculator
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
