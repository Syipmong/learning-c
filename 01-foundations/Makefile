# Makefile for Phase 1 - Foundations
# This makefile helps compile all learning files and exercise files

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g

# Source files
LEARNING_SOURCES = 01-hello-world.c 02-variables.c 03-input-output.c 04-operators.c 05-conditionals.c 06-loops.c 07-practice.c
EXERCISE_SOURCES = 01-exercise.c 02-exercise.c 03-exercise.c 04-exercise.c 05-exercise.c 06-exercise.c

# Target files
LEARNING_TARGETS = $(LEARNING_SOURCES:.c=.exe)
EXERCISE_TARGETS = $(EXERCISE_SOURCES:.c=.exe)
ALL_TARGETS = $(LEARNING_TARGETS) $(EXERCISE_TARGETS)

# Default target - compile all programs
all: learning exercises

# Compile all learning files
learning: $(LEARNING_TARGETS)
	@echo "All learning files compiled successfully!"

# Compile all exercise files  
exercises: $(EXERCISE_TARGETS)
	@echo "All exercise files compiled successfully!"

# Rule to compile each .c file to .exe
%.exe: %.c
	$(CC) $(CFLAGS) $< -o $@
	@echo "✓ Compiled $<"

# Individual learning targets
hello: 01-hello-world.exe
variables: 02-variables.exe
io: 03-input-output.exe
operators: 04-operators.exe
conditionals: 05-conditionals.exe
loops: 06-loops.exe
practice: 07-practice.exe

# Individual exercise targets
ex1: 01-exercise.exe
ex2: 02-exercise.exe
ex3: 03-exercise.exe
ex4: 04-exercise.exe
ex5: 05-exercise.exe
ex6: 06-exercise.exe

# Run learning programs
run-hello: 01-hello-world.exe
	./01-hello-world.exe

run-variables: 02-variables.exe
	./02-variables.exe

run-io: 03-input-output.exe
	./03-input-output.exe

run-operators: 04-operators.exe
	./04-operators.exe

run-conditionals: 05-conditionals.exe
	./05-conditionals.exe

run-loops: 06-loops.exe
	./06-loops.exe

run-practice: 07-practice.exe
	./07-practice.exe

# Run exercise programs
run-ex1: 01-exercise.exe
	./01-exercise.exe

run-ex2: 02-exercise.exe
	./02-exercise.exe

run-ex3: 03-exercise.exe
	./03-exercise.exe

run-ex4: 04-exercise.exe
	./04-exercise.exe

run-ex5: 05-exercise.exe
	./05-exercise.exe

run-ex6: 06-exercise.exe
	./06-exercise.exe

# Clean compiled files
clean:
	rm -f *.exe
	@echo "Cleaned all compiled files"

# Help target
help:
	@echo "Phase 1 - Foundations Makefile"
	@echo "=============================="
	@echo ""
	@echo "Available targets:"
	@echo "  all        - Compile all files (learning + exercises)"
	@echo "  learning   - Compile only learning files"
	@echo "  exercises  - Compile only exercise files"
	@echo "  clean      - Remove all compiled files"
	@echo ""
	@echo "Individual learning files:"
	@echo "  hello      - Compile 01-hello-world.c"
	@echo "  variables  - Compile 02-variables.c"
	@echo "  io         - Compile 03-input-output.c"
	@echo "  operators  - Compile 04-operators.c"
	@echo "  conditionals - Compile 05-conditionals.c"
	@echo "  loops      - Compile 06-loops.c"
	@echo "  practice   - Compile 07-practice.c"
	@echo ""
	@echo "Individual exercise files:"
	@echo "  ex1        - Compile 01-exercise.c"
	@echo "  ex2        - Compile 02-exercise.c"
	@echo "  ex3        - Compile 03-exercise.c"
	@echo "  ex4        - Compile 04-exercise.c"
	@echo "  ex5        - Compile 05-exercise.c"
	@echo "  ex6        - Compile 06-exercise.c"
	@echo ""
	@echo "Run programs:"
	@echo "  run-hello, run-variables, run-io, etc."
	@echo "  run-ex1, run-ex2, run-ex3, etc."
	@echo ""
	@echo "RECOMMENDED LEARNING PATH:"
	@echo "  1. make hello && make run-hello"
	@echo "  2. make ex1 && make run-ex1"
	@echo "  3. Continue with variables, io, operators, etc."

# Clean compiled files
clean:
	rm -f *.exe *.o

# Help target
help:
	@echo "Available targets:"
	@echo "  all          - Compile all programs"
	@echo "  hello        - Compile hello world program"
	@echo "  variables    - Compile variables program"
	@echo "  io           - Compile input/output program"
	@echo "  operators    - Compile operators program"
	@echo "  conditionals - Compile conditionals program"
	@echo "  loops        - Compile loops program"
	@echo "  practice     - Compile practice program"
	@echo "  run-<name>   - Compile and run specific program"
	@echo "  clean        - Remove compiled files"
	@echo "  help         - Show this help message"

.PHONY: all clean help run-hello run-variables run-io run-operators run-conditionals run-loops run-practice
