#include <stdio.h>
int main()
{
   char ch;
   printf(" enter a character ");
   scanf("%c", &ch);
   if(ch=='A'||ch<='Z')
   {
    printf(" uppercase letter ");
   }
   else if(ch=='a'||ch<='z')
   {
    printf(" lowercase letter ");
   }
  else if(ch=='0'||ch<='9')
   {
    printf(" it is a digit ");
   }
   else{
    printf(" it is a speacial character ");
   }
   return 0;
}