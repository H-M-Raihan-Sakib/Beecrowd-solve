#include <stdio.h>

int main() {
    int A, N, i, sum = 0, temp;

    while (1) {
        scanf("%d", &A);
        if (A <= 0) {
            
        } else {
            break;
        }
    }

    while (1) {
        scanf("%d", &N);
        if (N <= 0) {
            
        } else {
            break;
        }
    }

    for (i = A; i < A+N; i++) {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
