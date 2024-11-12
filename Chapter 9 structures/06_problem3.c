// Create a structure representing a bank account of a customer.
#include <stdio.h>
struct bankaccount{
    int accountnumber;
    char ifsc[11];
    float balance;
    char name[100];
};
int main(){
    typedef struct bankaccount acc;
    acc a1={1111111,"22222222222",100.100,"Krrish"},*ptr=&a1;
    printf("Account no:%d\nAccount ifsc:%s\nAccount balance:%.4f\nAccount name:%s",ptr->accountnumber,ptr->ifsc,ptr->balance,ptr->name);  
    return 0;
}