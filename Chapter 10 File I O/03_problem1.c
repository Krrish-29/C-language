// Write a program to read three integers from a file.
#include <stdio.h>
int main(){
    int num1,num2,num3;
    FILE*ptr=fopen("03_problem1.txt","r");
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);
    printf("%d %d %d",num1,num2,num3);
    // fscanf(ptr,"%d",&num1);
    // printf("%d\n",num1);
    // fscanf(ptr,"%d",&num2);
    // printf("%d\n",num2);
    // fscanf(ptr,"%d",&num3);
    // printf("%d\n",num3);
    fclose(ptr);
    return 0;
}