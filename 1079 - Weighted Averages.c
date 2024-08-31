#include <stdio.h>
 
int main() {
    int N, i, j;
    scanf("%d", &N);

    double a[N][3];
    double avg, b, c, d;

    for (i = 0; i < N; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%lf", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        b = a[i][0] * 2;
        c = a[i][1] * 3;
        d = a[i][2] * 5;

        avg = (b + c + d) / 10.0;

        printf("%.1lf\n", avg);
    }

    return 0;
}
