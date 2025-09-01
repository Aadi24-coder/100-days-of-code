#include <stdio.h>
int main()
{
    int fine;
    int late;
    printf(" enter number of late days ");
    scanf("%d" , &late);
    if(late < 5)
    {
       fine = late *2;
       printf(" fine is : %d" , fine);
   }
   else if (late >5 &&late<10)
   {
    fine =late*4;
     printf(" fine is : %d" , fine);
   }
   else if(late>10&&late<20 )
   {
    fine=late*6;
     printf(" fine is : %d" , fine);
   }
   else 
   {
    printf(" your membership is cancelled ");
   }
   return 0;
}
