#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf(" enter value of n");
    scanf("%d" , &n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf(" the sum of n natural numbers is %d\n", sum);
    return 0;
}    