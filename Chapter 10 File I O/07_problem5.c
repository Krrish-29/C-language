// Write a program to modify a file containing an integer to double its value.
#include <stdio.h>
int main(){
    int num;
    FILE*ptr=fopen("7_problem5.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("7_problem5.txt","w");
    fprintf(ptr,"%d",num*2);
    return 0;
}