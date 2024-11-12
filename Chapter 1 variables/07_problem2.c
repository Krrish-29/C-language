//Calculate the area of a circle and modify the program to calculate the volume of a cylinder given its radius and height  
#include <stdio.h>
int main(){
    // printf("This code is to calculate the area of a circle \n");
    // printf("What is the radius of the circle\n");
    // float r;
    // scanf("%f", &r);
    // printf("The area of the circle with radius %f is %f", r ,3.14*r*r);
    printf("This code is to calculate area of a cylinder\n");
    printf("What is the radius of the  cylinder\n");
    float r , h;
    scanf("%f", &r);
    printf("The height of the cylinder is\n");
    scanf("%f" , &h);
    printf("The area of the cylinder with radius %f and height is %f is %f" , r , h,  (22/7)*r*r*h);
    return 0;
   
}