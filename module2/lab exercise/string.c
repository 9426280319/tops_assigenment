#include <string.h>

main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("\nConcatenated String: %s\n", str1);
    printf("Length of Concatenated String: %d\n", strlen(str1));
}

