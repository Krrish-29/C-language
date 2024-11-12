#include <stdio.h>
int main(){
    int income ;
    printf("This program calculates the income per annum tax paid by an employee to the government as per the tax slabs\n");
    printf("Enter the income:\n");
    scanf("%d",&income);
    if (income<250000){
        printf("No tax is appiled on the income of %d", income);
    }
    else if (income>=250000 && income<500000){
        printf("According the tax slab 5 %c is applied on the income %d therefore income tax to be paid is %f ",37,income,(income-250000)*0.05);
    }
    else if (income>=500000 && income<1000000){
        printf("According the tax slab 20 %c is applied on the income %d therefore income tax to be paid is %f ",37,income,0.05*(500000-250000)+(income-500000)*0.2);
    }
    else {
        printf("According the tax slab 30 %c is applied on the income %d therefore income tax to be paid is %f  ",37,income,0.05*(500000-2500000)+ 0.2*(1000000-500000)+0.3*(income-1000000));
    }
    
    return 0;
}