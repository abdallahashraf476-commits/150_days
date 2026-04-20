# Day 5: File Signatures & Magic Bytes

## The Objective
Identify disguised executables by analyzing their raw hexadecimal headers (Magic Bytes) rather than trusting their file extensions.

## The Exploit
Malware is frequently disguised as harmless documents or images to trick users into executing them. I created a compiled C binary and disguised it as `vacation_photo.jpg`.

By using the `file` utility and generating a hex dump with `xxd vacation_photo.jpg | head -n 2`, I exposed the file's true nature. The hex signature revealed `7f45 4c46` (ELF), proving it was a compiled Linux executable rather than a valid JPEG (`ffd8 ffe0`).
