# Phase 3: Intermediate
*Advanced C Programming Techniques*

## 📖 Learning Objectives

By the end of this phase, you will understand:
- Dynamic memory allocation and management
- Advanced pointer techniques and pointer arithmetic
- File input/output operations and file handling
- Preprocessor directives and macros
- Multi-file project organization
- Header files and compilation units
- Error handling and debugging strategies
- Command-line argument processing

## 📁 Files in This Section

1. **01-dynamic-memory.c** - malloc, calloc, realloc, free
2. **02-advanced-pointers.c** - Pointer arithmetic, arrays of pointers
3. **03-file-handling.c** - File I/O operations and modes
4. **04-preprocessor.c** - Macros, conditional compilation
5. **05-multi-file-project/** - Project organization
   - `main.c` - Main program
   - `utils.h` - Header file
   - `utils.c` - Implementation
   - `Makefile` - Build configuration
6. **06-command-line-args.c** - argc, argv processing
7. **07-error-handling.c** - Error codes, errno, debugging
8. **08-string-advanced.c** - Advanced string manipulation
9. **09-practice-project/** - Text file processor with modules

## 🎯 Key Concepts

### Dynamic Memory Allocation
```c
#include <stdlib.h>

// Allocate memory
int *arr = malloc(10 * sizeof(int));
if (arr == NULL) {
    // Handle allocation failure
    return -1;
}

// Use the memory
for (int i = 0; i < 10; i++) {
    arr[i] = i * i;
}

// Free the memory
free(arr);
arr = NULL;  // Prevent dangling pointer
```

### File Handling
```c
#include <stdio.h>

FILE *file = fopen("data.txt", "r");
if (file != NULL) {
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);
}
```

### Multi-file Projects
```c
// utils.h
#ifndef UTILS_H
#define UTILS_H

int add(int a, int b);
void print_array(int *arr, int size);

#endif

// utils.c
#include "utils.h"
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```

## 📋 Phase Prerequisites

Before starting this phase, ensure you have mastered:
- ✅ Phase 2 - Core Concepts
- ✅ Function definition and usage
- ✅ Arrays and basic pointers
- ✅ Structures and basic data organization
- ✅ String handling fundamentals

## 🎯 Learning Sequence

### Week 7: Memory Management
- **Day 1-2**: Dynamic memory allocation basics
- **Day 3-4**: Advanced pointer techniques
- **Day 5-7**: Memory debugging and best practices

### Week 8: File Operations and Preprocessing
- **Day 1-2**: File I/O operations
- **Day 3-4**: Preprocessor and macros
- **Day 5-7**: Command-line arguments and error handling

### Week 9: Project Organization
- **Day 1-3**: Multi-file projects and header files
- **Day 4-5**: Build systems and Makefiles
- **Day 6-7**: Complete practice project

## 🚀 Getting Started

1. **Compile and run programs**:
   ```bash
   gcc -Wall -Wextra -std=c99 -g filename.c -o filename.exe
   ./filename.exe
   ```

2. **For multi-file projects**:
   ```bash
   cd 05-multi-file-project
   make
   ./program.exe
   ```

3. **Memory debugging** (if available):
   ```bash
   valgrind ./program.exe    # Linux/Mac
   # Use AddressSanitizer: gcc -fsanitize=address
   ```

## 💡 Important Concepts

### Memory Management Rules
1. **Every malloc needs a free** - Prevent memory leaks
2. **Check allocation success** - Handle NULL returns
3. **Set pointers to NULL after freeing** - Prevent use-after-free
4. **Don't free the same pointer twice** - Undefined behavior
5. **Don't access freed memory** - Use-after-free bugs

### File Handling Best Practices
1. **Always check if fopen succeeded** - Handle file errors
2. **Close files when done** - Use fclose()
3. **Use appropriate file modes** - "r", "w", "a", "rb", "wb"
4. **Handle end-of-file correctly** - Check feof() and ferror()
5. **Buffer management** - Understand buffering behavior

### Project Organization
1. **Separate interface from implementation** - .h and .c files
2. **Use include guards** - Prevent multiple inclusion
3. **Logical module division** - Group related functions
4. **Clear naming conventions** - Consistent and descriptive
5. **Documentation** - Comment interfaces and complex code

## 📝 Practice Exercises

### Dynamic Memory
1. Implement a dynamic array that can grow and shrink
2. Create a dynamic string that can be resized
3. Build a simple memory pool allocator
4. Implement a stack using dynamic memory

### File Handling
1. Create a file copy utility
2. Build a word count program
3. Implement a simple text editor
4. Create a configuration file parser

### Multi-file Projects
1. Organize calculator into separate modules
2. Build a student database with file persistence
3. Create a simple game with multiple source files
4. Implement a library for common algorithms

### Advanced Programming
1. Create a command-line argument parser
2. Implement error logging system
3. Build a simple configuration system
4. Create a generic data structure library

## 🔧 Debugging and Tools

### Memory Debugging
- **Valgrind** (Linux/Mac): Detects memory leaks and errors
- **AddressSanitizer**: Built into GCC/Clang
- **Static Analysis**: Use compiler warnings and tools
- **Manual Checking**: Track allocations and frees

### Common Memory Errors
- **Memory Leaks**: Forgetting to call free()
- **Double Free**: Calling free() twice on same pointer
- **Use After Free**: Accessing freed memory
- **Buffer Overflow**: Writing past array bounds
- **Null Pointer Dereference**: Using NULL pointers

### File Debugging
- **Check Return Values**: fopen, fread, fwrite return status
- **Error Handling**: Use perror() and strerror()
- **File Permissions**: Ensure read/write access
- **Path Issues**: Verify file paths are correct

## 🎓 Phase Completion Criteria

You are ready for Phase 4 when you can:
- [ ] Allocate and free dynamic memory correctly
- [ ] Handle memory allocation failures gracefully
- [ ] Use advanced pointer techniques safely
- [ ] Read from and write to files reliably
- [ ] Create and use preprocessor macros effectively
- [ ] Organize code into multiple files with proper headers
- [ ] Use Makefiles for building projects
- [ ] Process command-line arguments
- [ ] Implement comprehensive error handling
- [ ] Debug memory-related issues
- [ ] Complete the multi-file practice project

## 🔗 Phase Connections

### From Phase 2
- Builds on: Functions, arrays, pointers, structures
- Extends: Memory management and program organization

### To Phase 4
- Prepares for: Complex data structures
- Enables: Algorithm implementation
- Foundation for: Large-scale application development

## 📚 Additional Resources

### Books
- **"Expert C Programming"** by Peter van der Linden
- **"C Interfaces and Implementations"** by David Hanson
- **"The Practice of Programming"** by Kernighan & Pike

### Tools
- **Valgrind**: Memory debugging (Linux/Mac)
- **GDB**: GNU Debugger
- **Make**: Build automation
- **Static Analysis Tools**: Cppcheck, Clang Static Analyzer

### Online Resources
- **C Memory Management**: Understanding heap and stack
- **File I/O Tutorials**: Advanced file handling techniques
- **Makefile Tutorials**: Build system automation

## ⚠️ Common Pitfalls

1. **Memory Leaks**: Always pair malloc with free
2. **Dangling Pointers**: Set to NULL after freeing
3. **Buffer Overflows**: Check array bounds
4. **File Handle Leaks**: Always close opened files
5. **Header Include Issues**: Use include guards
6. **Compilation Dependencies**: Understand linking process

---

**Previous:** [Phase 2 - Core Concepts](../02-core-concepts/README.md)
**Next:** [Phase 4 - Advanced](../04-advanced/README.md)

**Ready to master intermediate C programming?** Start with dynamic memory management and build your way to well-organized, professional C projects! 🚀
