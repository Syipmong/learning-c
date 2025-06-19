/*
 * Exercise 10: File I/O and Data Persistence
 * 
 * This exercise helps you practice:
 * - File opening and closing
 * - Reading and writing text files
 * - Binary file operations
 * - File positioning and seeking
 * - Error handling with files
 * - CSV and structured data handling
 * 
 * Complete the tasks below step by step.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student records
struct Student {
    int id;
    char name[50];
    float gpa;
    int age;
};

// Function prototypes
void writeStudentToFile(const char *filename, struct Student *students, int count);
int readStudentsFromFile(const char *filename, struct Student *students, int max_count);
void appendToFile(const char *filename, const char *text);
void copyFile(const char *source, const char *destination);
void demonstrateBinaryIO();
void processCSVFile();

int main() {
    printf("=== Exercise 10: File I/O Practice ===\n\n");
    
    // Task 1: Basic File Writing
    printf("Task 1: Writing to Text Files\n");
    
    FILE *file = fopen("hello.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing!\n");
        return 1;
    }
    
    fprintf(file, "Hello, File I/O!\n");
    fprintf(file, "This is line 2.\n");
    fprintf(file, "Numbers: %d, %.2f\n", 42, 3.14159);
    
    fclose(file);
    printf("Successfully wrote to hello.txt\n\n");
    
    // Task 2: Basic File Reading
    printf("Task 2: Reading from Text Files\n");
    
    file = fopen("hello.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }
    
    char buffer[100];
    printf("Contents of hello.txt:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    printf("\n");
    
    // Task 3: Writing and Reading Numbers
    printf("Task 3: Numeric File Operations\n");
    
    // Write numbers to file
    file = fopen("numbers.txt", "w");
    if (file != NULL) {
        for (int i = 1; i <= 10; i++) {
            fprintf(file, "%d %d %d\\n", i, i*i, i*i*i);
        }
        fclose(file);
    }
    
    // Read and display numbers
    file = fopen("numbers.txt", "r");
    if (file != NULL) {
        int num, square, cube;
        printf("Number  Square  Cube\\n");
        printf("-------------------\\n");
        
        while (fscanf(file, "%d %d %d", &num, &square, &cube) == 3) {
            printf("%-7d %-7d %-7d\\n", num, square, cube);
        }
        fclose(file);
    }
    printf("\\n");
    
    // Task 4: Student Records Management
    printf("Task 4: Student Records File Management\\n");
    
    struct Student students[] = {
        {101, "Alice Johnson", 3.75, 20},
        {102, "Bob Smith", 3.25, 19},
        {103, "Charlie Brown", 3.80, 21},
        {104, "Diana Prince", 3.90, 20},
        {105, "Eve Adams", 3.60, 22}
    };
    
    // Write students to file
    writeStudentToFile("students.txt", students, 5);
    printf("Student records written to students.txt\\n");
    
    // Read students from file
    struct Student read_students[10];
    int count = readStudentsFromFile("students.txt", read_students, 10);
    
    printf("Read %d student records:\\n", count);
    printf("%-5s %-15s %-5s %-5s\\n", "ID", "Name", "GPA", "Age");
    printf("--------------------------------------\\n");
    
    for (int i = 0; i < count; i++) {
        printf("%-5d %-15s %-5.2f %-5d\\n", 
               read_students[i].id, read_students[i].name, 
               read_students[i].gpa, read_students[i].age);
    }
    printf("\\n");
    
    // Task 5: File Appending
    printf("Task 5: Appending to Files\\n");
    
    appendToFile("log.txt", "Application started\\n");
    appendToFile("log.txt", "Processing data...\\n");
    appendToFile("log.txt", "Operation completed successfully\\n");
    
    // Read and display log
    file = fopen("log.txt", "r");
    if (file != NULL) {
        printf("Log file contents:\\n");
        char line[100];
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        fclose(file);
    }
    printf("\\n");
    
    // Task 6: File Copying
    printf("Task 6: File Copying\\n");
    
    copyFile("students.txt", "students_backup.txt");
    printf("Copied students.txt to students_backup.txt\\n\\n");
    
    // Task 7: Binary File Operations
    printf("Task 7: Binary File Operations\\n");
    demonstrateBinaryIO();
    printf("\\n");
    
    // Task 8: CSV File Processing
    printf("Task 8: CSV File Processing\\n");
    processCSVFile();
    printf("\\n");
    
    // Task 9: File Statistics
    printf("Task 9: File Statistics\\n");
    
    file = fopen("students.txt", "r");
    if (file != NULL) {
        int lines = 0, words = 0, chars = 0;
        char ch;
        int in_word = 0;
        
        while ((ch = fgetc(file)) != EOF) {
            chars++;
            
            if (ch == '\\n') {
                lines++;
            }
            
            if (ch == ' ' || ch == '\\t' || ch == '\\n') {
                in_word = 0;
            } else if (!in_word) {
                words++;
                in_word = 1;
            }
        }
        
        fclose(file);
        
        printf("students.txt statistics:\\n");
        printf("Lines: %d\\n", lines);
        printf("Words: %d\\n", words);
        printf("Characters: %d\\n", chars);
    }
    printf("\\n");
    
    // Task 10: Error Handling and File Validation
    printf("Task 10: Error Handling\\n");
    
    // Try to open non-existent file
    file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        perror("Error opening nonexistent.txt");
    } else {
        fclose(file);
    }
    
    // Try to write to read-only file (if it exists)
    file = fopen("students.txt", "r");
    if (file != NULL) {
        if (fprintf(file, "This should fail") < 0) {
            printf("Cannot write to read-only file\\n");
        }
        fclose(file);
    }
    
    printf("\\nFile I/O exercise completed!\\n");
    
    return 0;
}

// Function implementations
void writeStudentToFile(const char *filename, struct Student *students, int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open %s for writing!\\n", filename);
        return;
    }
    
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\\t%s\\t%.2f\\t%d\\n", 
                students[i].id, students[i].name, 
                students[i].gpa, students[i].age);
    }
    
    fclose(file);
}

int readStudentsFromFile(const char *filename, struct Student *students, int max_count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open %s for reading!\\n", filename);
        return 0;
    }
    
    int count = 0;
    while (count < max_count && 
           fscanf(file, "%d\\t%[^\\t]\\t%f\\t%d\\n", 
                  &students[count].id, students[count].name, 
                  &students[count].gpa, &students[count].age) == 4) {
        count++;
    }
    
    fclose(file);
    return count;
}

void appendToFile(const char *filename, const char *text) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open %s for appending!\\n", filename);
        return;
    }
    
    fprintf(file, "%s", text);
    fclose(file);
}

void copyFile(const char *source, const char *destination) {
    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s!\\n", source);
        return;
    }
    
    FILE *dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file %s!\\n", destination);
        fclose(src);
        return;
    }
    
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    
    fclose(src);
    fclose(dest);
}

void demonstrateBinaryIO() {
    // Write binary data
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Error opening binary file for writing!\\n");
        return;
    }
    
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fwrite(numbers, sizeof(int), 10, file);
    fclose(file);
    
    // Read binary data
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error opening binary file for reading!\\n");
        return;
    }
    
    int read_numbers[10];
    size_t read_count = fread(read_numbers, sizeof(int), 10, file);
    fclose(file);
    
    printf("Binary file contents (%zu numbers):\\n", read_count);
    for (size_t i = 0; i < read_count; i++) {
        printf("%d ", read_numbers[i]);
    }
    printf("\\n");
    
    // Demonstrate file positioning
    file = fopen("data.bin", "rb");
    if (file != NULL) {
        // Seek to 3rd integer (index 2)
        fseek(file, 2 * sizeof(int), SEEK_SET);
        
        int value;
        fread(&value, sizeof(int), 1, file);
        printf("Value at position 2: %d\\n", value);
        
        // Get current position
        long pos = ftell(file);
        printf("Current file position: %ld bytes\\n", pos);
        
        fclose(file);
    }
}

void processCSVFile() {
    // Create a sample CSV file
    FILE *file = fopen("grades.csv", "w");
    if (file != NULL) {
        fprintf(file, "Name,Math,Science,English\\n");
        fprintf(file, "Alice,85,90,88\\n");
        fprintf(file, "Bob,78,82,80\\n");
        fprintf(file, "Charlie,92,89,94\\n");
        fprintf(file, "Diana,88,86,90\\n");
        fclose(file);
    }
    
    // Read and process CSV file
    file = fopen("grades.csv", "r");
    if (file == NULL) {
        printf("Error opening CSV file!\\n");
        return;
    }
    
    char line[200];
    int line_number = 0;
    
    printf("Processing grades.csv:\\n");
    
    while (fgets(line, sizeof(line), file) != NULL) {
        line_number++;
        
        if (line_number == 1) {
            printf("Header: %s", line);
            continue;
        }
        
        // Parse CSV line
        char name[50];
        int math, science, english;
        
        if (sscanf(line, "%[^,],%d,%d,%d", name, &math, &science, &english) == 4) {
            float average = (math + science + english) / 3.0;
            printf("%-10s: Math=%d, Science=%d, English=%d, Average=%.1f\\n", 
                   name, math, science, english, average);
        }
    }
    
    fclose(file);
}

/*
 * Additional Practice Tasks:
 * 
 * TODO: Implement these file I/O programs:
 * 
 * 1. Text File Analyzer:
 *    - Count words, lines, paragraphs
 *    - Find longest word and line
 *    - Character frequency analysis
 * 
 * 2. Configuration File Handler:
 *    - Read key=value pairs from config file
 *    - Update configuration values
 *    - Validate configuration format
 * 
 * 3. Log File Manager:
 *    - Timestamped log entries
 *    - Log rotation (archive old logs)
 *    - Log level filtering
 * 
 * 4. Data Serialization:
 *    - Save/load structures to/from binary files
 *    - Handle endianness issues
 *    - Version compatibility
 * 
 * 5. File Encryption/Decryption:
 *    - Simple XOR cipher
 *    - Read/write encrypted files
 *    - Key management
 * 
 * 6. Database-like File System:
 *    - Fixed-length record files
 *    - Index files for fast searching
 *    - Record insertion, deletion, updates
 * 
 * 7. File Compression Utility:
 *    - Simple run-length encoding
 *    - Compress/decompress text files
 *    - Compare file sizes
 */

