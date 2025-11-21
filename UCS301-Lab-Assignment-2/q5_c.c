#include <stdio.h>

int main() {
    int n;
    printf("Enter order of lower triangular matrix: ");
    scanf("%d", &n);

    int size = n * (n + 1) / 2;
    int lower[size];

    printf("Enter elements row by row:\n");
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if (i >= j) lower[k++] = x;
        }
    }

    printf("Stored elements: ");
    for (int i = 0; i < size; i++) printf("%d ", lower[i]);
    return 0;
}
