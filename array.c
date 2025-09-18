#include <stdio.h>
int main()
{
    printf("Enter number of elements in an array (max 10):\n");
    int n;
    scanf("%d", &n);

    int a[10];
    int size = sizeof(a) / sizeof(a[0]);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Print elements
    printf("The elements of the array are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
