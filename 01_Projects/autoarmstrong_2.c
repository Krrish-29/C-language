#include<stdio.h>
int exe(long long int,int*);
int exe(long long int number,int *counter){
    int digits=0,array[20]={0};
    long long sum=0,z,checkingnumber=number;
    for(long long int i =0,x=1000000000000000000;x>0;x/=10,i++){
        array[i] = number/x;
        if(((number/x)!=0)||(digits>0)){
            digits++;
        }
        number=number-(array[i]*x);
    }
    for(int j =0 ; j<19;j++){
        z = array[j];
        for(int a=2;a<=digits;a++){
            z*=array[j];
        }
        sum+=z;        
    }
    if(sum==checkingnumber){
        *counter+=1;
        printf("The number %lld is armstrong number\n",checkingnumber);
    }
    return 0;
}
int main(){
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
        exe(i,&counter);
    }
}