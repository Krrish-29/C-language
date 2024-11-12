#include<stdio.h>
void selectionsort(int * ptr, int n){
    for(int a=0;a<n-1;a++){
        int smallestvalueidex=a;
        for(int b=a+1;b<n;b++){
            if(*(ptr+smallestvalueidex)>*(ptr+b)){
                smallestvalueidex=b;
            }
        }
        int temp=*(ptr+a);
        *(ptr+a)=*(ptr+smallestvalueidex);
        *(ptr+smallestvalueidex)=temp;
    }
}
int main(){
    int array[]={10,9,5,6,7,2,4,3,1};
    int n=sizeof(array)/sizeof(array[0]);
    printf("Initial array:");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    selectionsort(array,n);
    printf("Final array:");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}