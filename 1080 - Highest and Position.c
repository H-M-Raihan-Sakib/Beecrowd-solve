#include <stdio.h>

int main() {
    int numbers[100], maxNumber, position = 1;

    scanf("%d", &maxNumber);
    for (int i = 1; i < 100; i++) {
        scanf("%d", &numbers[i]);
      
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
            position = i + 1; 
        }
    }

    printf("%d\n", maxNumber);
    printf("%d\n", position);

    return 0;
}
