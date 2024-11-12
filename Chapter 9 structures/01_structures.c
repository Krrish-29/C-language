#include<stdio.h>
#include<string.h>
struct employee { int code;
float salary;
char name[8];
}; 
int main(){
    struct employee e1,e2,e[100];
    e1.code = 1;
    e1.salary = 1.5;
    strcpy(e1.name, "Krrish");  
    printf("%d %.2f %s\n",e1.code,e1.salary,e1.name);

    e[0].code=2;
    e[0].salary = 2.5;
    strcpy(e[0].name, "Krrish");  
    printf("%d %.2f %s\n",e[0].code,e[0].salary,e[0].name);

    struct employee e3={3,3.5,"Krrish"};
    struct employee e4={4,4.5,"Krrish"};
    printf("%d %.2f %s\n",e3.code,e3.salary,e3.name);
    printf("%d %.2f %s\n",e4.code,e4.salary,e4.name);

    for(int i=0;i<10;i++){
        printf("%d\n",&e[i]);
    }
}