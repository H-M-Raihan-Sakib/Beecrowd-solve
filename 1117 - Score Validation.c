#include <stdio.h>
 
int main() {
 
    double a, b, c, d, avg;
    while (1) {
        scanf("%lf", &a);
        if (a >= 0.0 && a <= 10.0) {
            c=a;
            break;
        } else {
            printf("nota invalida\n");
        }
        
    }
    while(1){
                scanf("%lf",&b);
        if (b >= 0.0 && b <= 10.0) {
            d=b;
            break;
        } else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n",(c+d)/2);
 
    return 0;
}
