#include <stdio.h>
#include <string.h>

int isPalindromeString(char str[]) {
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0;   // not palindrome
    }
    return 1; // palindrome
}

main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindromeString(str))
        printf("%s is a Palindrome String\n", str);
    else
        printf("%s is NOT a Palindrome String\n", str);
}

