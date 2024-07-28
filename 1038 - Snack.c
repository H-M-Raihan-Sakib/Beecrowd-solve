#include <stdio.h>

int main() {
    int X, Y;
    double bill;

    scanf("%d %d", &X, &Y);

    switch (X) {
        case 1:
            bill = Y * 4.00;
            printf("Total: R$ %.2lf\n", bill);
            break;
        case 2:
            bill = Y * 4.50;
            printf("Total: R$ %.2lf\n", bill);
            break;
        case 3:
            bill = Y * 5.00;
            printf("Total: R$ %.2lf\n", bill);
            break;
        case 4:
            bill = Y * 2.00;
            printf("Total: R$ %.2lf\n", bill);
            break;
        case 5:
            bill = Y * 1.50;
            printf("Total: R$ %.2lf\n", bill);
            break;
        default:
            printf("Invalid code\n");
    }

    return 0;
}
