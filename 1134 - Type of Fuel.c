#include <stdio.h>#include <stdio.h>

int main() {
    int N, a=0, g=0, d=0;
    
    while(1){
        scanf("%d",&N);
        if(N==1){
            a++;
        }
        else if(N==2){
            g++;
        }
        else if(N==3){
            d++;
        }
        else if(N==4){
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}
