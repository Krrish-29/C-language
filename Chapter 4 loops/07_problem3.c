// Write a program to sum the first n natural numbers using while loop
#include <stdio.h>
int main(){
    int num1,num2=1;
    printf("Enter the natural number till which u need the sum:");
    scanf("%d",&num1);
 
//  To show the proper calculations
 /* while(num2<=num1){
        if(num2<num1){
        printf("%d+",num2);
        num2++;
        }
        else if(num2==num1){
            printf("%d=%d",num2,(num1*(num1+1))/2);
            num2++;
        }
    } */


/*  while (num2<=num1){
    printf("%d",(num1*(num1+1))/2);
    num2++;
    }*/
// OR
    int sum=0;
    while(num1){
    sum += num1;
    num1--;
    }
    printf("%d",sum);
    return 0;
}