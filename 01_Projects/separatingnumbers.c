#include <stdio.h>
int main(){
    int number,sum=0;
    printf("Enter the number :");
    scanf("%d",&number);
    for(float x= 1000000000;x>=10.0;x/=10.0){
        int y =number/((int)x);
        if(y!=0){
            printf("%d+",y);
            sum+=y;
            number-=((int)x)*y;
        }
    }
    printf("%d=%d",number,sum+number);
    return 0;
}