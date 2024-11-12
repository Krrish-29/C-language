// Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>
float temperatureinC(float tempinC){
    float tempinF = (1.8*tempinC)+32;
    return tempinF;
}
float temperatureinF(float tempinF){
    float tempinC = (tempinF-32)/1.8;
    return tempinC;
}
int main(){
    float temp;
    int func;
    printf("Function to convert Celsius temperature into Fahrenheit and vice a versa.\n");
    printf("Which Conversion u want:\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n");
    scanf("%d",&func);
    switch(func){
        case 1:
        printf("Enter the temperature in Celsius:");
        scanf("%f",&temp);
        printf("The temperature in Fahrenheite is %f F ",temperatureinC(temp));
        break;
        case 2:
        printf("Enter the temperature in Fahrenheite:");
        scanf("%f",&temp);
        printf("The temperature in Celsius is %f `C ",temperatureinF(temp));
        break;
    }

}