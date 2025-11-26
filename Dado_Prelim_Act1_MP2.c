#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter first integer: ");
    scanf("%d", &n1);
    
    printf("Enter second integer: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("EQUIVALENT\n");
        
    } else {
        printf("NOT EQUIVALENT\n");
    }

    return 0;
}