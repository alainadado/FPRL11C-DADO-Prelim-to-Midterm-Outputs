#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("FALSE\n");
    } else {
        printf("TRUE\n");
    }

    return 0;
}