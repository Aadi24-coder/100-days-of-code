#include <stdio.h>
int main()
{
    int a;
    printf(" enter a number ");
    scanf("%d" , &a);
     int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("the factorial of the number is %d\n",f);
    return 0; 
}