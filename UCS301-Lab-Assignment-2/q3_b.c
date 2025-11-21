#include <stdio.h>

int main() {
    int arr[100], n, i, low, high, mid, missing;

    printf("Enter n (array size should be n-1): ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order (range 1 to n):\n", n - 1);
    for (i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    low = 0;
    high = n - 2;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    missing = low + 1;
    printf("Missing number is: %d\n", missing);
    return 0;
}