#include <stdio.h>
int main()
{
    int a;
    int b;
    printf(" enter value of a ");
    scanf("%d", &a);
    printf(" enter the value of b");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" swapped numbers are %d%d\n",a,b);
    return 0;
}