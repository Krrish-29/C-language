// Write a structure capable of storing date. Write a function to compare those dates.Solve for time using ‘typedef’ keyword.
#include <stdio.h>
typedef struct date{
    int day,month,year;
}d;
void comparison(d d1,d d2){
    if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year){
        printf("The d1 %d/%d/%d d2 %d/%d/%d is same",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
    }
    else if(d1.day==d2.day&&d1.month==d2.month&&d1.year!=d2.year){
        printf("Year is not same");
    }
    else if(d1.day==d2.day&&d1.month!=d2.month&&d1.year==d2.year){
        printf("Month is not same");
    }
    else if(d1.day!=d2.day&&d1.month==d2.month&&d1.year==d2.year){
        printf("Day is not same");
    }
    else if(d1.day==d2.day&&d1.month!=d2.month&&d1.year!=d2.year){
        printf("Year and Month is not same");
    }
    else if(d1.day!=d2.day&&d1.month==d2.month&&d1.year!=d2.year){
        printf("Year and Day is not same");
    }
    else if(d1.day!=d2.day&&d1.month!=d2.month&&d1.year==d2.year){
        printf("Month and Day is not same");
    }
    else{
        printf("Year , Month and Day is not same");

    }
}
int main(){
    d d1={29,5,2024},d2={27,9,2014};
    comparison(d1,d2);
}