#include <stdio.h>
int main(){
    int a;
    printf("Pls enter a year :");
    scanf("%d", &a);
    if((a%4==0&&a%100!=0)||a%400==0){
        printf("The year %d is a leap year\n", a);
    }
    else {
        printf("The year %d is not a leap year\n",a);
    }
    
    return 0;
}