#include <stdio.h>
int main()
{
    int r;
    int a;
    int s=0;
printf("enter a number");
scanf("%d" , &a);
for(int i =a;i>0;i=i/10)
{
    r=i%10;
    s=s*10+r;
}
printf(" the reversed number is :%d\n" , s);
return 0;
}