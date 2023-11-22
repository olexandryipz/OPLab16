#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

int reverseNumber(int num) {
    int reversedNumber = 0;
    
    while (num != 0) {
        int number = num % 10;
        reversedNumber = reversedNumber * 10 + number;
        num /= 10;
    }

    return reversedNumber;
}

int main() {
    int number2;

    printf("Введіть ціле число: ");
    scanf_s("%d", &number2);

    int reversed = reverseNumber(number2);

    printf("Обернене число: %d\n", reversed);

    return 0;
}
