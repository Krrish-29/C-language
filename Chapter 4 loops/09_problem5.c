// Write a program to calculate the sum of the numbers occurring in the multiplication table of any number also and no of times.
#include <stdio.h>
int main(){
    /*int num1, num2;
    printf("Table:\t");
    scanf("%d",&num1);
    printf("Times:\t");
    scanf("%d",&num2);
    for(int num3=1;num3<=num2;num3++){
        int totalsum=num1*num3;
        if(num3==num2){
            printf("%dX%d=%d\nTotal sum is=%d",num1,num3,totalsum,num1*(((num2)*(num2+1)/2)));
        }
        else
            printf("%dX%d=%d\n",num1,num3,totalsum);
    }*/



    // OR
    int num2;
    printf("Table:\t");
    scanf("%d",&num2);
    int sum = 0;
    for(int num1;num1<=10;num1++){
        sum += (num2*num1);
    }
    printf("The sum of the numbers occurring in the multiplication table of %d is %d",num2,sum);
    return 0;
}