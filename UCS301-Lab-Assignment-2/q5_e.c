#include <stdio.h>

int main() {
    int n;
    printf("Enter order of symmetric matrix: ");
    scanf("%d", &n);

    int size = n * (n + 1) / 2;
    int sym[size];

    printf("Enter elements row by row:\n");
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if (i >= j) sym[k++] = x; // store only lower half
        }
    }

    printf("Stored elements: ");
    for (int i = 0; i < size; i++) printf("%d ", sym[i]);
    return 0;
}
