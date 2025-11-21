#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, pos, value, i, search, found;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) { // CREATE
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
        }

        else if (choice == 2) { // DISPLAY
            printf("Array elements are:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else if (choice == 3) { // INSERT
            printf("Enter position (0 to %d): ", n);
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);
            for (i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;
        }

        else if (choice == 4) { // DELETE
            printf("Enter position (0 to %d): ", n - 1);
            scanf("%d", &pos);
            for (i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }

        else if (choice == 5) { // LINEAR SEARCH
            printf("Enter value to search: ");
            scanf("%d", &search);
            found = 0;
            for (i = 0; i < n; i++) {
                if (arr[i] == search) {
                    printf("Found at position %d\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Not found\n");
            }
        }

        else if (choice == 6) {
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
