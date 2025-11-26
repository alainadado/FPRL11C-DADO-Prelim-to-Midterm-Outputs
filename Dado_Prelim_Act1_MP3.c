#include <stdio.h>
int main() {
    int n1, n2;

    printf("Enter first integer: ");
    scanf("%d", &n1);
    
    printf("Enter second integer: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("FIRST NUMBER IS SMALLER\n");
        
    } else if (n1 > n2) {
        printf("SECOND NUMBER IS SMALLER\n");
        
    } else {
        printf("TWO NUMBERS ARE EQUIVALENT\n");
    }

    return 0;
}