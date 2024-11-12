#include <stdio.h>
int main(){  
    int a='w';
    switch(a){
        case 'w':
        printf("w");
    }
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("1\n");
        case 2:
        printf("2\n");
        case 3:
        printf("3\n");
        case 4:
        printf("4\n");
        default:
        printf("This is deflault");
    }
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    switch(b){
        case 1:
        printf("1\n");
        break;
        case 2:
        printf("2\n");
        break;
        case 3:
        printf("3\n");
        break;
        case 4:
        printf("4\n");
        break;
        default:
        printf("nothing matched");
    }
    return 0;
}