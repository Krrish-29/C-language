// Explain step by step evaluation of 3*x/y-z+k, where x=2,y=3,z=3,k=1
#include <stdio.h>
int main(){
    int x=2, y=3 ,z=3, k=1;
    printf("the value of the expression 3*x/y-z+k is %d\n", 3*x/y-z+k);
    printf("using the first rule of precedence first *and / fuctions will perform\n");
    printf("and then using rule of associativity first we will multiply 3 by x and get 6\n");
    printf("then we will divide it by y and get 2 then do -z+k to get the final answer 0\n");
    return 0;
}