#include <stdio.h>

int main() {
    int m, n, t, i, j, k;
    int triplet[100][3], transpose[100][3];

    printf("Enter rows, columns and number of non-zero elements: ");
    scanf("%d %d %d", &m, &n, &t);

    printf("Enter triplet representation (row col value):\n");
    for (i = 0; i < t; i++) {
        scanf("%d %d %d", &triplet[i][0], &triplet[i][1], &triplet[i][2]);
    }

    // Transpose
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < t; j++) {
            if (triplet[j][1] == i) {
                transpose[k][0] = triplet[j][1];
                transpose[k][1] = triplet[j][0];
                transpose[k][2] = triplet[j][2];
                k++;
            }
        }
    }

    printf("Transpose triplet (row col value):\n");
    for (i = 0; i < k; i++) {
        printf("%d %d %d\n", transpose[i][0], transpose[i][1], transpose[i][2]);
    }

    return 0;
}
