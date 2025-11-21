#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character if fgets captures it
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Bubble sort to arrange characters
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("String in alphabetical order: %s\n", str);

    return 0;
}
