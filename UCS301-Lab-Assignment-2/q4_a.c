#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i, j;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline added by fgets if present
    if (s1[strlen(s1) - 1] == '\n') s1[strlen(s1) - 1] = '\0';
    if (s2[strlen(s2) - 1] == '\n') s2[strlen(s2) - 1] = '\0';

    
    for (i = 0; s1[i] != '\0'; i++);

    for (j = 0; s2[j] != '\0'; j++) {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';

    printf("Concatenated String: %s\n", s1);

    return 0;
}
