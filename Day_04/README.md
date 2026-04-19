# Day 4: System Call Tracing (strace)

## The Objective
Identify hidden, malicious file-system activity in a compiled binary by monitoring its interaction with the Linux kernel.

## The Exploit
Malware often hides its true intentions behind fake terminal output. By running the binary through `strace`, I was able to intercept the program's system calls. I successfully caught the binary attempting to silently open the `/etc/shadow` password file in the background.
