#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Running system update... Please wait.\n");
    
    // The malware secretly tries to open a sensitive file
    FILE *file = fopen("/etc/shadow", "r");
    if (file) {
        printf("Wait, how did I get access to this?!\n");
        fclose(file);
    }
    
    printf("Update complete!\n");
    return 0;
}