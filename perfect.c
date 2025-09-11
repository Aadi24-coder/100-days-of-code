#include <stdio.h>
int main()
{
    int a;
    printf(" enter a number ");
    scanf("%d" ,&a);
    int f=0;
    int sum=0;
    for(int i =1;i<=a/2;i++)
    {
      if(a%i==0)
      f=i;
        sum=sum+f;
    } 
    if(sum==a)
    {
        printf(" it is a perfect number ");

    }
    else
    {
        printf(" it is not a perfect number ");
    }
    return 0;
}