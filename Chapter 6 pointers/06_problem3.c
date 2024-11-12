// Write a program to change the value of a variable to ten times of its current value using function and pass the value by reference.
#include <stdio.h>
int change(int*);
int change(int*a){
    *a =*a*10;
}
int main(){
    int variable;
    printf("This program changes the value of the input value to ten times\n");
    printf("Enter the number:");
    scanf("%d",&variable);
    change(&variable);
    printf("The value is %d",variable);
    return 0;
}