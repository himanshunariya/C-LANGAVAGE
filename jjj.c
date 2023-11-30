#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (*str) {
        reverseString(str + 1);
        putchar(*str);
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    printf("Reversed string: ");
    reverseString(input);
    printf("\n");

    return 0;
}