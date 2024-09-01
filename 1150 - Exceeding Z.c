#include <stdio.h>

int main() {
    int X, Z, sum = 0, count = 0, i;

    scanf("%d", &X);

    while (1) {
        scanf("%d", &Z);
        if (Z > X) {
            break;
        }
    }

    for (i = X; ; i++) {
        sum += i;
        count++;

        if (sum >= Z) {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}
