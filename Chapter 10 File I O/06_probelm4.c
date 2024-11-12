// Take name and salary of two employees as input from the user and write them to a text file in the following format: i. Name1, 3300 ii. Name2, 7700
#include <stdio.h>
int main(){
    float salary1,salary2;
    char name1[20],name2[20];
    printf("Enter the name of the employee 1:");
    scanf("%[^\n]",name1);
    printf("Enter the salary of employee 1:");
    scanf("%f",&salary1);
    fflush(stdin);
    printf("Enter the name of the employee 2:");
    scanf("%[^\n]",name2);
    printf("Enter the salary of employee 2:");
    scanf("%f",&salary2);
    FILE*ptr=fopen("06_problem4.txt","w");
    fprintf(ptr,"i.%s, %.2f\nii.%s, %.2f",name1,salary1,name2,salary2);
    return 0;
}