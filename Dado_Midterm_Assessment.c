#include <stdio.h>

int Prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0) return 0;
    }
    return 1; 
}

int main() {
    int n1, n2;

    printf("Enter a number for range: ");
    scanf("%d", &n1);
    printf("Enter a second number for range: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf("Prime numbers between %d and %d:\n", n1, n2);

    for (int i = n1; i <= n2; i++) {
        if (Prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
