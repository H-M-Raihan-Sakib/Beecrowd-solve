#include <stdio.h>
 
int main() {
 
    int goal1,goal2,count1=0,count2=0,draw=0,a,match=0;
    again:
    while(1){
        scanf("%d %d",&goal1,&goal2);
        match++;
        if(goal1>goal2){
            count1++;
        }
        else if(goal2>goal1){
            count2++;
        }
        else if(goal1==goal2){
            draw++;
        }
        break;
        
    }
    while(1){
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a==1){
            goto again;
        }
        else if(a==2){
            break;
        }
        
    }
    printf("%d grenais\n",match);
    printf("Inter:%d\n",goal1);
    printf("Gremio:%d\n",goal2);
    printf("Empates:%d\n",draw);
    if(goal1>goal2){
        printf("Inter venceu mais\n");
    }
    else if(goal2>goal1){
        printf("Germio venceu mais\n");
    }
    else if(goal1==goal2){
        printf("Não houve vencedor\n");
    }
    
 
    return 0;
}
