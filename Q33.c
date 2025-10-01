#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num = num / 10;
    }

    if (!(result == original))
        printf("Not an Armstrong number\n");
    else
        printf("Armstrong number\n");

    return 0;
}