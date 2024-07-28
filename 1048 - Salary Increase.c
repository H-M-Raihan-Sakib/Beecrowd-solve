#include <stdio.h>

int main() {

    double salary,newsalary,incre;
    scanf("%lf",&salary);
    if(salary>=0 && salary<= 400.0){
        incre=salary*.15;
        newsalary=salary+incre;
        printf("Novo salario: %.2lf\n",newsalary);
        printf("Reajuste ganho: %.2lf\n",incre);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>400.0 && salary<= 800.0){
        incre=salary*.12;
        newsalary=salary+incre;
        printf("Novo salario: %.2lf\n",newsalary);
        printf("Reajuste ganho: %.2lf\n",incre);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>800 && salary<= 1200){
        incre=salary*.1;
        newsalary=salary+incre;
        printf("Novo salario: %.2lf\n",newsalary);
        printf("Reajuste ganho: %.2lf\n",incre);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>1200 && salary<= 2000){
        incre=salary*.07;
        newsalary=salary+incre;
        printf("Novo salario: %.2lf\n",newsalary);
        printf("Reajuste ganho: %.2lf\n",incre);
        printf("Em percentual: 7 %%\n");
    }
    else{
        incre=salary*.04;
        newsalary=salary+incre;
        printf("Novo salario: %.2lf\n",newsalary);
        printf("Reajuste ganho: %.2lf\n",incre);
        printf("Em percentual: 4 %%\n");
    }
    

    return 0;
}
