#include <stdio.h>

int main() {

    double M[12][12], sum = 0, media;
    int i, j, k, l, N;
    char O;

    scanf("%c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (k = 0; k < 12; k++) {
        for (l = 0; l < 12; l++) {
            if (k + l > 11) {
                sum = sum + M[k][l];
            }
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", sum);
    } else if (O == 'M') {
        printf("%.1lf\n", sum / 66.0);
    }

    return 0;
}
