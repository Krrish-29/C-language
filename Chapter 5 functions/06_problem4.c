// Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
int fibo(int num){
    // if(num==1){
    //     return 0;
    // }
    // else if (num==2){
    //     return 1;
    // }
    // else{
    //     int fibonacci,num1=1,num2=0;
    //     for(int i=1;i<=num-2;i++){
    //     fibonacci = num1+num2;
    //     num2 = num1;
    //     num1 = fibonacci;
    //     }
    //     return fibonacci;
    // }

    if(num==1||num==2){
        return num-1;
    }
    else{
        return fibo(num-2)+fibo(num-1);
    }
}
int main(){
    int nelement;
    printf("Program using recursion to calculate nth element of Fibonacci series\n");
    printf("Enter the Fibonacci series element number:");
    scanf("%d",&nelement);
    printf("The value is %d",fibo(nelement));
}