// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice. 
#include <stdio.h>
#include<string.h>
void slice(char st[],int m ,int n){
    int length= strlen(st);
    for (int i = 0; i < m; i++){
        st[i]=' ';
    }
    for (int i = n+1 ; i <= length; i++){
        st[i]=' ';
    }
}
int main(){
    char st[]="Krrish Khowal";
    printf("%s\n",st);
    int m=3,n=9;
    slice(st,m,n);    
    printf("%s",st);
}