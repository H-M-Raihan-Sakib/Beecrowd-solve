#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c, d, e, f,g;

    scanf("%lf %lf %lf", &a, &b, &c);
    g = b*b - 4*a*c;
    if(g>=0 && a!=0)
    {
        d = sqrt(b * b - (4 * a * c));
        e = (-b + d) / (2 * a);
        f = (-b - d) / (2 * a);
        printf("R1 = %.5lf\n",e);
        printf("R2 = %.5lf\n",f);

    }
    else
    {
        printf("Impossivel calcular\n");
    }


    return 0;
}
