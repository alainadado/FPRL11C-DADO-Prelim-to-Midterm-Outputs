#include <stdio.h>

#define N 5

struct Item {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Item items[N] = {
        {1, "Vegetables", 54.50},
        {2, "Fruits", 120.00},
        {3, "Milk", 90.00},
        {4, "Soap", 29.45},
        {5, "Shampoo and Conditioner", 120.00}
    };

    int itemNum, qty;
    float sum = 0.0, payment, change;
    char repeat;

    printf("--------------- WELCOME TO THE ELPIYU STORE! ---------------\n");

    do {
        printf("\nAVAILABLE ITEMS:\n");
        for (int i = 0; i < N; i++) {
            printf("%d ------ %-10s ----- ₱%.2f\n", items[i].id, items[i].name, items[i].price);
        }

       printf("\nEnter the item number of the product you want to buy: ");
        scanf("%d", &itemNum);

        if (itemNum >= 1 && itemNum <= N) {
            printf("How many do you want to buy? ");
            scanf("%d", &qty);

            if (qty > 0) {
               float cost = items[itemNum - 1].price * qty;
                sum += cost;
                printf("%d x %s = ₱%.2f\n", qty, items[itemNum - 1].name, cost);
             } else {
                printf("Qty must be > 0\n");
             }
        } else {
            printf("Please enter a valid item number. Try again.\n");
        }

         printf("Buy again? (Y for yes, N for no): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

        printf("\nTotal: ₱%.2f\n", sum);
        printf("Enter your payment: ₱");
        scanf("%f", &payment);

            if (payment >= sum) {
                change = payment - sum;
                printf("Change: ₱%.2f\n", change);
            } else {
                printf("Not enough payment. Please pay the remaining ₱%.2f\n.", sum - payment);
            }

    printf("\n--------------- THANK YOU FOR SHOPPING AT THE ELPIYU STORE! ---------------\n");
    printf("------------------------ Come again next time :D --------------------------\n");
    return 0;
}
