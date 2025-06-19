# Phase 2: Core Concepts
*Building Robust C Programs*

## 📖 Learning Objectives

By the end of this phase, you will understand:
- Functions and scope
- Arrays and strings
- Basic pointers
- Memory management basics
- Structures

## 📁 Files in This Section

1. **01-functions.c** - Function definition, declaration, and usage
2. **02-function-scope.c** - Local vs global variables, scope rules
3. **03-arrays.c** - One-dimensional and multi-dimensional arrays
4. **04-strings.c** - String manipulation and functions
5. **05-pointers-basics.c** - Introduction to pointers
6. **06-pointers-arrays.c** - Pointers and arrays relationship
7. **07-structures.c** - User-defined data types
8. **08-practice.c** - Combined practice project

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
int *ptr = &x;  // ptr points to x
printf("%d", *ptr);  // prints 10
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

## 📝 Key Topics Covered

1. **Function Fundamentals**
   - Function syntax and structure
   - Parameters and return values
   - Function prototypes

2. **Scope and Lifetime**
   - Local vs global variables
   - Static variables
   - Function scope rules

3. **Arrays**
   - Declaration and initialization
   - Accessing elements
   - Multi-dimensional arrays
   - Array boundaries

4. **Strings**
   - String literals
   - String arrays
   - String library functions
   - String input/output

5. **Pointers**
   - Memory addresses
   - Pointer declaration and usage
   - Pointer arithmetic basics
   - Pointers and arrays

6. **Structures**
   - Defining structures
   - Structure members
   - Structure initialization
   - Arrays of structures

## 🚀 Getting Started

1. Complete all programs in order
2. Understand each concept before moving forward
3. Practice with the exercises provided
4. Build the practice project at the end

## 📖 Recommended Study Path

1. **Week 4**: Functions and scope (01-02)
2. **Week 5**: Arrays and strings (03-04)  
3. **Week 6**: Pointers and structures (05-07)
4. **Week 6**: Practice project (08)

---
**Previous:** [Phase 1 - Foundations](../01-foundations/README.md) | **Next:** [Phase 3 - Intermediate](../03-intermediate/README.md)