/*
 * Advanced Challenges:
 * 
 * 1. Implement a simple file-based database
 * 2. Create a text-based spreadsheet program
 * 3. Build a file synchronization utility
 * 4. Implement a basic version control system
 * 5. Create a log parsing and analysis tool
 * 6. Build a file indexing and search system
 * 7. Implement memory-mapped file I/O
 * 8. Create a binary file format with headers
 * 
 * Practice Questions:
 * 
 * 1. What's the difference between text and binary file modes?
 * 2. When should you use fgets() vs fscanf() vs fread()?
 * 3. How do you handle different line endings (\\n vs \\r\\n)?
 * 4. What's the purpose of fflush() and when do you need it?
 * 5. How do you handle large files that don't fit in memory?
 * 6. What's the difference between fseek() and rewind()?
 * 7. How do you check for end-of-file vs read errors?
 * 8. What happens to file pointers when you fork a process?
 * 
 * File I/O Best Practices:
 * 
 * 1. Always check if file operations succeed
 * 2. Close files when you're done with them
 * 3. Use appropriate file modes for your needs
 * 4. Handle errors gracefully with meaningful messages
 * 5. Consider file locking for concurrent access
 * 6. Validate file formats before processing
 * 7. Use buffered I/O for better performance
 * 8. Consider portability issues with file paths
 * 
 * Compilation:
 * gcc exercise10-fileio.c -o exercise10-fileio
 * 
 * Learning Objectives:
 * - Master file opening, reading, and writing
 * - Understand text vs binary file operations
 * - Learn file positioning and seeking
 * - Practice structured data file handling
 * - Develop error handling skills
 * - Build file-based applications
 */
