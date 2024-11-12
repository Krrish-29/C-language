#include<stdio.h>
#include<string.h>
// typedef struct employee { 
// int code;
// float salary;
// char name[8];
// }emp;
// int main(){
//     emp e1={1,1.5,"Krrish"};
//     printf("%d %.2f %s\n",e1.code,e1.salary,e1.name);
// } 
// OR
struct employee { 
int code;
float salary;
char name[8];
}emp;
int main(){
    typedef struct employee emp;
    emp e1={1,1.5,"Krrish"};
    printf("%d %.2f %s\n",e1.code,e1.salary,e1.name);
} 