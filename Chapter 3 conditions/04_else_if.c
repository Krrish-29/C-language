#include <stdio.h>
int main(){
    int age;
    printf("UR AGE\n");
    scanf("%d",&age);
    if (age>=60){
        printf("U are senior citizen and can drive\n");
    }
    else if(age>=45){
        printf("U are elder and can drive\n");
    }
    else if(age>=18){
        printf("U are young and can drive\n");
    }
    else {
        printf("U are too young to drive\n");
    }
    return 0;
}