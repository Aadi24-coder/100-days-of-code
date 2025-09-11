#include <stdio.h>
int main()
{
    int a;
    printf(" enter a number ");
    scanf("%d" , &a);
    int f =1;
    int sum=0;
    for(int i =1;i<=a;i++)
    {
        f*i;
        sum=sum+f;

    }
    if(sum==a)
    {
        printf(" it is a strong number ");
    }
    else
    {
        printf(" it is not a strongg numeber");
    }
    return 0;
}