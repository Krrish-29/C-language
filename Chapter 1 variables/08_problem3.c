// Write a program to convert Celsius to Fahrenite
#include <stdio.h>
int main(){
    printf("This code is to convert Celsius to Fahrenite\n");
    float c , f;
    printf("What is the temperature in Celsius\n");
    scanf("%f" , &c);
    printf("The temperature of %fC in Celsius will be %f F in Fahrenite ", c , 1.8*c + 32);
    return 0;
} 
