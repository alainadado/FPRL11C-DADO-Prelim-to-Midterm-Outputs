#include <stdio.h>
#include <string.h>

int main() {
    
    char name[100];
    
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    
    printf("\nHello, %s\nHere is your user data:\n\n", name);
    
    printf("Age: 20\nStudent ID: 458347695739\nYear Level: First Year\n");
    
    printf("Program: BSIT\nSection: C134_IT\nCurriculum Year: 2025 - 2026\n");
    
    return 0;
}