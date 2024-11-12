#include <stdio.h>
int main(){
    char st1[]={'K','r','r','i','s','h',' ','K','h','o','w','a','l','\0'};
    char st2[14]="Krrish Khowal";
    printf("%c\n", st1[0]);
    printf("%s\n", st2);

    char st3[14];
    for(int i=0;i<14;i++){
        scanf("%c",&st3[i]);
    }
    for(int i=0;i<14;i++){
        printf("%c",st3[i]);
    }

    char st4[14];
    scanf("%s",st4);
    printf("%s\n",st4);

    char st5[100];
    gets(st5);
    puts(st5);
    return 0;
}