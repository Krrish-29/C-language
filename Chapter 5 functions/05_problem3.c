// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.
#include<stdio.h>
float force(float body){
    body*=9.8;
    return body;
}
int main(){
    float mass;
    printf("Function to calculate force of attraction on a body by earth. [Considering g = 9.8m/s2.]\n");
    printf("Enter the mass of the body (in kg):");
    scanf("%f",&mass);
    printf("The force of attraction on a body of mass %fkg exerted by earth is %fN",mass,force(mass));
}