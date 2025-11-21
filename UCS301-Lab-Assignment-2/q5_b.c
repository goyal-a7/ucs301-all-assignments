#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int size = 3 * n - 2;  // required space
    int tri[size];

    printf("Enter elements of tri-diagonal matrix:\n");
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);

            if (i == j || i == j - 1 || i == j + 1) {
                tri[k++] = x;   // store only non-zero positions
            }
        }
    }

    printf("\nStored tri-diagonal elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tri[i]);
    }
    printf("\n");

    return 0;
}
