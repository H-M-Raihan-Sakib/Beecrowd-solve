#include<stdio.h>
int main(){
    int T,PA,PB;
    double G1,G2;
    scanf("%d",&T);
    
    for(int i=1; i<=T;i++){
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        int year=0;
        
        while(PA<=PB){
            PA=(int)PA*(1+G1/100.00);
            PB=(int)PB*(1+G2/100.00);
            year++;
            
            if(year>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
            
        }
        if(year<=100){
                printf("%d anos.\n",year);
            }
        
    }
    
}
