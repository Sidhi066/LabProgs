#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';

    printf("Reversed string: %s\n", reversed);
    return 0;
}
