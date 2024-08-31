#include <stdio.h>
 
int main() {
 
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        if(a[i]==0){
            printf("NULL\n");
        }
        if(a[i]%2==0 && a[i]>0){
            printf("EVEN POSITIVE\n");
        }
        if(a[i]%2==0 && a[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        if(a[i]%2!=0 && a[i]>0){
            printf("ODD POSITIVE\n");
        }
        if(a[i]%2!=0 && a[i]<0){
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
