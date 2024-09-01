#include <stdio.h>

int main() {
    int X, Y, i, j, k = 1;

    scanf("%d %d", &X, &Y);

    if (X > 1 && X < 20 && Y > X && Y < 100000) {
        for (i = 1; i <= Y; i++) {
            printf("%d", i);

            if (i % X == 0 || i == Y) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    } else {
        printf("Invalid input. Please ensure X < Y, 1 < X < 20, and X < Y < 100000.\n");
    }

    return 0;
}
