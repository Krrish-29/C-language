#include <stdio.h>
int main(){
    printf("This program determines whether a student has passed or failed\n");
    float p,c,m;
    printf("Marks of the student in physics out of 100 is:\n");
    scanf("%f", &p);
    printf("Marks of the student in chemistry out of 100 is:\n");
    scanf("%f", &c);
    printf("Marks of the student in maths out of 100 is:\n");
    scanf("%f", &m);
    float a=(p+c+m)/3;
    if (a>=40){
        if(p>=33 &&c>=33){
            if (m>=33){
                printf("Pass");
            }
            else{
                printf("Fail due to %f percentage in Maths\n",m );
            }    
        }
        else if(p>=33 &&m>=33){
            if (c>=33){
                printf("Pass");
            }
            else{
                printf("Fail due to %f percentage in Chemistry\n",c);
            }    
        }
        else if(m>=33 &&c>=33){
            if (p>=33){
                printf("Pass");
            }
            else{
                printf("Fail due to %f percentage in Physics\n",p );
            }   
        }
        else if(p<33 &&c<33){
            if (m>=33){
                printf("Fail due to %f and %f percentage in Physics and Chemistry repectively",p,c);
            }
        }
        else if(c<33 &&m<33){
            if (p>=33){
                printf("Fail due to %f and %f percentage in  Chemistry and Maths repectively ",c,m);
            }
        }
        else if(p<33 &&m<33){
            if (c>=33){
                printf("Fail due to %f and %f percentage in Physics and Maths repectively",p,m);
            }
        }
    }
    else if (a<40){
        if(p>=33 &&c>=33){
            if(m>=33){
                printf("Failed due to %f percentage of Total\n",a);
            }
        }
        if(p>=33 &&c>=33){
            if (m<33){
                printf("Failed due to %f and %f percentage in Maths and Total respectively\n",m,a);
            }
        }
        else if(p>=33 &&m>=33){
            if (c<33){
                printf("Failed due to %f and %f percentage in Chemistry and Total respectively\n",c,a);
            }
        }
        else if(m>=33 &&c>=33){
            if (p<33){
                printf("Failed due to %f and %f percentage in Physics and Total respectively\n",p,a);
            }
        }
        else if(p<33 &&c<33){
            if (m<33){
                printf("Failed due to %f , %f , %f , %f percentage in Physics, Chemistry , Maths and Total respectively\n",p,c,m,a);
            }
        }
        if (p<33&&c<33){
            if(m>33){
                printf("Failed due to %f , %f and %f percentage in Physics ,Chemistry and Total respectively\n",p,c,a);
            }
        }
        else if (p<33&&m<33){
            if(c>33){
                printf("Failed due to %f , %f and %f percentage in Physics ,Maths and Total respectively\n",p,m,a);
            }
        }
        else if (m<33&&c<33){
            if(p>33){
                printf("Failed due to %f , %f and %f percentage in Maths ,Chemistry and Total respectively\n",m,c,a);
            }
        }
        
    }
        return 0;
}