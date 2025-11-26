#include <stdio.h>
int main() {
    char name[100];
    float salary, bonus;
    
    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter monthly peso salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        bonus = 0.8 * salary;
        
    } else {
        bonus = 10000;
        
    }
    printf("Employee Name: %s\n", name);
    printf("Bonus Amount: %.2f pesos\n", bonus);

    return 0;
}