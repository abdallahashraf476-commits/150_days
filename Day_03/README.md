# Day 3: Static Binary Analysis

## The Objective
Extract hardcoded sensitive data (secrets, passwords, or flags) from a compiled C binary without executing the program or possessing the source code.

## Tools Used
* **Kali Linux**
* **strings** (Extracts human-readable characters from raw binary files)
* **grep** (Filters output for specific text patterns)

## The Exploit
When a developer hardcodes a string in C, the compiler packs it directly into the final executable. Even though the file is mostly unreadable machine code, the ASCII text remains intact.

Instead of running the program (Dynamic Analysis), I performed Static Analysis by scanning the raw 0s and 1s of the binary. By executing the pipeline `strings secret | grep FLAG`, I bypassed the program's normal execution flow and directly extracted the hidden string: `FLAG{STATIC_ANALYSIS_MASTER_2026}`.
