#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter the value of n ");
    int n;
    scanf("%d\n" ,&n);
    for(int i=2;i<=n;i++)
    {
        if(i%2==1 || i==2)
        {
          printf("%d" ,i);
        }
    } 
    return 0;
}