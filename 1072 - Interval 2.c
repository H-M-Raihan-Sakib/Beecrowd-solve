#include <stdio.h>
 
int main() {
 
    int N,i,count=0,count2=0;
    scanf("%d",&N);
    int X[N];
    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
    }
    for(i=0;i<N;i++){
        if(X[i]>=10 && X[i]<=20){
            count++;
        }
        else{
            count2++;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",count2);
 
    return 0;
}
