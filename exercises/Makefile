# Makefile for C Learning Exercises
# Compiles all exercise files for the complete C learning path

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
BINDIR = bin

# All exercise targets
EXERCISES = exercise1-personal-info exercise2-calculator exercise3-operators \
           exercise4-conditionals exercise5-loops exercise6-functions \
           exercise7-arrays-strings exercise8-pointers exercise9-structures \
           exercise10-fileio

.PHONY: all clean phase1 phase2 phase3 help

all: $(BINDIR) $(EXERCISES)
	@echo "All exercises compiled successfully!"
	@echo "Executables are in the $(BINDIR)/ directory"

# Create bin directory
$(BINDIR):
	mkdir -p $(BINDIR)

# Phase 1: Foundations
phase1: $(BINDIR) exercise1-personal-info exercise2-calculator exercise3-operators exercise4-conditionals exercise5-loops
	@echo "Phase 1 (Foundations) exercises compiled!"

# Phase 2: Core Concepts  
phase2: $(BINDIR) exercise6-functions exercise7-arrays-strings exercise8-pointers
	@echo "Phase 2 (Core Concepts) exercises compiled!"

# Phase 3: Intermediate
phase3: $(BINDIR) exercise9-structures exercise10-fileio
	@echo "Phase 3 (Intermediate) exercises compiled!"

# Individual exercise compilation rules
exercise1-personal-info: exercise1-personal-info.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise2-calculator: exercise2-calculator.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise3-operators: exercise3-operators.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise4-conditionals: exercise4-conditionals.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise5-loops: exercise5-loops.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise6-functions: exercise6-functions.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@ -lm

exercise7-arrays-strings: exercise7-arrays-strings.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise8-pointers: exercise8-pointers.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise9-structures: exercise9-structures.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

exercise10-fileio: exercise10-fileio.c
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

clean:
	rm -rf $(BINDIR)
	@echo "Cleaned up compiled files"

help:
	@echo "C Learning Exercises Makefile"
	@echo "============================="
	@echo ""
	@echo "Available targets:"
	@echo "  all     - Compile all exercises"
	@echo "  phase1  - Compile Phase 1 exercises (1-5)"
	@echo "  phase2  - Compile Phase 2 exercises (6-8)"
	@echo "  phase3  - Compile Phase 3 exercises (9-10)"
	@echo "  clean   - Remove compiled files"
	@echo "  help    - Show this help message"
	@echo ""
	@echo "Individual exercises:"
	@echo "  exercise1-personal-info  - Personal information program"
	@echo "  exercise2-calculator     - Simple calculator"
	@echo "  exercise3-operators      - Operators practice"
	@echo "  exercise4-conditionals   - Conditionals and decision making"
	@echo "  exercise5-loops          - Loops and iteration"
	@echo "  exercise6-functions      - Functions mastery"
	@echo "  exercise7-arrays-strings - Arrays and strings"
	@echo "  exercise8-pointers       - Pointers and memory management"
	@echo "  exercise9-structures     - Structures and unions"
	@echo "  exercise10-fileio        - File I/O and data persistence"
	@echo ""
	@echo "Usage examples:"
	@echo "  make all          # Compile all exercises"
	@echo "  make phase1       # Compile only Phase 1"
	@echo "  make exercise1-personal-info  # Compile specific exercise"
	@echo "  make clean        # Clean up"
	@echo ""
	@echo "To run an exercise:"
	@echo "  ./bin/exercise1-personal-info"
	@echo "  ./bin/exercise2-calculator"
	@echo "  etc."
