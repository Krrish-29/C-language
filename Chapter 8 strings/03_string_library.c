#include<stdio.h>
#include<string.h>
int main(){
    char st[]="Krrish Khowal";
    int length = strlen(st); 
    printf("%d",length);

    char* st1="krrish ";
    char st2[30]="khowal";
    strcpy(st2,st1);
    printf("%s\n",st2);


    strcat(st2,st1);
    printf("%s\n",st2);
    printf("%s\n",st1);


    printf("%d\n",strcmp("far", "joke"));
    printf("%d",strcmp("joke", "far"));
    
}