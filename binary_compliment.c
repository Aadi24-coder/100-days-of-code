#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find the 1's complement
    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else
        {
            printf("Invalid input! Only binary digits (0/1) allowed.\n");
            return 1;
        }
    }

    printf("The 1's complement is: %s\n", binary);

    return 0;
}
