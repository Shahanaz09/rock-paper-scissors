#include <stdio.h>
#include<stdlib.h>
int main()
{
    int pc;
    int cc;
    int ps=0,cs=0;
    char playagain;
    do{
        printf("enter pc:\n");
        scanf("%d",&pc);
        cc=(rand()%3)+1;
        printf("%d\n",cc);
        if((pc==1&&cc==3)||(pc==2&&cc==1)||(pc==3&&cc==2))
        ps++;
        else
        cs++;
        printf("do u wanna playagain if yes enter : Y\n");
        scanf(" %c",&playagain);
    }while(playagain=='Y');
    printf("Leaderboard\n");
    if(ps==cs)
    printf("draw");
    else if(ps>cs){
    printf("%d\n",ps);
    printf("player wins");
    }
    else{
    printf("%d\n",cs);
    printf("computer wins");
    }
}