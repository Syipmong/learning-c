# Phase 2: Core Concepts
*Building Essential C Programming Skills*

## 📖 Learning Objectives

By the end of this phase, you will understand:
- Function definition, declaration, and usage
- Arrays and multi-dimensional arrays
- String handling and manipulation
- Pointer fundamentals and usage
- Structures and basic data organization
- Scope and lifetime of variables
- Modular programming concepts

## 📁 Files in This Section

1. **01-functions.c** - Function basics, parameters, return values
2. **02-scope-storage.c** - Variable scope and storage classes
3. **03-arrays.c** - One and multi-dimensional arrays
4. **04-strings.c** - String handling and manipulation
5. **05-pointers.c** - Pointer fundamentals and operations
6. **06-pointer-arrays.c** - Pointers with arrays and strings
7. **07-structures.c** - Defining and using structures
8. **08-functions-advanced.c** - Function pointers, recursion
9. **09-practice-project.c** - Library management system

## 🎯 Key Concepts

### Functions
```c
// Function declaration
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function call
int result = add(5, 3);
```

### Arrays
```c
int numbers[5] = {1, 2, 3, 4, 5};
char name[20] = "Hello";
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
```

### Pointers
```c
int x = 10;
int *ptr = &x;    // Pointer to x
*ptr = 20;        // Dereference - changes x to 20
```

### Structures
```c
struct Student {
    char name[50];
    int age;
    float gpa;
};

struct Student s1 = {"John", 20, 3.5};
```

## � Phase Prerequisites

Before starting this phase, ensure you have completed:
- ✅ Phase 1 - Foundations
- ✅ Understanding of variables and data types
- ✅ Control structures (if/else, loops)
- ✅ Basic input/output operations

## 🎯 Learning Sequence

### Week 4: Functions and Scope
- **Day 1-2**: Function basics and parameters
- **Day 3-4**: Variable scope and storage classes
- **Day 5-7**: Practice and exercises

### Week 5: Arrays and Strings
- **Day 1-2**: Array fundamentals
- **Day 3-4**: String handling
- **Day 5-7**: Array algorithms and practice

### Week 6: Pointers and Structures
- **Day 1-3**: Pointer fundamentals
- **Day 4-5**: Structures and data organization
- **Day 6-7**: Integration and practice project

## 🚀 Getting Started

1. **Compile and run each program**:
   ```bash
   gcc -Wall -Wextra -std=c99 -g filename.c -o filename.exe
   ./filename.exe
   ```

2. **Use the build script**:
   ```bash
   ./build.bat
   ```

3. **Study progression**:
   - Read each file carefully
   - Understand the comments and explanations
   - Modify the code to experiment
   - Complete the exercises at the end of each file

## 💡 Important Concepts

### Memory Management
- **Stack vs Heap**: Understanding where variables are stored
- **Array Bounds**: Preventing buffer overflows
- **Pointer Safety**: Avoiding null pointer dereferences

### Best Practices
- **Function Design**: Single responsibility principle
- **Naming Conventions**: Clear, descriptive names
- **Error Handling**: Checking for invalid inputs
- **Code Organization**: Logical structure and modularity

## 📝 Practice Exercises

### Functions
1. Create a calculator with separate functions for each operation
2. Write functions to find maximum and minimum in an array
3. Implement recursive functions (factorial, fibonacci)
4. Create utility functions for common operations

### Arrays
1. Implement sorting algorithms (bubble sort, selection sort)
2. Create matrix operations (addition, multiplication)
3. Build a simple text analyzer
4. Implement search algorithms

### Pointers
1. Swap two variables using pointers
2. Reverse an array using pointers
3. Create dynamic string functions
4. Implement pointer-based linked list

### Structures
1. Create a student database
2. Build an inventory management system
3. Implement a simple graphics coordinate system
4. Design a contact management system

## 🔧 Debugging Tips

### Common Errors
- **Segmentation Fault**: Check array bounds and pointer validity
- **Undefined Behavior**: Initialize variables before use
- **Function Prototype Mismatch**: Ensure declarations match definitions
- **String Handling**: Always null-terminate strings

### Debugging Techniques
- **Print Debugging**: Add printf statements to trace execution
- **GDB Usage**: Learn basic debugging commands
- **Static Analysis**: Use compiler warnings effectively
- **Code Review**: Read your code line by line

## 🎓 Phase Completion Criteria

You are ready for Phase 3 when you can:
- [ ] Write and call functions with different parameter types
- [ ] Manipulate arrays and understand memory layout
- [ ] Handle strings safely and efficiently
- [ ] Use pointers for indirect access and parameter passing
- [ ] Define and use structures for data organization
- [ ] Understand variable scope and lifetime
- [ ] Debug common pointer and array errors
- [ ] Complete the practice project successfully

## 🔗 Phase Connections

### From Phase 1
- Builds on: Variables, control structures, basic I/O
- Extends: Problem-solving with modular design

### To Phase 3
- Prepares for: Dynamic memory allocation
- Enables: File handling and multi-file projects
- Foundation for: Advanced data structures

## � Additional Resources

### Recommended Reading
- **Functions**: Chapter 4 of K&R C Programming Language
- **Arrays**: Chapter 5 of K&R C Programming Language
- **Pointers**: Chapter 6 of K&R C Programming Language
- **Structures**: Chapter 7 of K&R C Programming Language

### Practice Platforms
- **LeetCode**: Array and string problems
- **HackerRank**: C domain challenges
- **Project Euler**: Mathematical programming problems

---

**Previous:** [Phase 1 - Foundations](../01-foundations/README.md)
**Next:** [Phase 3 - Intermediate](../03-intermediate/README.md)

**Ready to dive into core C concepts?** Start with `01-functions.c` and build your way up to modular, efficient programs! 🚀

---
**Previous:** [Phase 1 - Foundations](../01-foundations/README.md) | **Next:** [Phase 3 - Intermediate](../03-intermediate/README.md)
