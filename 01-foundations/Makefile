# Makefile for Phase 1 - Foundations
# This makefile helps compile all the C programs in this phase

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGET_DIR = .
SOURCES = $(wildcard *.c)
TARGETS = $(SOURCES:.c=.exe)

# Default target - compile all programs
all: $(TARGETS)

# Rule to compile each .c file to .exe
%.exe: %.c
	$(CC) $(CFLAGS) $< -o $@
	@echo "Compiled $< to $@"

# Individual targets for easy compilation
hello: 01-hello-world.exe
variables: 02-variables.exe
io: 03-input-output.exe
operators: 04-operators.exe
conditionals: 05-conditionals.exe
loops: 06-loops.exe
practice: 07-practice.exe

# Run targets
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
