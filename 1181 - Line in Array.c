#include <stdio.h>

int main() {

    double M[12][12],sum=0,media;
    int i,j,line,k,N;
    char a;
    scanf("%d",&line);
    scanf(" %c",&a);
    for(i=0; i<12; i++){
        for(j=0 ; j<12 ; j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(k=0 ; k<12 ;k++){
        sum=sum+M[line][k];
    }
    if(a=='S'){
        printf("%.1lf\n",sum);
    }
    else if(a=='M'){
        printf("%.1lf\n",sum/12.0);
    }
    
    
    
    return 0;
}
