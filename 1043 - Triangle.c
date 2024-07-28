#include <stdio.h>

int main() {
    
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A) {
        double Perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", Perimetro);
    } else {
        double Area = 0.5 * (A + B) * C;
        printf("Area = %.1lf\n", Area);
    }

    return 0;
}
