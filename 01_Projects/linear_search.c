// #include <stdio.h>
// int main(){
    // int array[]={10,9,5,6,7,2,4,3,1},index=-1,number,n=sizeof(array)/sizeof(array[0]);
    // printf("Linear Search:\nEnter the number you want to find in the array:");
    // scanf("%d",&number);
    // for(int i=0;i<n;i++){
    //     if(array[i]==number){
    //         index+=1;
    //         break;
    //     }
    //     else{
    //         index+=1;
    //     }
    // }
    // index==-1?printf("The number %d is not in the array",number):printf("The number %d is on %d index in the array",number,index);
    // return 0;
// }
#include <stdio.h>
int linear_search(int array[],int n,int number){
    for(int index=0;index<n;index++){
        if(*(array+index)==number){
            return index;
            break;
        }
    }
    return -1;
}
int main(){
    int array[]={10,9,5,6,7,2,4,3,1},number,n=sizeof(array)/sizeof(array[0]);
    printf("Linear Search:\nEnter the number you want to find in the array:");
    scanf("%d",&number);
    int index=linear_search(array,n,number);
    index==-1?printf("The number %d is not in the array.",number):printf("The number %d is on %d index in the array.",number,index);
    return 0;
}