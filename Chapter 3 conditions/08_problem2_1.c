#include <stdio.h>
int main(){
    int income, tax;
    printf("Income:");
    scanf("%d",&income);
    if(income<250000){
        tax=0;
    }
    else if(income>=250000&&income<500000){
        tax=0.05*(income-25000);
    }
    else if(income>=500000&&income<1000000){
        tax=0.05*(500000-250000)+ 0.2*(income-500000);
    }
    else {
        tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
    }
    printf("The income tax to be paid is :%d",tax);
    return 0;
}