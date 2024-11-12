//Write a program having a variable ‘i’.and print the its address.Pass it variable to a function and print its address.Are these addresses same? Why? 
#include <stdio.h>
int address(int* a);
int address(int* a){
    printf("The address of the variable is %p\n",a);
    printf("The address of the variable is %u\n",a);
}
int main(){
    int i=10;
    printf("The address of the variable is %p\n",&i);
    printf("The address of the variable is %u\n",&i);
    address(&i);
    return 0;
}
// The addresess are different because the value given to the fucntion is a copy of i not actually i therefore there address are different.