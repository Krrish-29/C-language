#include <stdio.h>
int main(){
    int a, b = 97;
    printf("Give a number greater than 97\n");
    scanf("%d", &a);
    int c = a%b;
    if (a>=97){
        if(c==0){
            int c = a%b;
            printf("The number %d is divisible by %d\n", a, b);
        }
        else {
        printf("The number %d is not divisible by 97", a);
        }
    }
    if(a < 97){
        printf("Please enter a number greater than or equal to 97\n ");
    }

    return 0;
}