#include <stdio.h>

int main() {
    char binary[100];
    int n;

    printf("Enter the number of bits: ");
    scanf("%d", &n);

    printf("Enter the binary number: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &binary[i]);
    }

    printf("1's Complement: ");
    for (int i = 0; i < n; i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary digit detected.\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}