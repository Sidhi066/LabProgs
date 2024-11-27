#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to find: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            printf("First occurrence of '%c' is at position %d\n", ch, i + 1);
            return 0;
        }
        i++;
    }

    printf("Character not found.\n");
    return 0;
}
