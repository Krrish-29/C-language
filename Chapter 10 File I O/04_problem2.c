// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
#include <stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    FILE*ptr=fopen("04_problem2.txt","w");
    fprintf(ptr,"The multiplication table of %d is :\n",number);
    for(int i=1;i<11;i++){
        fprintf(ptr,"%dX%d=%d\n",number,i,number*i);
    }
    fclose(ptr);
    return 0;
}