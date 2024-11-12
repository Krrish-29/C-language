// Write a program containing a function which reverses the array passed to it
#include <stdio.h>
void reversearray(char array[],int size){
    for(int i=0;i<size/2;i++){
        char temp =array[size-i-1];
        array[size-i-1]=array[i];
        array[i]=temp;
    }
    for(int i=0;i<size;i++){
        printf("%c",array[i]);
    }
}
int main(){
    char array[13]={'l','a','w','o','h','K',' ','h','s','i','r','r','K'};
    reversearray(array,13);
    return 0;
}