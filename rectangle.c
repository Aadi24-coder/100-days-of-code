#include <stdio.h>
int main()
{
    int l;
    int b;
    int area;
    int peri;
    printf(" enter length and breath of rectangle");
    scanf("%d%d" , &l,&b);
    area=l*b;
    peri=2*(l+b);
    printf(" area of rectangle is %d\n",area);
    printf(" perimeter of rectangle is %d\n" , peri);
    return 0;
}