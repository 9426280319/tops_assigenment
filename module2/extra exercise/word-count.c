#include <stdio.h>
#include <string.h>

main() {
    char str[200];
    char longest[50], current[50];
    int i, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';   // word complete
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, current);
            }
            j = 0; // reset for next word
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
}

