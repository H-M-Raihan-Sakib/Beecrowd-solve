#include <stdio.h>

int main() {
    int sec, min, hour;
    scanf("%d", &sec);
    hour = sec / 3600;
    min = (sec % 3600) / 60;
    sec = sec % 60;  
    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}
