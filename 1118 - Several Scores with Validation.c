#include <stdio.h>
 
int main() {
 
    double a, b, c, d, avg;
    int e;
    retry_input:
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
    while(1){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&e);
        if(e==1){
            goto retry_input;
        }
        else if(e==2){
            break;
        }
    }
 
    return 0;
}
