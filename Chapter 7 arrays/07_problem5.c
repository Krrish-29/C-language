//  Create an array of size 3 x 10 containing multiplication tables for a custom input given by the user. 
#include <stdio.h>
int main(){
    int number1,number2,number3;
    printf("Enter the First number:");
    scanf("%d",&number1);
    printf("Enter the Second number:");
    scanf("%d",&number2);
    printf("Enter the Third number:");
    scanf("%d",&number3);
    int multi[]={number1,number2,number3},multiplicationarray[3][10];
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            multiplicationarray[i][j]=multi[i]*(j+1);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%dX%d=%d  ",multi[i],j+1,multiplicationarray[i][j]);
        }
        printf("\n");
    }
    return 0;
}