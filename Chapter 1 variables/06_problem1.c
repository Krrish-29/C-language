// write a program to calculate area of a rectangle using inputs suppplied by the user
#include <stdio.h>
int main(){
    printf("Hi u can use this code to calculate the area of a rectangle\n" );
    printf("Tell me the length of the rectangle\n ");
    int len , bre;
    scanf("%d" , &len);
    printf("And what is the breadth of the rectangle\n " );
    scanf("%d", &bre);
    printf("The area of the rectangle is %d", len*bre);
    return 0;
}