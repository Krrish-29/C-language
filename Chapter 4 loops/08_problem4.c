//Write a program to sum first ten natural numbers using do-while loop and for loop. 
#include <stdio.h>
int main(){
    int num1,num2=1;
    printf("Enter the natural number till which u need the sum:");
    scanf("%d",&num1);
    // do{
    //     if(num1==num2){
    //         printf("%d=%d",num2,((num1)*(num1+1))/2);
    //     }
    //     else if(num2<num1){
    //         printf("%d+",num2);
    //     }
    //     num2++;
    // }while(num2<=num1);

    for(num2;num2<=num1;num2++){
        if(num2==num1){
            printf("%d=%d",num2,((num1)*(num1+1))/2);
        }
        else
        printf("%d+",num2);
        
    }
    return 0;
}