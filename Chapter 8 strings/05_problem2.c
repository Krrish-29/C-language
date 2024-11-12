// Write your own version of strlen function from <string.h> 
#include <stdio.h>
#include<string.h>
void stringlenght(char st[]){
    int lenght=0,i=0;
    while(st[i]!='\0'){
        i++,lenght++;
    }
    printf("%d\n",lenght);
}
int main(){
    char st[]="Krrish Khowal";
    int length=sizeof(st)/sizeof(st[0]);
    printf("%d\n",length-1);
    // OR
    printf("%d\n",strlen(st));  
    // OR
    stringlenght(st);  
    return 0;
}
