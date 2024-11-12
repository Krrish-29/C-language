#include <stdio.h>
int factor(int a){
    if (a>1){
        a*=factor(a-1);
        return a;
    }
}
int main(){
    printf("Enter number you want factorial of:");
    int num;
    scanf("%d",&num);
    printf("%d",factor(num));
    return 0;
}