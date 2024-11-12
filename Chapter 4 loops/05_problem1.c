// Write a program to print multiplication table of a given number n
#include<stdio.h>
int main(){
    int num1,num2=1;
    printf("Enter the number whose multiplication table u need: \n");
    scanf("%d",&num1);
    for(num2;num2<11;num2++){
        printf("%d*%d:%d\n",num1,num2,num2*num1);


    // Code for both number to be soft coded-
    // int num1,num2,num3=1;
    // printf("Enter the number whose multiplication table u need:\n ");
    // scanf("%d",&num1);
    // printf("Till which number u want multiplication table of %d:\n",num1);
    // scanf("%d",&num2);
    // for(num2;num3<=num2;num3++){
    //     printf("%d*%d:%d\n",num1,num3,num3*num1);
     }
    return 0;
}