#include <stdio.h>
int main()
{
   float sp;
   float cp;
   float profit;
   float loss;
   float p1;
   float l1;
   printf(" enter cost price and selling price of the product ");
   scanf("%f%f", &cp , &sp);
   if(sp>cp)
   {
    profit=sp-cp;
    p1=(profit/cp)*100;
    printf(" there is a profit of percentage:%2f\n",p1);
   }
   else if(cp>sp)
   {
    loss=cp-sp;
    l1=(loss/cp)*100;
    printf(" there is a loss of percentage:%2f\n", l1);
   }
   else 
   {
    printf(" there is no loss or profit as cost price is equal to sale price ");
   }
   return 0;
   
}
