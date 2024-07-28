#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,MAIORAB;
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    MAIORAB=(d+c+abs(c-d))/2;
    printf("%d eh o maior\n",MAIORAB);


    return 0;
}
