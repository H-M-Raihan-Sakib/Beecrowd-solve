#include <stdio.h>

int main() {

    double M[12][12], sum1 = 0, sum2 = 0, media;
    int i, j, k, l, N;
    char O;

    scanf("%c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 1; i <= 5; i++) {
        for (j = 0; j < i; j++) {  
            sum1 = sum1 + M[i][j];
        }
    }
    for (i = 6; i <= 10; i++) {  
        for (j = 0; j < 11 - i; j++) {  
            sum2 = sum2 + M[i][j];
        }
    }
    if (O == 'S') {
        printf("%.1lf\n", sum1 + sum2);
    } else if (O == 'M') {
        printf("%.1lf\n", (sum1 + sum2) / 20.0);  
    }

    return 0;
}
