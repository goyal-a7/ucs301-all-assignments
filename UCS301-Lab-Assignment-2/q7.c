#include <stdio.h>

int main() {
    int arr[100], n, i, j, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Inversion pairs are:\n");
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }

    printf("Total number of inversions: %d\n", count);

    return 0;
}
