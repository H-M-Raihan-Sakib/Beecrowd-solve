#include <stdio.h>

int main() {
    int N, i;

    scanf("%d", &N);

    if (N > 1 && N < 1000) {
        for (i = 1; i <= N; i++) {
            printf("%d %d %d\n", i, i * i, i * i * i);
            printf("%d %d %d\n", i, (i * i)+1, (i * i * i)+1);
        }
    } else {
        printf("Invalid input. N should be between 1 and 999 (exclusive).\n");
    }

    return 0;
}
