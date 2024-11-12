#include <stdio.h>
int main(){
    // divisiblity by two numbers u can change the value of b and c.
    int a,b ,c, e , f;
    printf("This program checks divisibilty of a number by two numbers using Logical operators\n");
    printf("Choose the First number \n");
    scanf("%d",&b);
    printf("Choose the Second number \n");
    scanf("%d",&c);

    printf("Try picking a number to check its divisibilty by %d and %d \n",b,c);
    scanf("%d", &a);
    if (a>=c&&a>=b){
        e= a%b , f=a%c;
        if (!e&&!f){
            printf("The number %d is  divisible by both %d and %d \n", a,b,c);
        }
        else{
            if (!e>!f){
                printf("The number %d is divisibe by %d but not divisible by %d\n",a,b,c);
            }
            if (!e<!f){
                printf("The number %d is divisibe by %d but not divisible by %d\n",a,c,b);
            }
        }
        if (e&&f){
            printf("The number %d is not divisible by both %d and %d\n",a,b,c);
        }
    }
    else{
        if(b>c){
        printf("Pls take a number greater than %d \n",b);
        }
        else{
            printf("Pls take a number greater than %d \n",c);

        }
    }
//     int a=1, b=0, c=1, d=1;
//     if(a){
//         printf("a is not 0\n");
//     }

//     if(b){
//         printf("b is not 0\n");
//     }
//         else{
//         printf("b is 0\n");
//         }
    
//     if (a&&c){
//         printf("both are true\n");
//     }

//     if(a){
//         if(c){
//             printf("both are true\n");
//         }
//     }
//     if (a||b){
//         printf("one of them is true\n");
//     }
//     if(!b){
//         printf("value of not b is %d", !b);
//     }
//     if (!(3>330)){
//     printf("it works when u use extra parenthesis");
// }
    
    return 0;
}