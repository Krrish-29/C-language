// Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
#include <stdio.h>
int sum(int n){
    if(n){
        int c=n+sum(n-1);
    return c;
    }
}
int main(){
    int num1;
    printf("Recursive function to calculate the sum of first ‘n’ natural numbers.\n");
    printf("Enter the natural number:");
    scanf("%d",&num1);
    printf("The sum of the first %d natural numbers is %d",num1,sum(num1));
}