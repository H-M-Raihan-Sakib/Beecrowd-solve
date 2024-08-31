#include <stdio.h>
#include <math.h>

int main() {
    double i, j;

    for (i = 0; i <= 2; i += 0.2) {
        for (j = 1; j <= 3; j++) {
            if (fabs(i - 0.0) < 1e-10 || fabs(i - 1.0) < 1e-10 || fabs(i - 2.0) < 1e-10) {
                printf("I=%.0lf J=%.0lf\n", i, j + i);
            } else {
                printf("I=%.1lf J=%.1lf\n", i, j + i);
            }
        }
    }

    return 0;
}
