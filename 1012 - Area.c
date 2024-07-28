#include <stdio.h>

int main() {
    
    double pi=3.14159,A,B,C,tri,cir,q,tra,rec;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=.5*A*C;
    cir=pi*C*C;
    tra=.5*(A+B)*C;
    q=B*B;
    rec=A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",q);
    printf("RETANGULO: %.3lf\n",rec);
    
    

    return 0;
}
