#include <stdio.h>
int main()
{
    int n;
    int prime =1;
    printf(" enter a number ");
    scanf("%d" , &n);
    if(n<=1)
     {
        prime=0;
     }
     else
     {
    for(int i =2;i<=n/2;i++)
    {
       if(n%i==0)
       {
     prime =0;
     break;
       }
    }
}
    if(prime==1)
    {
        printf(" it is a prime number ");
        }
        else 
        {
            printf(" not a prime number");
        }

return 0;
}