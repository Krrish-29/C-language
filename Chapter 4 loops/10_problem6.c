// Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>
int main(){
    printf("Enter the number u want to get factorial of:");
    int num1;
    scanf("%d",&num1);
    /*printf("%d!=",num1);
    int a= num1;
    for(int product= num1;num1;num1--){
        product*=num1;
        if(num1>1){
        printf("%dX",num1);
        }
        else{
            printf("%d=%d",num1,product/a);
        }
    }*/

    // OR
    int factorial=1;
    for(int num2=1;num2<=num1;num2++){
        factorial*=num2;
    }
    printf("The factorial of %d is %d",num1,factorial);
    return 0;
}                        