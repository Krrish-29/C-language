#include <stdio.h>
int binary_search(int array[],int left,int right,int number){
    if(right>=left){
        int middle=(left+right)/2;
        if(array[middle]==number){
            return middle;
        }
        else if(array[middle]>number){
            return binary_search(array,0,middle-1,number);
        }
        else if(array[middle]<number){
            return binary_search(array,middle+1,right,number);
        }
    }
    return -1;
}
int main(){
    int array[]={1,2,3,5,7,9,11,14,15,17},n=sizeof(array)/sizeof(array[0]),number,index=-1;
    printf("Binary search:\nEnter the number you to find in the array:");
    scanf("%d",&number);
    index=binary_search(array,0,n-1,number);
    index==-1?printf("The number %d is not in the array.",number):printf("The number %d is on %d index in the array.",number,index);
    return 0;
}