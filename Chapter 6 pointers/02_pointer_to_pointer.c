#include <stdio.h>
// function returning there address
int* sum(int,  int );
int* sum(int a, int b){
    int s= a+b;
    int*ptr = &s;
    printf("The sum is %d \n",s);
    return ptr;
}
int main(){
    int x=10,y=20;
    int*ptr1 = sum(x,y);
    printf("The address of the pointer is %u",ptr1);
// pointer to pointer
    int i =100;
    int*j = &i;
    int**k=&j;
    int***l=&k;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",**k);
    printf("The value of i is %d\n",***l);
    
    return 0;
}