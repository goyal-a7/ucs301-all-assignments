#include <stdio.h>

int main() {
    int m, n, t1, t2, i, j, k;
    int A[100][3], B[100][3], C[100][3];

    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &m, &n);

    printf("Enter number of non-zero elements in Matrix A: ");
    scanf("%d", &t1);
    printf("Enter triplet for Matrix A (row col value):\n");
    for (i = 0; i < t1; i++) scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);

    printf("Enter number of non-zero elements in Matrix B: ");
    scanf("%d", &t2);
    printf("Enter triplet for Matrix B (row col value):\n");
    for (i = 0; i < t2; i++) scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);

    i = j = k = 0;
    while (i < t1 && j < t2) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0]; C[k][1] = A[i][1]; C[k][2] = A[i][2];
            i++; k++;
        }
        else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
            C[k][0] = B[j][0]; C[k][1] = B[j][1]; C[k][2] = B[j][2];
            j++; k++;
        }
        else {
            C[k][0] = A[i][0]; C[k][1] = A[i][1]; 
            C[k][2] = A[i][2] + B[j][2];
            i++; j++; k++;
        }
    }

    while (i < t1) { C[k][0] = A[i][0]; C[k][1] = A[i][1]; C[k][2] = A[i][2]; i++; k++; }
    while (j < t2) { C[k][0] = B[j][0]; C[k][1] = B[j][1]; C[k][2] = B[j][2]; j++; k++; }

    printf("Resultant Matrix (triplet form):\n");
    for (i = 0; i < k; i++) {
        printf("%d %d %d\n", C[i][0], C[i][1], C[i][2]);
    }

    return 0;
}
