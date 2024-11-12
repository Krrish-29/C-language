// Create an array dynamically capable of storing 5 integers.use realloc so that it can now store 10 integers.Attempt problem using calloc().
// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).
#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n=5;
    // ptr=(int*)malloc(n*sizeof(int));
    ptr=(int*)calloc(n,sizeof(int));
    n=10;
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=7*(i+1);
        printf("%dX%d=%d\n",7,i+1,ptr[i]);
    }
    n=15;
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=7*(i+1);
        printf("%dX%d=%d\n",7,i+1,ptr[i]);
    }
    return 0;
}