// Write a program to dynamically create an array of size 6 capable of storing 6
// integers.
// store 6 integers entered by the user.
// Solve problem  using calloc().
#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    // ptr=(int*)malloc(6*sizeof(int));
    ptr=(int*)calloc(6,sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter number %d:\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("Number %d\n",ptr[i]);
    }
    return 0;
}