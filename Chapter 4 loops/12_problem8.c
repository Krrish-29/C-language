// Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>
int main(){
    int num1,prime=0;;
    printf("Enter a number :");
    scanf("%d",&num1);
    if(num1==1){
       prime=1;
    }
    else if(num1==0){
        prime=1;
    }
    else{
        for(int num2=2;num2<num1;num2++){
            if(num1%num2==0){
            prime=1;
            break;
            }
        }
    }
    if(prime){
        printf("The number %d is a not a prime number",num1);
    }
    else{
        printf("The number %d is a prime number",num1);
    }
    return 0;
}