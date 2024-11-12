#include<stdio.h>
void bubblesort(int*ptr,int n){
    for(int a=0;a<n-1;a++){
        for(int b=0;b<n-a-1;b++){
            if(*(ptr+b)>*(ptr+b+1)){
                int temp=*(ptr+b);
                *(ptr+b)=*(ptr+b+1);    
                *(ptr+b+1)=temp;
            }
        }
    }
}
int main(){
    int array[]={10,9,5,6,7,2,4,3,1};
    int n =sizeof(array)/sizeof(array[0]);
    printf("Initial array:");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    bubblesort(array,n);
    printf("Final array:");
    for(int c=0;c<n;c++){
        printf("%d ",array[c]);
    }
}