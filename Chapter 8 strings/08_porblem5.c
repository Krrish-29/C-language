//  Write a program to encrypt a string by adding 1 to the ascii value of its characters. 
#include <stdio.h>
#include<string.h>
void encrypt(char st1[],char st2[]){
    int lenght=strlen(st1);
    for(int i=0;i<lenght;i++){
        st2[i]=st1[i]+5;
    }
    st2[lenght]='\0';
    for(int i=0;i<lenght;i++){ 
        printf("%03d",st2[i]);
    }
}
void decrypt(char st3[],char st4[]){
    int lenght=strlen(st3);
    for(int j=0;j<lenght/3;j++){
        for(int i=3*j;i<3*(j+1);i+=3){
        st4[j]=((st3[i]-48)*100)+((st3[i+1]-48)*10)+st3[i+2]-48-5;
        }
    }
    st4[lenght/3]='\0';
    printf("%s",st4);
}
int main(){
    char st1[100],st2[100],st3[100],st4[100];
    printf("Enter a string:\n");
    gets(st1);
    encrypt(st1,st2);
    printf("Enter a string:\n");
    scanf("%s",st3);
    decrypt(st3,st4);
    return 0;
}