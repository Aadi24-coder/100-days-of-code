#include <stdio.h>
int main()
{
    char ch;
    printf(" enter a character ");
    scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
  {
    printf(" it is a uppercase alphabet");
  }
  else if(ch>='a' && ch<='z')
  {
    printf(" it is a lowercase alphabet");
  }
  else if (ch>='0' && ch<='9')
  {
    printf(" it is a digit");
  }
  else 
  {
    printf(" speacial character ");
  }
    return 0;
}