#include <stdio.h>

int main() {
    
    int N,i,j,k=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<4;j++){
            printf("%d ",k++);
        }
        printf("PUM\n");
        k++;
    }

    return 0;
}
