#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, total;
    printf("Enter n (array size should be n-1): ");
    scanf("%d", &n);

    printf("Enter %d elements (range 1 to n):\n", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    printf("Missing number is: %d\n", total - sum);
    return 0;
}
