#include <stdio.h>
 
int main() {
 
    double a, b, c, d, e, f,sum=0.0,avg;
    int count = 0;
    
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    
    if (a > 0) {
        count++;
        sum=sum+a;
    }
    if (b > 0) {
        count++;
        sum=sum+b;
    }
    if (c > 0) {
        count++;
        sum=sum+c;
    }
    if (d > 0) {
        count++;
        sum=sum+d;
    }
    if (e > 0) {
        count++;
        sum=sum+e;
    }
    if (f > 0) {
        count++;
        sum=sum+f;
    }
    avg=sum/count;
    printf("%d valores positivos\n", count);
    printf("%.1lf\n",avg);
 
    return 0;
}
