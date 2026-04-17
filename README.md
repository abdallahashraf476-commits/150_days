# Day 2: Dynamic Binary Analysis

## The Objective
Demonstrate how to extract hardcoded credentials from a compiled C binary without needing to decompile the source code or read Assembly.

## Tools Used
* **Kali Linux**
* **GCC** (GNU Compiler Collection)
* **ltrace** (Library call tracer)

## The Exploit
When a C program compares user input to a hardcoded string, it typically uses the standard library function `strcmp`. By running the binary through `ltrace`, I was able to wiretap the CPU's memory calls in real-time. 

1. Compiled the target `vault.c` binary.
2. Executed `ltrace ./vault`.
3. Inputted a dummy password (`hacker123`).
4. Intercepted the `strcmp` call, which exposed the hardcoded password (`AAServices_Root_99!`) in plain text as it attempted to compare it against the dummy input.

## Proof
![ltrace execution](day2_ltrace.png)
