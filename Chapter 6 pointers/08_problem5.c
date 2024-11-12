// Write a program to print the value of a variable i by using “pointer to pointer” type of variable. 
#include <stdio.h>
int main(){
    int i=10;
    int*j=&i;
    int**k=&j;
    int***l=&k;
    printf("The value of i is %d",*(*(*(l))));
    return 0;
}