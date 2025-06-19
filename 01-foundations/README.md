# Phase 1: Foundations
*Building Your C Programming Foundation*

This directory contains foundational C programming concepts using a **dual-file approach**: study the learning files, then practice with dedicated exercise files.

## 🎯 Learning Structure

### Dual File System
Each topic has two files for complete learning:

| Learning File | Exercise File | Topic |
|---------------|---------------|-------|
| `01-hello-world.c` | `01-exercise.c` | Basic program structure |
| `02-variables.c` | `02-exercise.c` | Data types and variables |
| `03-input-output.c` | `03-exercise.c` | User input and output |
| `04-operators.c` | `04-exercise.c` | All operator types |
| `05-conditionals.c` | `05-exercise.c` | Decision making |
| `06-loops.c` | `06-exercise.c` | Iteration and loops |
| `07-practice.c` | - | Combined practice |

## 📖 Learning Objectives

By the end of this phase, you will understand:
- Basic C program structure and compilation
- Variables, data types, and memory concepts
- Input and output operations with proper formatting
- All operator types and precedence rules
- Control structures (if/else, switch, loops)
- Problem-solving with fundamental programming constructs

## � Recommended Learning Path

### Step-by-Step Approach
1. **Study the learning file** - Understand concepts and examples
2. **Run the learning file** - See the code in action
3. **Complete the exercise file** - Practice on a clean sheet
4. **Experiment freely** - Modify and test variations
5. **Move to next topic** - Build upon your knowledge

### Example Workflow
```bash
# 1. Study the concept
gcc 04-operators.c -o 04-operators.exe && ./04-operators.exe

# 2. Practice hands-on
gcc 04-exercise.c -o 04-exercise.exe && ./04-exercise.exe

# 3. Move forward
gcc 05-conditionals.c -o 05-conditionals.exe && ./05-conditionals.exe
```
7. **07-practice.c** - Combined practice

## 🎯 Key Concepts

### Program Structure
```c
#include <stdio.h>    // Header files
int main() {          // Main function
    // Your code here
    return 0;         // Return statement
}
```

### Data Types
- `int` - integers
- `float` - floating point numbers
- `double` - double precision floating point
- `char` - single characters
- `_Bool` or `bool` - boolean values (with stdbool.h)

### Basic Operations
- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Comparison: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical: `&&`, `||`, `!`

## 📝 Exercises

1. Modify the hello world program to print your name
2. Create a program that calculates the area of a rectangle
3. Write a program that determines if a number is even or odd
4. Create a simple calculator for basic operations
5. Write a program that prints numbers 1-10 using a loop

## 🚀 Getting Started

1. Compile and run each program:
   ```bash
   gcc filename.c -o filename
   ./filename
   ```

2. Read the comments in each file carefully
3. Try modifying the code to see what happens
4. Complete all exercises before moving to Phase 2

---
**Next:** [Phase 2 - Core Concepts](../02-core-concepts/README.md)
