#include <stdio.h>
int main(){
    FILE*ptr;
    ptr=fopen("01_file.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("%d",num);
    fclose(ptr);
    FILE*ptr1;
    ptr1=fopen("01_file.txt","w");
    fprintf(ptr1,"%d",20);
    fclose(ptr1);
    FILE*ptr2;
    ptr2=fopen("01_file.txt","a");
    fprintf(ptr2," The reading mode \"append\" is used to write to a file without erasing it first.Also it creates a file if it does not exists");
}