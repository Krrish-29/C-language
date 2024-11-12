//Write a program to print multiplication table in reversed order.  
#include <stdio.h>
int main(){
    int num1,num2=10;
    printf("Enter the number whose reverse multiplication table u need: \n");
    scanf("%d",&num1);
    for(num2;num2>=1;num2--){
        printf("%d*%d:%d\n",num1,num2,num1*num2);
    }
    return 0;
}