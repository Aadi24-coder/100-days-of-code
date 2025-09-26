#include <stdio.h>

int main() {
    int arr[100], n, pos, value;

    // Step 1: Take size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Step 2: Take array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Ask position and value to insert
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Step 4: Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 5: Place new value at position
    arr[pos - 1] = value;
    n++;  // increase size of array

    // Step 6: Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
