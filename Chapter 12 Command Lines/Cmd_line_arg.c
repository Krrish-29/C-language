#include <stdio.h>
int main(int argc,char*argv[]){
    printf("Proagam name:%s",argv[0]);
    if(argc==1){
        printf("\nNo extra command line argument is passed other than program name");
    }
    if(argc>=2){
        printf("\nNumber of arguments passed :%d",argc);
        printf("\nFollowing are the command line passed");
        for(int i=0;i<argc;i++){
            printf("\nargv[%d]:%s",i,argv[i]);
        }
    }    
    return 0;
}
// gcc -o myprogram myprogram.c
// ./myprogram argumnets