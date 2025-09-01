#include <stdio.h>
int main()
{
    int button;
    printf(" enter a number to print its month and number of days");
    scanf("%d\n", &button);
    switch(button)
    {
        case 1: 
        printf(" january\n number of days in the month is 31");
        break;
        case 2:
        printf("february\n number of days in the month is 28");
        break;
        case 3:
        printf(" march\n number of days in the month is 31");
        break;
        case 4:
        printf("april\n number of days in the month is 30");
        break;
        case 5:
        printf("may\n number of days in the month is 31");
        break;
        case 6:
        printf("june\n number of days in the month is 30");
        break;
        case 7:
        printf(" july \n number of days in the month is 31");
        break;
        case 8:
        printf("august \n number of days in the month is 31");
        break;
        case 9:
        printf("september\n number of days in the month is 30");
        break;
        case 10:
        printf(" october \n number of days in the month is 31");
        break;
        case 11:
        printf("november\n number of days in the month is 30");
        break;
        case 12:
        printf(" december \n number of days in the month is 31");
        break;
        default:
        printf(" it is not a number ");
        return 0;

    }

}