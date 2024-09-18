#include<stdio.h>
int main()
{
    int N ;
    double X ;
    scanf("%d" , &N) ;
    for(int i = 0 ; i < N ; i++){
            int count = 0 ;
        scanf("%lf" , &X ) ;
        while(1){
            X/=2 ;
            count++;
        if(X <= 1){
            break;
        }
        }
        printf("%d dias\n" , count) ;

    }
}
