// Write a program containing functions which counts the number of positive integers in an array. 
#include <stdio.h>
void positive(int array[],int size,int * counter){
    int postivearray[10]={0};
    for(int i =0;i<size;i++){
        if(array[i]>=0){
            postivearray[*counter]=array[i];
            *counter+=1;
        }
    }
    printf("The %d positive numbers in array are:\n",*counter);
    for(int i=0;i<*counter;i++){
        printf("%d ",postivearray[i]);
    }
}
int main(){
    int array[10]={-1,15,-6,6,-48,2,-7,8,-5,5};
    int counter=0;
    positive(array,10,&counter);
    return 0;
}