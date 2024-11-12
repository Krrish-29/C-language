#include <stdio.h>
int Input();
int Input(int number){
    printf("Enter the number :");
    scanf("%d",&number);
    return number;
}
int exe(int,int);
int exe(int digits,int number){
    int y,sum=0,z=1;
    for(int x= 1000000000;x>=1;x/=10){
        y=number/x;
        number-=x*y;
        z=y;
        if(y!=0){
            for(int i=2;i<=digits;i++){
                z*=y;
            }
            sum+=z;
        }
    }
    return sum;
}
int main(){
    int digits,sum,number;
    printf("Program to check for armstrong number.\n");
    restart:
    printf("How many digit number u want to take:");
    scanf("%d",&digits);
    if(digits>9){
        printf("Please enter a lower number for digits");
        goto restart;
    }
    else{
        switch(digits){
            case 1:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 3:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 4:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 5:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 6:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 7:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 8:
            number=Input(1);
            sum = exe(digits,number);
            break;
            case 9:
            number=Input(1);
            sum = exe(digits,number);
            break;
        }
    }
    if(sum==number){
        printf("The number %d is armstrong number",number);
    }
    else{
        printf("The number %d is not an armstrong number",number);
    }
    return 0;
}