#include <stdio.h>
long long int exe(long long int,long long int);
long long int exe(long long int digits,long long int number){
    long long int y,sum=0,z=1;
    for(long long int x= 1000000000000000000;x>=1;x/=10){
        y=number/x;
        number-=x*y;
        z=y;
        if(y!=0){
            for(int i=2;i<=digits;i++){
                z*=y;
            }
            sum+=z;
        }
    }
    return sum;
}
void output(long long int , long long int ,int*);
void output(long long int sum, long long int i , int* counter){
    if(sum==i){
        printf("%lld is a armstrong number\n",sum);\
        *counter+=1;
    }
}
int main(){
    long long int SUM;
    int counter=0;
    printf("Program  to find all the armstrong numbers till 17 digits.\n");
    for(long long int i = 0;i<1000000000000000000;i++){
        // making execution faster:
        // if(counter==27){
        //     i=88593477;
        // }
        // if(counter==28){
        //     i=146511208;
        // }
        // if(counter==29){
        //     i=472335975;
        // }
        // if(counter==30){
        //     i=534494836;
        // }
        // if(counter==31){
        //     i=912985153;
        // }
        // if(counter==32){
        //     i=4679307774;        
        // }
        // if(counter==33){
        //     i=32164049650;
        // }
        // if(counter==35){
        //     i=40028394225;
        // }
        // if(counter==36){
        //     i=42678290603;
        // }
        // if(counter==37){
        //     i=44708635679;
        // }
        // if(counter==38){
        //     i=49388550606;
        // }
        // if(counter==39){
        //     i=82693916578;
        // }  
        // if(counter==40){
        //     i=94204591914;
        // }
        // if(counter==41){
        //     i=28116440335967;
        // }
        // if(counter==42){
        //     i=4338281769391370;
        // }
        // if(counter==44){
        //     i=21897142587612075;
        // }
        // if(counter==45){
        //     i=35641594208964132;
        // }
        // if(counter==46){
        //     i=35875699062250035;
        // }
        if(i<10){ 
            SUM=exe(1,i);
            output(SUM,i,&counter);
        }
        else if(i>=100&&i<1000){
            SUM=exe(3,i);
            output(SUM,i,&counter);
        }
        else if(i>=1000&&i<10000){
            SUM=exe(4,i);
            output(SUM,i,&counter);
        }
        else if(i>=10000&&i<100000){
            SUM=exe(5,i);
            output(SUM,i,&counter);
        }
        else if(i>=100000&&i<1000000){
            SUM=exe(6,i);
            output(SUM,i,&counter);
        }
        else if(i>=1000000&&i<10000000){
            SUM=exe(7,i);
            output(SUM,i,&counter);
        }
        else if(i>=10000000&&i<100000000){
            SUM=exe(8,i);
            output(SUM,i,&counter);
        }
        else if(i>=100000000&&i<1000000000){
            SUM=exe(9,i);
            output(SUM,i,&counter);
        }
        else if(i>=1000000000&&i<10000000000){
            SUM=exe(10,i);
            output(SUM,i,&counter);
        }
        else if(i>=10000000000&&i<100000000000){
            SUM=exe(11,i);
            output(SUM,i,&counter);
        }
        else if(i>=100000000000&&i<1000000000000){
            SUM=exe(12,i);
            output(SUM,i,&counter);
        }
        else if(i>=1000000000000&&i<10000000000000){
            SUM=exe(13,i);
            output(SUM,i,&counter);
        }
    }
}