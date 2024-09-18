#include <stdio.h>

int main() {
    int i;
    double X,N[100];

    scanf("%lf",&X);
    N[0]=X;

    for (i = 1; i < 100; ) {
        X = X/2.0;
        N[i]=X;
        i++;
    }

    for (i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
