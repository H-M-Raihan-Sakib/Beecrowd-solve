#include <stdio.h>
 
int main() {
 
    long long int a, b, c ;
    while(scanf("%lld %lld", &a, &b)!=EOF){
        c=a-b;
        if(c<0){
            printf("%lld\n",c*(-1));
        }
        else{
            printf("%lld\n",c);
        }
    }
 
    return 0;
}
