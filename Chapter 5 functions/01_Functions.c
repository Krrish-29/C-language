#include <stdio.h>
// int sum();
int sum (int sum1, int sum2){
    printf("The sum is %d",sum1+sum2);
    return sum1+sum2;
}

int change();
int change(int a){
    int b = 20;
    return 0;
}

int main(){
    int a= 99 , b =11;
    int a1=15;
    int c = sum(a,b);
    printf("%d",c);
    printf("%d",sum(6,7));


    change(a1);
    printf("\n%d",a1);
    
}

