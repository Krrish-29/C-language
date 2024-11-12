#include<stdio.h>
int exe(long long int);
int exe(long long int number){
    int digits=0,array[30]={0};
    long long sum=0,z,checkingnumber=number;
    for(long long int i =0,x=1000000000000000000;x>0;x/=10,i++){
        array[i] = number/x;
        if(((number/x)!=0)||(digits>0)){
            digits++;
        }
        number=number-(array[i]*x);
    }
    for(int j =0 ; j<29;j++){
        z = array[j];
        for(int a=2;a<=digits;a++){
            z*=array[j];
        }
        sum+=z;        
    }
    if(sum==checkingnumber){
        printf("The number %lld is armstrong number",checkingnumber);
    }
    return 0;
}
int main(){   
    printf("Program to check for armstrong number till 17 digits.\n");
    long long int number;
    printf("Enter the number :");
    scanf("%lld",&number);
    exe(number);
}