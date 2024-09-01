#include <stdio.h>

int main() {
    
    int N, numC = 0, numR = 0, numS = 0, num, total;
    char a;
    double C, R, S;

    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        scanf("%d %c", &num, &a);

        if (a == 'C') {
            numC += num;
        } else if (a == 'R') {
            numR += num;
        } else if (a == 'S') {
            numS += num;
        }
    }
    

    total = numC + numR + numS;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", numC);
    printf("Total de ratos: %d\n", numR);
    printf("Total de sapos: %d\n", numS);
    
    printf("Percentual de coelhos: %.2lf %%\n", ((double)numC / total) * 100);
    printf("Percentual de ratos: %.2lf %%\n", ((double)numR / total) * 100);
    printf("Percentual de sapos: %.2lf %%\n", ((double)numS / total) * 100);

    return 0;
}
