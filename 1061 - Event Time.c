#include <stdio.h>

int main() {
    int day1, hour1, minute1, second1;
    int day2, hour2, minute2, second2;

    scanf("Dia %d", &day1);
    scanf("%d : %d : %d\n", &hour1, &minute1, &second1);

  
    scanf("Dia %d", &day2);
    scanf("%d : %d : %d", &hour2, &minute2, &second2);


    int time1 = day1 * 24 * 3600 + hour1 * 3600 + minute1 * 60 + second1;
    int time2 = day2 * 24 * 3600 + hour2 * 3600 + minute2 * 60 + second2;
    int difference = time2 - time1;

    int days = difference / (24 * 3600);
    int remainingTime = difference % (24 * 3600);
    int hours = remainingTime / 3600;
    remainingTime %= 3600;
    int minutes = remainingTime / 60;
    int seconds = remainingTime % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
