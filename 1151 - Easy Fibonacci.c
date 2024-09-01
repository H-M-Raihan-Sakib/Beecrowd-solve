#include <stdio.h>

int main() {
    int f1=0,f2=1,N,i,sum;
    scanf("%d",&N);
    printf("%d %d",f1,f2);
    if(N>0 && N<46){
        for(i=1;i<N-1;i++){
        sum=f1+f2;
        printf(" %d",sum);
        f1=f2;
        f2=sum;
        }
        printf("\n");
    }
    return 0;
}
