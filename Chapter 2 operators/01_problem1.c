// Write a program to check whether a number is divisible by 97 or not
#include <stdio.h>
int main(){
    int a , b = 97 ;
    printf("Give a number greater than 97\n ");
    scanf("%d", &a);
    int c = a%b;
    printf("If the number shown here '%d' is 0 then the number provided %d is divisible by %d otherwise it is not divisible " , c , a , b );
    return 0;
}