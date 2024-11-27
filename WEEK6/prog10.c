#include <stdio.h>

int main() {
    char str[100], newStr[101], ch;
    int position, i, length = 0;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to insert: ");
    scanf("%c", &ch);
    printf("Enter the position to insert (1-based index): ");
    scanf("%d", &position);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < position - 1; i++) {
        newStr[i] = str[i];
    }
    newStr[i] = ch;

    for (; i < length; i++) {
        newStr[i + 1] = str[i];
    }
    newStr[length + 1] = '\0';

    printf("String after insertion: %s\n", newStr);
    return 0;
}
