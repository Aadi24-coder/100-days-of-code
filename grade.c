#include <stdio.h>
int main()
{
    float p;
    printf(" enter your percentage ");
    scanf("%f" , &p);
    if(p>=90)
    {
        printf(" your grade is A ");
    }
    else if(p>=80&&p<90)
    {
        printf(" your grade is B");
    }
    else if(p>=70&&p<79)
    {
        printf(" your grade is C ");
    }
    else 
    {
        printf(" your grade is D");
    }
    return 0;
}