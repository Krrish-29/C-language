// Create a three–dimensional array and print the address of its elements in increasing order. 
#include <stdio.h>
int main(){
    int x=3,y=4,z=5;
    int multidarray[x][y][z];
    int *ptr=multidarray;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                printf("%u ",ptr++);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}