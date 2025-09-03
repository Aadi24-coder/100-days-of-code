#include <stdio.h>
int main()
{
    int n;
    printf(" enter the value of n ");
    scanf("%d " , &n);
    int sum=0;
    for(int i =1;i<=n;i++)
    {
     sum += (2 * i - 1);
    }
     printf("sum of first n odd numbers is %d ", sum);
    return 0;
}