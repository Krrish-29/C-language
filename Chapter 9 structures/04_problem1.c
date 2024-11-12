//Create a two-dimensional vector using structures
// Write a function ‘sumVector’ which returns the sum of two vectors passed to it.The vectors must be two–dimensional.
// Write a program to illustrate the use of arrow operator → in C
#include <stdio.h>
struct vector{
    int i,j;
};
struct vector sum_vector(struct vector v1,struct vector v2){
    struct vector v3={(v1.i+v2.i),(v1.j+v2.j)};
    return v3;
}
int main(){
    struct vector v={5,6},*ptr=&v;
    printf("The value of the vector is %di + %dj.\n",ptr->i,ptr->j);
    struct vector v1={2,7},v2={3,8},v3=sum_vector(v1,v2),*ptr1=&v3;
    printf("The value of the vector is %di + %dj.\n",v1.i,v1.j);
    printf("The value of the vector is %di + %dj.\n",v2.i,v2.j);
    printf("The value of the vector v1 and v2is %di + %dj.\n",ptr1->i,ptr1->j);
    return 0;
}