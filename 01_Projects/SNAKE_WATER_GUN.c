#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int player,computer,playercounter=0,computercounter=0,rounds;
    printf("How many rounds you want to play:");
    scanf("%d",&rounds);
    for(int i=1;i<=rounds;i++){
        restart:
        printf("Choose \n1->Snake\n2->Water\n3->Gun\n");
        scanf("%d",&player);
        computer=(rand()%3)+1;
        if(computer==player){
            printf("Draw! Please Choose again\n");
            goto restart;
        }
        else if(computer-player==1){
            printf("You win\n");
            playercounter++;
        }
        else if(computer-player==-1){
            printf("Computer win\n");
            computercounter++;
        }
        else if(player-computer==2){
            printf("You Win\n");
            playercounter++;
        }
        else if(player-computer==-2){
            printf("Computer win\n");
            computercounter++;

        }
    }
    if(computercounter>playercounter){
        printf("Computer won the game by %d points",computercounter);
    }
    else{
        printf("You won the game by %d points",playercounter);
    }
    return 0;
}