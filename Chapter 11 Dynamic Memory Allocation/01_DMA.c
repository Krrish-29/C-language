#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)malloc(10* sizeof (int));
    float *ptr1;
    ptr1=(float*)calloc(10, sizeof (float));
    ptr = realloc (ptr, 15*sizeof(int));
    for(int i=0;i<15;i++){
        ptr[i]=i;
        printf("%d\n",ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",ptr1[i]);
    }
    free(ptr1);
    free(ptr);
    return 0;
}