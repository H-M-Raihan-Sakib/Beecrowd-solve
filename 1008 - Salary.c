#include <stdio.h>
 
int main() {
 
    int num;
    float hour,rate,salary;
    scanf("%d",&num);
    scanf("%f %f",&hour,&rate);
    salary=hour*rate;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary);
 
    return 0;
}
