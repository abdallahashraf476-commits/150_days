#include <stdio.h>
#include <string.h>

int main() {
    char input[50];
    char secret[] = "AAServices_Root_99!";

    printf("Enter Vault Password: ");
    scanf("%49s", input);

    if (strcmp(input, secret) == 0) {
        printf("Access Granted. Welcome to the system.\n");
    } else {
        printf("Access Denied.\n");
    }
    return 0;
}