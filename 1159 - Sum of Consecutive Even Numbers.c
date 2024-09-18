#include <stdio.h>

int main() {

    int ivalue,i,j,sum;
    
    while(1){
            scanf("%d",&ivalue);
            if(ivalue==0){
                break;
            }
            if(ivalue%2!=0){
                ivalue=ivalue+1;
            }
            sum=0;
            for(j=ivalue;j<ivalue+5*2;j=j+2){
                sum=sum+j;
            }
            printf("%d\n",sum);
    }
    
    
    return 0;
}
