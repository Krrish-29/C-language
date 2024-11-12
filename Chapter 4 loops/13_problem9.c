#include <stdio.h>
int main(){
    int num1,num2=2,prime=0;;
    printf("Enter a number :");
    scanf("%d",&num1);
    if(num1==1){
       prime=1;
    }
    else if(num1==0){
        prime=1;
    }
    else{
        while(num2<num1){
            if(num1%num2==0){
            prime=1;
            break;
            }
            num2++;
        }


    //     do{
    //         if(num1==2){
    //             break;
    //         }
    //         else{
    //             if(num1%num2==0){
    //             prime=1;
    //             break;
    //             }
    //         }
    //         num2++;
    //     }while(num2<num1);
    
    }
    if(prime){
        printf("The number %d is a not a prime number",num1);
    }
    else{
        printf("The number %d is a prime number",num1);
    }
    return 0;
}