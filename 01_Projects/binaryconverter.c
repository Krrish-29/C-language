#include <stdio.h>
int main(){
    long int a;
    printf("Enter the number you want to convert to a number to binary:");
    scanf("%ld",&a);
    int bits[21]={0};
    for(int i=0;i<=20;a=a/2,i++){
        bits[i] = a%2;
    }
    for(int j=20;j>=0;j--){
        printf("%d",bits[j]);
    }
    printf("\n");
    for(int i =20;i>=0;i--){
    printf("2^%d=%d\n",i,bits[i]);
    }
}