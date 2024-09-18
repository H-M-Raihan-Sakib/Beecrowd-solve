#include <stdio.h>

int main() {
    int N, X;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%d", &X);
        int c = 0;

        if (X < 2) {
            printf("Not Prime\n");
            continue;
        }

        for (int j = 2; j * j <= X; j++) {
            if (X % j == 0) {
                c++;
                break;
            }
        }

        if (c > 0) {
            printf("Not Prime\n");
        } else {
            printf("Prime\n");
        }
    }

    return 0;
}
