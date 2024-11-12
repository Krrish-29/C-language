#include <stdio.h>
int main(){
    int a=10;
    int*b= &a;
    
    printf("The value of a is %d\n",a);
    printf("The value of a is %p\n",&a);
    printf("The value of a is %u\n",&a);


    printf("The value of b is %d\n",b);
    printf("The value of b is %p\n",b);
    printf("The value of b is %u\n",b);

    printf("The value of b is %d\n",*(&b));
    printf("The value of b is %d\n",(&b));

    char c= 'a';
    char*d=&c;
    
    float i =10.1;
    float*j=&i;
}