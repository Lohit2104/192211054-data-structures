#include <stdio.h>
#include <string.h>

int isValidString(const char *str) {
    if (str == NULL || strlen(str) == 0) {
        return 0; // Invalid string
    } else {
        return 1; // Valid string
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input
    inputString[strcspn(inputString, "\n")] = '\0';

    if (isValidString(inputString)) {
        printf("The string is valid: %s\n", inputString);
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}
