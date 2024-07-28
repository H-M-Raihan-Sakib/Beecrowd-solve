#include <stdio.h>

int main() {
    int amount, num_notes;

    scanf("%d", &amount);

    printf("%d\n", amount);

    int denominations[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < sizeof(denominations) / sizeof(denominations[0]); i++) {
        num_notes = amount / denominations[i];
        printf("%d nota(s) de R$ %d,00\n", num_notes, denominations[i]);
        amount = amount % denominations[i];
    }

    return 0;
}
