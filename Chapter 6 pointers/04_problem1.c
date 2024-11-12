// Write a program to print the address of a variable. Use this address to get the value of the variable.
#include<stdio.h>
int main(){
    int a= 10;
    int*a1=&a;
    float b= 10.10;
    float*b1=&b;
    char c='A';
    char*c1=&c;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",a1);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*a1);

    printf("The address of b is %u\n",&b);
    printf("The address of b is %u\n",b1);
    printf("The value of b is %f\n",b);
    printf("The value of b is %f\n",*b1);

    printf("The address of c is %u\n",&c);
    printf("The address of c is %u\n",c1);
    printf("The value of c is %c\n",c);
    printf("The value of c is %c\n",*c1);

}