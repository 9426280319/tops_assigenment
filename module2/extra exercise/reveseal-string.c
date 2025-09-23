#include <stdio.h>

void reverseString(char str[]) {
    int i, len = 0;
    char temp;

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }

    // Swap characters
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    reverseString(str);
    printf("Reversed string: %s\n", str);
}

