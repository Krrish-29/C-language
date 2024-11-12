#include<stdio.h>
void user_array();
void user_array(int* i ,int n){
// or
// void array(int i[],int n){
    for(int j=0;j<n;j++){
        printf("%d\n",*i);
        *i++;
    }
}
int main(){
    int array[11]={10,9,8,7,6,5,4,3,2,1,0};
    int *ptr=array;
    user_array(ptr,11);

    // multidimensional arrays
    int multiarray[3][4]={{1,2,3,4},
                          {5,6,7,8},
                          {9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",multiarray[i][j]);
        }
        printf("\n");
    }
}