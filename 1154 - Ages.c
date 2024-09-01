#include <stdio.h>

int main() {
    double X, sum = 0.0, count = 0.0, i;

    while(1){
        scanf("%lf",&X);
        if(X<0){
            break;
        }
        else{
            sum+=X;
            count++;
        }
    }
    printf("%.2lf\n",(sum/count));

    return 0;
}
