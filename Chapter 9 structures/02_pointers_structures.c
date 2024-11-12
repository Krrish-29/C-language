#include<stdio.h>
#include<string.h>
struct employee { 
int code;
float salary;
char name[8];
}; 
void show(struct employee e){
    printf("%d %.2f %s\n",e.code,e.salary,e.name);    
}
int main(){
    struct employee e1={1,1.5,"Krrish"},*ptr;
    ptr = &e1;
    printf("%d %.2f %s\n",e1.code,e1.salary,e1.name);
    printf("%d %.2f %s\n",(*ptr).code,(*ptr).salary,(*ptr).name);
    printf("%d %.2f %s\n",ptr->code,ptr->salary,ptr->name);
    show(e1);
    

}