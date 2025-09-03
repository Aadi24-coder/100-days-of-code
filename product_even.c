#include <stdio.h>
int main()
{
   int product =1;
   int n;
   printf(" enter the value of n ");
   scanf("%d" , &n);
   for(int i =1;i<=n;i++)
   {
     if(i%2==0)
     {
        product = i*product ;
     }
   }
   printf(" the product of first even numbers is %d\n" , product );
   return 0;
}