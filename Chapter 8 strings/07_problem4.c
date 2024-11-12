// Write your own version of strcpy function from <string.h> 
#include<stdio.h>
void stringcopy(char target[],char source[],int lenght){
    for(int i=0;i<lenght;i++){
        target[i]=source[i];
    }
    target[lenght]='\0';
}
int main(){
    char st[]="Krrish Khowal";
    char st1[30];
    int length = sizeof(st)/sizeof(st[0]);
    stringcopy(st1,st,length);
    printf("%s\n",st);
    printf("%s",st1);
}