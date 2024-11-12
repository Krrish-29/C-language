#include <stdio.h>
int main(){
    int marks_1,marks_2,marks_3,average;
    average = (marks_1+marks_2+marks_3)/3;
    printf("Enter the marks of the student in Maths:");
    scanf("%d",&marks_1);
    printf("Enter the marks of the student in Physics:");
    scanf("%d",&marks_2);
    printf("Enter the marks of the student in Chemistry:");
    scanf("%d",&marks_3);
    if (average>40){
        if(marks_1>33&&marks_2>33&&marks_3>33){
            printf("pass");
        }
        else{
            printf("fail");
        }
    }
    else{
        printf("fail");
    }
    return 0;
}