#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed String: %s\n", str);

    return 0;
}
