#include <stdio.h>

int main() {
    
    int time, aspeed, c;
    double litre;

    scanf("%d %d", &time, &aspeed);
    c = time * aspeed;
    litre = c * (1.0 / 12);
    printf("%.3lf\n", litre);

    return 0;
}
