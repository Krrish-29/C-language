#include <stdio.h>
int main(){
    // types of array
    int array[10];
    char array1[10];
    float array2[10];
    // input in array
    array[0]=1;
    array[1]=2;
    printf("The value of index 1 in array is %d\n",array[0]);
    printf("The value of index 1 in array is %d\n",array[1]);
    // input and output in array
    scanf("%f\n",&array2[0]);
    scanf("%f\n",&array2[1]);
    scanf("%f\n",&array2[2]);
    scanf("%f\n",&array2[3]);
    scanf("%f\n",&array2[4]);
    printf("%d\n",array2[0]);
    printf("%d\n",array2[1]);
    printf("%d\n",array2[2]);
    printf("%d\n",array2[3]);
    printf("%d\n",array2[4]);
    // using for to input and output
    for(int i=0;i<10;i++){
        scanf("%c",array1[i]);
    }
    for(int j=0;j<10;j++){
        printf("%c\n",array1[j]);
    }
    // types of initialization and decalaration of array
    int manualarray[9]={9,8,7,6,5,4,3,2,1};
    int manualarray1[]={9,8,7,6,5,4,3,2,1};
    // using pointer with arrays
    int * ptr =&manualarray[0];
    // or
    // int *ptr = &manualarray;
    // or
    // int * ptr =manualarray[0];
    // or
    // int * ptr = manualarray;
    printf("%u",ptr);
    printf("%d",*ptr);
    for(int i=0;i<9;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}