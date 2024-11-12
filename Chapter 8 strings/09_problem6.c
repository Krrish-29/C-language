// Write a program to count the occurrence of a given character in a string.
// Write a program to check whether a given character is present in a string or not
#include <stdio.h>
#include<string.h>
int main(){
    char letter,st[]="Krrish Khowal";
    int counter=0;
    printf("Enter the character want to check:");
    scanf("%c",&letter);
    for(int i=0;i<strlen(st);i++){
        if(st[i]==letter){
        counter++;
        }
    }
    if(counter>0){
        printf("The character %c is present in the string %s.\n",letter,st);
    }
    else{
        printf("The character %c is not present in the string %s.\n",letter,st);
    }
    printf("The character %c occured %d times in %s.",letter,counter,st);
    return 0;
}