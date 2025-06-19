# Getting Started with C Programming

Welcome to your comprehensive C programming learning journey! This guide will help you get started with the learning materials.

## 🎯 Quick Start

### 1. Prerequisites
- **C Compiler**: Make sure you have GCC installed
  - Windows: Install MinGW or TDM-GCC
  - Mac: Install Xcode command line tools (`xcode-select --install`)
  - Linux: Install GCC (`sudo apt install gcc` on Ubuntu)

### 2. Test Your Setup
1. Open terminal/command prompt
2. Navigate to this directory
3. Run: `gcc --version`
4. You should see GCC version information

### 3. Start Learning
1. Begin with **Phase 1 - Foundations**
2. Read the README in each phase folder
3. Study the code examples
4. Complete the exercises
5. Build and run the practice programs

## 🏃‍♂️ Quick Commands

### Compile a Single Program
```bash
# Navigate to the phase folder
cd 01-foundations

# Compile a program
gcc -Wall -Wextra -std=c99 -g filename.c -o filename.exe

# Run the program
./filename.exe          # Linux/Mac
filename.exe            # Windows
```

### Use Build Scripts
```bash
# Build all programs in Phase 1
cd 01-foundations
./build.bat             # Windows
make all                # Linux/Mac

# Build entire project
./build.bat             # From main directory
```

## 📚 Learning Path

### Phase 1: Foundations (Weeks 1-3) ✅ Ready
- [x] Hello World
- [x] Variables and Data Types
- [x] Input/Output
- [x] Operators
- [x] Conditionals
- [x] Loops
- [x] Practice Project

**Start here**: `01-foundations/README.md`

### Phase 2: Core Concepts (Weeks 4-6) 🚧 In Progress
- [ ] Functions
- [ ] Arrays and Strings
- [ ] Pointers
- [ ] Structures

**Next**: `02-core-concepts/README.md`

### Phase 3: Intermediate (Weeks 7-9) 📋 Planned
- Advanced pointers
- Dynamic memory allocation
- File handling
- Multi-file projects

### Phase 4: Advanced (Weeks 10-12) 📋 Planned
- Data structures
- Algorithms
- Error handling
- Performance optimization

### Phase 5: System Programming (Weeks 13-15) 📋 Planned
- System calls
- Process management
- Inter-process communication
- Network programming

### Phase 6: Scalable Applications (Weeks 16-18) 📋 Planned
- Design patterns
- Large project organization
- Build systems
- Testing frameworks

### Phase 7: C++ Transition (Weeks 19-21) 📋 Planned
- C++ basics
- Object-oriented programming
- STL containers
- Modern C++ features

## 📁 Directory Structure

```
learning-c/
├── README.md                    # Main project overview
├── GETTING-STARTED.md          # This file
├── build.bat                   # Master build script
├── 01-foundations/             # ✅ Phase 1 - Complete
│   ├── README.md
│   ├── 01-hello-world.c
│   ├── 02-variables.c
│   ├── 03-input-output.c
│   ├── 04-operators.c
│   ├── 05-conditionals.c
│   ├── 06-loops.c
│   ├── 07-practice.c
│   ├── build.bat
│   └── Makefile
├── 02-core-concepts/           # 🚧 Phase 2 - In Progress
│   └── README.md
├── 03-intermediate/            # 📋 Phase 3 - Planned
├── 04-advanced/               # 📋 Phase 4 - Planned
├── 05-system-programming/     # 📋 Phase 5 - Planned
├── 06-scalable-apps/         # 📋 Phase 6 - Planned
├── 07-cpp-transition/        # 📋 Phase 7 - Planned
├── projects/                 # Real-world projects
├── exercises/                # Practice exercises
│   └── phase1-exercises.md
├── resources/               # Learning materials
│   └── learning-resources.md
└── tools/                  # Build scripts and utilities
```

## 🎯 How to Use This Course

### 1. Sequential Learning
- Complete phases in order
- Don't skip ahead until you're comfortable
- Each phase builds on the previous one

### 2. Practice-Focused
- Read the code examples
- Type out the code yourself (don't copy-paste)
- Modify examples to see what happens
- Complete all exercises

### 3. Build Real Projects
- Each phase has a practice project
- Projects combine multiple concepts
- Start small, gradually increase complexity

### 4. Get Help
- Read error messages carefully
- Use the resources in the `resources/` folder
- Ask questions in programming forums
- Practice debugging skills

## 🚀 First Steps

1. **Read the main README.md**
2. **Navigate to Phase 1**: `cd 01-foundations`
3. **Read Phase 1 README**: Open `01-foundations/README.md`
4. **Start with Hello World**: Compile and run `01-hello-world.c`
5. **Work through each program** in order
6. **Complete the exercises** in `exercises/phase1-exercises.md`

## 💡 Tips for Success

### Study Habits
- **Code Daily**: Even 30 minutes makes a difference
- **Take Notes**: Write down key concepts
- **Practice Typing**: Don't copy-paste code
- **Debug Problems**: Don't just fix, understand why

### Technical Tips
- **Compile with Warnings**: Use `-Wall -Wextra`
- **Read Error Messages**: They contain valuable information
- **Use Version Control**: Consider learning Git
- **Comment Your Code**: Explain your thinking

### Problem Solving
- **Break Down Problems**: Divide complex tasks into smaller steps
- **Test Frequently**: Compile and test after small changes
- **Use Debugger**: Learn to step through code
- **Read Documentation**: Get comfortable with references

## 🆘 Troubleshooting

### Compiler Not Found
```
Error: gcc is not recognized as an internal or external command
```
**Solution**: Install GCC/MinGW and add to PATH

### Compilation Errors
```
error: expected ';' before '}' token
```
**Solution**: Check for missing semicolons, brackets, etc.

### Runtime Errors
```
Segmentation fault
```
**Solution**: Check array bounds, pointer usage, memory allocation

### Getting Help
1. Read the error message carefully
2. Check the resources in `resources/learning-resources.md`
3. Search online for the specific error
4. Ask for help on programming forums

## 🎓 After Completion

Once you complete this course, you'll be able to:
- Write efficient C programs
- Understand memory management
- Debug complex issues
- Build scalable applications
- Transition to C++ or other languages
- Contribute to open-source projects

## 📞 Support

- **Documentation**: Check `resources/learning-resources.md`
- **Exercises**: Practice with files in `exercises/`
- **Community**: Join C programming forums and communities
- **Books**: Refer to recommended books in resources

---

**Ready to start your C programming journey?** 

Begin with: `cd 01-foundations && start README.md`

**Happy coding!** 🚀
