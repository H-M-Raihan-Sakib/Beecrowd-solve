#include <stdio.h>

int main() {

    int num, i, par[5], impar[5];

    int j = 0, l = 0; 

    for (i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            if (j < 5) {
                par[j++] = num;
            }

            if (j == 5) {
                for (int k = 0; k < 5; k++) {
                    printf("par[%d] = %d\n", k, par[k]);
                }
                j = 0;
            }
        } else {
            if (l < 5) {
                impar[l++] = num;
            }

            if (l == 5) {
                for (int m = 0; m < 5; m++) {
                    printf("impar[%d] = %d\n", m, impar[m]);
                }
                l = 0; 
            }
        }
    }
    for(i=0;i<l;i++){
        printf("impar[%d] = %d\n",i,impar[i]);
    }
    for(int n=0 ;n<j;n++){
        printf("par[%d] = %d\n",n,par[n]);
    }

    return 0;
}
