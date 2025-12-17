#include <stdio.h>

    int main() {
    float price;
    int quantity;
    int itemNum;
    char choice;

    do {
        printf("------------- WELCOME TO THE STORE! -------------\n\n");
        printf("1 — VEGETABLE — ₱54.5/kilo\n2 — FRUITS — ₱120/kilo\n3 — MILK — ₱90/pack\n");
        printf("4 — SOAP — ₱29.45/bar\n5 — SHAMPOO & CONDITIONER — ₱140/bottle\n\n");
        printf("What do you want to purchase? (enter item number):\n");
        scanf("%d", &itemNum);
    } while(itemNum==4);

    return 0;
}