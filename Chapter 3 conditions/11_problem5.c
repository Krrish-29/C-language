#include <stdio.h>
int main(){
    int a , b, c,d;
    printf("Enter 4 numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b&&a>c&&a>d){
        printf("FIRST NUMBER %d is THE GREATEST OF ALL",a);
    }
    else if(b>a&&b>c&&b>d){
        printf("SECOND NUMBER %d is THE GREATEST OF ALL",b);
    }
    else if(c>b&&a<c&&c>d){
        printf("THIRD NUMBER %d is THE GREATEST OF ALL",c);
    }
    else if(d>b&&d>c&&a<d){
        printf("FOURTH NUMBER %d is THE GREATEST OF ALL",d);
    }
    return 0;
}