#include<stdio.h>


int main() {
    int M, N ;
    long long factm , factn ;
    while (scanf("%d %d", &M, &N) != EOF) {
            factm = factn = 1;
        for(int i = 2 ; i <= M ; i++){
            factm*=i ;
        }
    for(int i = 2 ; i <= N ; i++){
            factn*=i ;
        }
        printf("%lld\n" , factm + factn);
    }
    return 0;
}
