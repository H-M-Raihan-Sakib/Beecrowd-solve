#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ho");
        if (i < N) {
            printf(" ");
        }
    }

    printf("!\n");

    return 0;
}
