// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main(). 
#include <stdio.h>
int sum_average(float*,float*);
int sum_average(float*a,float*b){
    *a = (*a+*b)/2;
    *b = 2*(*a);
}
int main(){
    float a , b;
    printf("Program using a function which calculates the sum and average of two numbers\n");
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    sum_average(&a,&b);
    printf("The sum of the numbers is %f and average is %f",b,a);
    return 0;
}