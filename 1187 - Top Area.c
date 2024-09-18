#include <stdio.h>

int main() {
    char operation;
    double M[12][12];
    double sum = 0.0;
    int i, j, count = 0;

    scanf("%c", &operation);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 11 - i; j++) {
            sum += M[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        sum /= count;
    }

    printf("%.1lf\n", sum);

    return 0;
}
