#include<stdio.h>

int main() {

    int N,num;
    double a[100];
    a[0]=0;
    a[1]=1;
    for(int i=0;i<=60;i++){
        a[i+2]=a[i]+a[i+1];
    }
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        scanf("%d",&num);

        printf("Fib(%d) = %.0lf\n",num,a[num]);
    }
}
