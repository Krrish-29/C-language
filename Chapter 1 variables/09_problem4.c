//Write a program to calculate the simple interest for a set of values representing principal , number of months and rate of interest 
#include <stdio.h>
int main(){
    float p , r;
    int  t ;
    printf("This code is to calculate simple interest\n");
    printf("What is the Principal Amount\n");
    scanf("%f" , &p);
    printf("What is the Rate of interest\n");
    scanf("%f" , &r);
    printf("What is the Time period in months\n");
    scanf("%d" , &t);
    printf("The Simple Interest of the amount %f at the rate of %f for time %d will be %f", p , r , t, p*r*t/100 );
    return 0;
}