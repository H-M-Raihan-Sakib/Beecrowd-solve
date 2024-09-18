#include <stdio.h>

int main() {

    int ivalue,num,testcase,i,j,sum;
    
    scanf("%d",&testcase);
    for(i=1; i<=testcase ;i++){
        scanf("%d %d",&ivalue,&num);
        if(ivalue%2==0){
            ivalue=ivalue+1;
        }
        sum=0;
        for(j=ivalue;j<ivalue+num*2;j=j+2){
            sum=sum+j;
        }
        printf("%d\n",sum);
    }
    
    
    return 0;
}
