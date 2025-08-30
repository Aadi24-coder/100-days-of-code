#include <stdio.h>
int main()
{
    int button;
    printf(" press a button based on users choice (1-7)");
    scanf("%d",&button);
    switch(button)
    {
        case 1 :
        printf(" today is monday");
        break;
        case 2:
        printf("today is tuesday");
         break;
        case 3:
        printf(" today is wednesday"); 
         break;
        case 4:
        printf(" today is thursday");
        break;
        case 5:
        printf( " today is friday");
         break;
         case 6:
         printf(" today is saturday");
          break;
          case 7:
          printf(" today is sunday");
           break;
           default:
    }    
    return 0;
}