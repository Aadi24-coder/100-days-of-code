#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If only one digit, no swap
    if (num < 10) {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }

    temp = num;
    last = temp % 10;    // last digit

    // Find number of digits and first digit
    while (temp >= 10) {
        temp /= 10;
        place *= 10;
        digits++;
    }
    first = temp;        // first digit

    // Remove first and last digits from original number
    int middle = num % place;  
    middle = middle / 10;

    // Rebuild swapped number
    int swapped = last * place + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
