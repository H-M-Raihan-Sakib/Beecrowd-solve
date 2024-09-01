#include <stdio.h>

int main() {
    int M, N;

    while (1) {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;
        }

        int smaller = (M < N) ? M : N;
        int larger = (M > N) ? M : N;

        int sum = 0;
        for (int i = smaller; i <= larger; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
