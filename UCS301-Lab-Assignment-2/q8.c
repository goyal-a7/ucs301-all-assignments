#include <stdio.h>

int main() {
    int arr[100], n, i, j, count = 0, unique;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        unique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if (unique) count++;
    }

    printf("Total distinct elements = %d\n", count);
    return 0;
}
