// Write a program to read a text file character by character and write its content twice in separate file.
#include <stdio.h>
int main(){
    char array[110];
    int i=0;
    FILE*ptr=fopen("05_problem3(1).txt","r");
    FILE*ptr1=fopen("05_problem3(2).txt","w");
    if(ptr==NULL){
        return 0;
    }
    while(1){
        if(feof(ptr)){
            break;
        }
        array[i]=fgetc(ptr);
        printf("%c",array[i]);
        i++;
    }
    array[i-1]='\0';
    i=0;
    if(ptr1==NULL){
        return 0;
    }
    while(array[i]!='\0'){
        fputc(array[i],ptr1);
        fputc(array[i],ptr1);
        i++;
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}