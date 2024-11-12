// Write a program to create an array of 10 integers and store multiplication table of number provided by the user in it. 
#include <stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int array[10];
    for(int i=0;i<10;i++){
        array[i]=number*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%dX%d=%d\n",number,i+1,array[i]);
    }
    return 0;
}