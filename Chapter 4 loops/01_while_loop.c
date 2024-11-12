#include <stdio.h>
int main(){
    int x=10;
    while(x<20){
        printf("the value of x is %d\n",x);
        x++;
    }

    int o=0;
    while(o<=20){
        if(o>10){
            printf("hi%d\n",o);
        }
    o++;
    }

// compund assignment operators
    int a,b,c,d,e,f,g,h,i;
    a=b=c=d=e=g=h=i=10,f=1000;
    a+=5,b-=5,c/=5,d%=5,e<<=10/*left shift */,f>>=4/*right shift*/,g&=5/*bitwise and*/,h|=5/*bitwise or*/,i^=2/*bitwise xor*/;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%d\n",f);
    printf("g=%d\n",g);
    printf("h=%d\n",h);
    printf("i=%d\n",i);
    return 0;
}