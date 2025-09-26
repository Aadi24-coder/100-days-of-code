#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[100];  

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int first, second;
    if (a[0] > a[1]) {
        first = a[0];
        second = a[1];
    } else {
        first = a[1];
        second = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    if (n < 2) {
        printf("Not enough elements to find second largest.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
