# Phase 5: System Programming
*Operating System Interaction and Low-Level Programming*

## 📖 Learning Objectives

By the end of this phase, you will understand:
- System calls and operating system interaction
- Process creation, management, and communication
- Thread programming and synchronization
- Signal handling and inter-process communication
- Network programming fundamentals
- File system operations and permissions
- Memory mapping and shared memory
- System-level debugging and monitoring

## 📁 Files in This Section

1. **01-system-calls.c** - Basic system calls (open, read, write, close)
2. **02-process-management.c** - Process creation with fork() and exec()
3. **03-pipes-communication.c** - Pipes and named pipes (FIFOs)
4. **04-signals.c** - Signal handling and process communication
5. **05-threading.c** - POSIX threads (pthreads) basics
6. **06-thread-synchronization.c** - Mutexes, semaphores, condition variables
7. **07-shared-memory.c** - Memory mapping and shared memory segments
8. **08-network-client.c** - TCP/UDP client programming
9. **09-network-server.c** - TCP/UDP server programming
10. **10-file-system.c** - Directory operations, file permissions, metadata
11. **11-system-monitoring.c** - System resource monitoring
12. **12-practice-project/** - Multi-process chat server with threading

## 🎯 Key Concepts

### System Calls
```c
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

// File operations using system calls
int fd = open("file.txt", O_RDONLY);
if (fd != -1) {
    char buffer[1024];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read > 0) {
        buffer[bytes_read] = '\0';
        printf("Read: %s\n", buffer);
    }
    close(fd);
}
```

### Process Management
```c
#include <sys/wait.h>

pid_t pid = fork();
if (pid == 0) {
    // Child process
    execl("/bin/ls", "ls", "-l", NULL);
    perror("exec failed");
    exit(1);
} else if (pid > 0) {
    // Parent process
    int status;
    wait(&status);
    printf("Child exited with status %d\n", WEXITSTATUS(status));
} else {
    perror("fork failed");
}
```

### Threading
```c
#include <pthread.h>

void* thread_function(void* arg) {
    int thread_id = *(int*)arg;
    printf("Thread %d is running\n", thread_id);
    return NULL;
}

int main() {
    pthread_t threads[4];
    int thread_ids[4];
    
    for (int i = 0; i < 4; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        pthread_join(threads[i], NULL);
    }
    
    return 0;
}
```

### Network Programming
```c
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

// TCP Client
int sock = socket(AF_INET, SOCK_STREAM, 0);
struct sockaddr_in server_addr;
server_addr.sin_family = AF_INET;
server_addr.sin_port = htons(8080);
inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

if (connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) == 0) {
    send(sock, "Hello Server", 12, 0);
    char buffer[1024];
    recv(sock, buffer, sizeof(buffer), 0);
}
close(sock);
```

## 📋 Phase Prerequisites

Before starting this phase, ensure you have mastered:
- ✅ Phase 4 - Advanced
- ✅ Data structures and algorithms
- ✅ Memory management and optimization
- ✅ Multi-file project organization
- ✅ Error handling and debugging
- ✅ Performance analysis

## 🎯 Learning Sequence

### Week 13: System Calls and Processes
- **Day 1-2**: Basic system calls and file operations
- **Day 3-4**: Process creation and management
- **Day 5-7**: Inter-process communication (pipes, signals)

### Week 14: Threading and Synchronization
- **Day 1-2**: Thread creation and basic threading
- **Day 3-4**: Thread synchronization primitives
- **Day 5-7**: Shared memory and advanced IPC

### Week 15: Network Programming
- **Day 1-2**: Socket programming basics
- **Day 3-4**: Client-server applications
- **Day 5-7**: Complete multi-client server project

## 🚀 Getting Started

### Platform-Specific Setup

#### Linux/Unix/macOS
```bash
# Compile with threading support
gcc -Wall -Wextra -std=c99 -pthread filename.c -o filename
./filename

# Compile with network libraries
gcc -Wall -Wextra -std=c99 filename.c -o filename
./filename
```

#### Windows (MinGW/WSL)
```bash
# Some features may require WSL or Cygwin
# Threading support
gcc -Wall -Wextra -std=c99 -lpthread filename.c -o filename.exe

# Network programming
gcc -Wall -Wextra -std=c99 -lws2_32 filename.c -o filename.exe  # Windows
```

### Testing Environment
```bash
# Check available system resources
ulimit -a

# Monitor system calls
strace ./program    # Linux
dtruss ./program    # macOS

# Monitor network connections
netstat -an | grep :8080
```

## 💡 Important Concepts

### System Programming Principles
- **Error Handling**: Always check return values from system calls
- **Resource Management**: Close files, sockets, and free resources
- **Portability**: Handle platform differences gracefully
- **Security**: Validate inputs and handle permissions correctly
- **Performance**: Understand system overhead and optimization

### Process vs Threads
- **Processes**: Separate memory space, expensive to create, robust isolation
- **Threads**: Shared memory space, lightweight, careful synchronization needed
- **Use Cases**: Processes for isolation, threads for concurrent computation

### Synchronization Mechanisms
- **Mutexes**: Mutual exclusion for critical sections
- **Semaphores**: Counting mechanism for resource access
- **Condition Variables**: Wait for specific conditions
- **Read-Write Locks**: Multiple readers, single writer

## 📝 Practice Exercises

### System Calls and Processes
1. Build a file copy utility using system calls
2. Create a process monitor that tracks child processes
3. Implement a simple shell with command execution
4. Build a log file analyzer with multiple processes
5. Create a directory synchronization tool

### Threading
1. Implement a thread pool for task execution
2. Build a producer-consumer system with multiple threads
3. Create a parallel sorting algorithm
4. Implement a web crawler with worker threads
5. Build a real-time data processing pipeline

### Network Programming
1. Create a simple echo server and client
2. Build a file transfer protocol
3. Implement a chat server with multiple clients
4. Create a HTTP server for static files
5. Build a distributed task processing system

### Advanced System Programming
1. Implement a process scheduler simulator
2. Create a memory manager with allocation tracking
3. Build a simple database with concurrent access
4. Implement a distributed hash table
5. Create a monitoring system for system resources

## 🔧 Debugging and Monitoring Tools

### System Call Tracing
- **strace** (Linux): Trace system calls and signals
- **dtruss** (macOS): Dynamic tracing of system calls
- **Process Monitor** (Windows): File and registry monitoring

### Network Debugging
- **tcpdump**: Network packet capture and analysis
- **Wireshark**: GUI network protocol analyzer
- **netstat**: Network connection monitoring
- **lsof**: List open files and network connections

### Performance Monitoring
- **top/htop**: Process and system monitoring
- **iotop**: I/O monitoring by process
- **sar**: System activity reporter
- **perf**: Performance analysis tools

### Threading Debugging
- **gdb**: GNU debugger with thread support
- **Helgrind**: Thread error detector (Valgrind)
- **ThreadSanitizer**: Thread race condition detector

## 🎓 Phase Completion Criteria

You are ready for Phase 6 when you can:
- [ ] Use system calls for file and process operations
- [ ] Create and manage multiple processes effectively
- [ ] Implement inter-process communication mechanisms
- [ ] Handle signals and asynchronous events
- [ ] Create multi-threaded applications with proper synchronization
- [ ] Implement network client-server applications
- [ ] Use shared memory and memory mapping
- [ ] Debug system-level issues and race conditions
- [ ] Monitor system resources and performance
- [ ] Complete the multi-process chat server project

## 🔗 Phase Connections

### From Phase 4
- Builds on: Data structures, algorithms, performance optimization
- Extends: System interaction and concurrent programming

### To Phase 6
- Prepares for: Large-scale application architecture
- Enables: Scalable system design and deployment
- Foundation for: Enterprise application development

## 📚 Additional Resources

### Books
- **"Advanced Programming in the UNIX Environment"** by Stevens & Rago
- **"The Linux Programming Interface"** by Michael Kerrisk
- **"Programming with POSIX Threads"** by David Butenhof
- **"Unix Network Programming"** by W. Richard Stevens

### System Programming References
- **POSIX Standards**: Portable operating system interface
- **Linux System Call Manual**: man pages for system calls
- **Network Programming Guides**: Socket programming tutorials
- **Threading Tutorials**: POSIX threads documentation

### Tools and Utilities
- **GDB**: GNU Debugger for system programs
- **Valgrind**: Memory and thread debugging
- **Wireshark**: Network protocol analysis
- **SystemTap**: Dynamic tracing framework

## ⚠️ Common Pitfalls

1. **Race Conditions**: Improper thread synchronization
2. **Deadlocks**: Circular waiting for resources
3. **Resource Leaks**: Not closing files, sockets, or threads
4. **Signal Handling**: Unsafe functions in signal handlers
5. **Buffer Overflows**: Network input validation
6. **Privilege Escalation**: Improper permission handling
7. **Platform Dependencies**: Non-portable system calls

## 🌐 Platform Considerations

### Linux/Unix Features
- Rich set of system calls and IPC mechanisms
- Advanced debugging and profiling tools
- Container and virtualization support
- Network namespace isolation

### Windows Considerations
- Different API (Win32) for system programming
- Different threading model and synchronization
- Alternative IPC mechanisms (named pipes, mailslots)
- Different security and permission model

### Portable Programming
- Use POSIX standards when possible
- Abstract platform differences in wrapper functions
- Conditional compilation for platform-specific code
- Test on multiple platforms

---

**Previous:** [Phase 4 - Advanced](../04-advanced/README.md)
**Next:** [Phase 6 - Scalable Applications](../06-scalable-apps/README.md)

**Ready to dive into system programming?** Master the interface between your applications and the operating system! 🚀

**Note**: Some examples in this phase are Unix/Linux specific. Windows equivalents are provided where applicable.
