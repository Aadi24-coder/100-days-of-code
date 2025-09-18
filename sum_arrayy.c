#include <stdio.h>
int main()
{
    int n;
    printf(" enter number of elements in an array\n");
    scanf("%d",&n);
    int sum=0;
    int a[100];
    printf("enter %d elements in array:\n",n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" the elements of the array are\n");
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf(" the sum of the array is\n");
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;

}