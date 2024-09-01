#include <stdio.h>

int main() {
    int N,fac=1,i;
    scanf("%d",&N);
    if(N>0 && N<13){
    for(i=1;i<=N;i++){
        fac=fac*i;
    }
    printf("%d\n",fac);
    }
    return 0;
}
