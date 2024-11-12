#include <stdio.h>
void ten_times(int *x, int *y) {
    *x*=10;
    *y*=10;
} 
void swap (int *x, int *y)  {
    int temp; 
    temp = *x;
    *x = *y; 
    *y = temp; 
} 
int main(){
    int a=90,b=40;
    printf("The value of a is %d and b is %d\n",a,b);
    ten_times(&a,&b);
    printf("The value of a is %d and b is %d\n",a,b);
    int x=30,y=80;
    printf("The value of x is %d and y is %d\n",x,y);
    swap(&x,&y);
    printf("The value of x is %d and y is %d\n",x,y);
    return 0;
}