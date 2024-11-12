// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal. 
#include<stdio.h>
#include<string.h>
int main(){
    char st1[8];
    printf("Enter name:");
    scanf("%s",st1);
    char st2[8];
    printf("Enter name:");
    for(int i=0;i<7;i++){
        scanf("%c",&st2[i]);
        fflush(stdin);
    }
    st1[7]='\0';

}