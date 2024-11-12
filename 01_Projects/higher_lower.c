#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // Initilize rndom number generator
    srand(time(0));
    // Generate random number between 1 and 100
    int Usernumber, randomNumber = (rand()%100)+1;
    // printf("Random Number:%d\n",randomNumber);

    
    for(int numberofgusses=1;1;numberofgusses++){
    printf("Guess a number:");
    scanf("%d",&Usernumber);
    if(Usernumber>randomNumber){
        printf("Try a lower number\n");
    }
    else if(randomNumber>Usernumber){
        printf("Try a higer number\n");
    }
    else if(randomNumber==Usernumber){
        printf("You gusssed it right\n");
        printf("You took %d number of tries",numberofgusses);
        break;
    }
    }
    
}