#include <stdio.h>

int main() {
    int m, n, p, t1, t2, i, j, k, x;
    int A[100][3], B[100][3], C[100][3];
    int temp[100][100] = {0};

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter number of non-zero elements in Matrix A: ");
    scanf("%d", &t1);
    printf("Enter triplet for Matrix A (row col value):\n");
    for (i = 0; i < t1; i++) scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &n, &p);

    printf("Enter number of non-zero elements in Matrix B: ");
    scanf("%d", &t2);
    printf("Enter triplet for Matrix B (row col value):\n");
    for (i = 0; i < t2; i++) scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);

    // Multiplication logic (convert to normal using temp first)
    for (i = 0; i < t1; i++) {
        for (j = 0; j < t2; j++) {
            if (A[i][1] == B[j][0]) {
                temp[A[i][0]][B[j][1]] += A[i][2] * B[j][2];
            }
        }
    }

    // Convert back to triplet
    k = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            if (temp[i][j] != 0) {
                C[k][0] = i;
                C[k][1] = j;
                C[k][2] = temp[i][j];
                k++;
            }
        }
    }

    printf("Resultant Matrix (triplet form):\n");
    for (x = 0; x < k; x++) {
        printf("%d %d %d\n", C[x][0], C[x][1], C[x][2]);
    }

    return 0;
}
