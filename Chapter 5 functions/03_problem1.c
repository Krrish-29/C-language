// Write a program using function to find average of three numbers. 
#include<stdio.h>
float average(float a, float b, float c){
    return (a+b+c)/3;
}
int main(){
    float a,b,c;
    printf("Program using function to find average of three numbers.\n");
    printf("Enter 1st number:");
    scanf("%f",&a);
    printf("Enter 2nd number:");
    scanf("%f",&b);
    printf("Enter 3rd number:");
    fflush(stdin);
    scanf("%f",&c);
    printf("The average of the %f , %f and %f is %f",a,b,c,average(a,b,c));
}