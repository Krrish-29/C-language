#include <stdio.h>
void prime(long long int );
void prime(long long int number){
    int counter=0;
    for(long long int i=2;i<number;i++){
        if(number%i==0){
            counter++;
            break;
        }
    }
    if(counter==0){
        printf("%lld ",number);
    }
}
int main(){ 
    long long int number;
    printf("Program to find prime numbers till n.");
    printf("Enter the number:");
    scanf("%lld",&number);
    if(number>2){
        for(long long int i =2;i<number;i++){
            prime(i);
        }
    }
    return 0;
}