// Write a program to calculate the factorial of a given number using a while loop.
#include <stdio.h>
int main(){
    int num1,num2=1,factorial=1;
    printf("Enter the number u want to get factorial of:");
    scanf("%d",&num1);
    while(num2<=num1){
        factorial*=num2;
        num2++;
    }
    printf("The factorial of %d is %d",num1,factorial);
    return 0;
}