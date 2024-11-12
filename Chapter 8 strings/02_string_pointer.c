#include <stdio.h>
int main(){
    char * st="krrish";
    printf("%c\n",*st);
    for(int i=0;i<6;i++){
        printf("%c",*(st+i));
    }
    printf("\n");
    st="khowal";
    printf("%s\n",st);

    char st1[]="Jrrish khowal";
    char*ptr=st1;
    *ptr='K';
    printf("%s",st1);
}