#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[100];
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        // classify number
        if (a[i] >= 0)
            positive++;
        else
            negative++;

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display array
    printf("\nThe array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Display results
    printf("Count of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);

    return 0;
}
