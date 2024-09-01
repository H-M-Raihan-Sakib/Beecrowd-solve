#include <stdio.h>

int main() {
    int a, b,sum=0,i;

    while(1){
        scanf("%d %d", &a, &b);

        if (a == b) {
            break; 
        }
        if(a>b){
            printf("Decrescente\n");
        }
        else if(b>a){
            printf("Crescente\n");
        }
        
        
    } 

    return 0;
}
