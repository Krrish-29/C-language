#include <stdio.h>
int main(){
    int a;
    printf("Enter the value of the number till u want the natural numbers:");
    scanf("%d",&a);
    for(a;a;a++){
        printf("The value of a is %d\n",a);
        if (a%15==0){
            printf("%d is divisble by 15\n",a);
            continue;
        }
        else if (a==100){
            break;
        }
        }
    
    return 0;
}
