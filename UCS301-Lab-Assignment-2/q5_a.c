#include <stdio.h>
int main() {
    int n, i;
    printf("Enter order of diagonal matrix: ");
    scanf("%d", &n);
    int diag[n];
    printf("Enter diagonal elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &diag[i]);
    }

    printf("Reconstructed Matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                printf("%d ", diag[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}

