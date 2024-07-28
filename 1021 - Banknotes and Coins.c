#include <stdio.h>

int main() {
    
    
    double amount;
    int a,b,c,d,e,f,g,coin,h,i,j,k,l;
    scanf("%lf",&amount);
    h=amount*100;
    coin=h%100;
    amount=amount-(coin/100);
    
    printf("NOTAS:\n");
    if(amount/100>=0)
    {
        a=amount/100;
        printf("%d nota(s) de R$ 100.00\n",a);
        amount=amount-a*100;
    }
    if(amount/50>=0)
    {
        b=amount/50;
        printf("%d nota(s) de R$ 50.00\n",b);
        amount=amount-b*50;
    }
    if(amount/20>=0)
    {
        c=amount/20;
        printf("%d nota(s) de R$ 20.00\n",c);
        amount=amount-c*20;
    }
    if(amount/10>=0)
    {
        d=amount/10;
        printf("%d nota(s) de R$ 10.00\n",d);
        amount=amount-d*10;
    }
    if(amount/5>=0)
    {
        e=amount/5;
        printf("%d nota(s) de R$ 5.00\n",e);
        amount=amount-e*5;
    }
    if(amount/2>=0)
    {
        f=amount/2;
        printf("%d nota(s) de R$ 2.00\n",f);
        amount=amount-f*2;
    }
    printf("MOEDAS:\n");
    if(amount/1>=0)
    {
        g=amount/1;
        printf("%d moeda(s) de R$ 1.00\n",g);
        amount=amount-g*1;
    }
    if(coin/50>=0){
        i=coin/50;
        printf("%d moeda(s) de R$ 0.50\n",i);
        coin=coin-i*50;
    }
    if(coin/25>=0){
        j=coin/25;
        printf("%d moeda(s) de R$ 0.25\n",j);
        coin=coin-j*25;
    }
    if(coin/10>=0){
        k=coin/10;
        printf("%d moeda(s) de R$ 0.10\n",k);
        coin=coin-k*10;
    }
    if(coin/5>=0){
        l=coin/5;
        printf("%d moeda(s) de R$ 0.05\n",l);
        coin=coin-l*5;
    }
    if(coin/1>=0){
        printf("%d moeda(s) de R$ 0.01\n",coin);
    }

    return 0;
}
