# Day 5: Payload Analysis & Magic Bytes

## The Investigation Continues
In Days 1 through 4, we intercepted the malware's network traffic, hooked its library calls, extracted its static flags, and monitored its system-level attempts to steal `/etc/shadow`. But how did this binary bypass the user's initial suspicion? 

The attacker disguised the initial dropper payload. Today's objective is to expose that deception by analyzing the file's raw DNA (Magic Bytes).

## The Exploit
Malware authors frequently bypass human defenses by masquerading executables as harmless files. To simulate the attacker's initial entry vector, I compiled a C binary and disguised it as `vacation_photo.jpg`.

Relying on file extensions is a critical failure in triage. By utilizing the `file` utility and extracting a hex dump with `xxd vacation_photo.jpg | head -n 2`, I bypassed the surface-level disguise. The raw hex signature revealed `7f45 4c46` (ELF), proving mathematically that the file was a compiled Linux executable payload, not a valid JPEG (`ffd8 ffe0`).
