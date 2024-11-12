#include<stdio.h>
void mergesort(int array1[],int array2[],int m,int n){
    int mainarray[m+n],k=0,i=0,j=0;
    for(i;i<m&&j<n;k++){
        if(array1[i]>array2[j]){
            mainarray[k]=array2[j];
            j++;
        }
        else{
            mainarray[k]=array1[i];
            i++;
        }
    }
    while(i<m){
        mainarray[k]=array1[i];
        i++,k++;
    }
    while(j<n){
        mainarray[k]=array2[j];
        j++,k++;
    }
    for(int a=0;a<m+n;a++){
        printf("%d ",mainarray[a]);
    }
}
int main(){
    int array1[]={1,4,5};
    int array2[]={2,3,6,7};
    int m=sizeof(array1)/sizeof(array1[0]), n=sizeof(array2)/sizeof(array2[0]);
    for(int i=0;i<m;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    printf("\n");
    mergesort(array1,array2,m,n);
}