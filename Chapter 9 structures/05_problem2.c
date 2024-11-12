// Write a program with a structure representing a complex number 
// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.
// Write problem 5’s structure using ‘typedef’ keywords.
#include <stdio.h>
typedef struct complex{
    float real,imaginary;
}comp ;
void display(comp number){
    printf("Complex number is:%.2f +%.2fi\n",number.real,number.imaginary);
}
int main(){
    comp array[5];
    for(int i =0;i<5;i++){
        printf("Enter the number %d real part:",i+1);
        scanf("%f",&array[i].real);
        printf("Enter the number %d imaginary part:",i+1);
        scanf("%f",&array[i].imaginary);
        display(array[i]);
    }
    for(int i=0;i<5;i++){
        printf("Complex number %d is:%.2f +%.2fi\n",i+1,array[i].real,array[i].imaginary);
    }
    return 0;
}