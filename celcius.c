#include <stdio.h>
int main()
{
    float c;
    float f;
    printf(" enter temperature in celcius ");
    scanf("%f", &c);
    f= (9.0/5.0 * c) + 32.0;
    printf(" temperature in fehrenhite is : %2f\n", f);
    return 0;

}