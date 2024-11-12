// Write a program using function to print the following pattern (first n lines).
//  * 
// * * * 
// * * * * * 
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of line of stars you want:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}