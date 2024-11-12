#include <stdio.h>
int main(){
    int a=20;
    do{
        printf("The value of a is %d\n",a);
        a++;
    }while(a<=25);
    int x,y=0;
    printf("Enter the number till which u want the  whole numbers:");
    scanf("%d",&x);
    do{
        printf("%d\n",y);
        y++;
    }while(y<=x);
    return 0;
}