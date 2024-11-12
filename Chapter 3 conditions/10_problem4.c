#include <stdio.h>
int main() {
    char character;
    printf("Type a character:");
    scanf("%c",&character);
    if(character>=97&&character<=122){
    printf("The charcter is a lower case\n");
    }
    else{
    printf("The character is not lower case\n"); 
    }
    printf("The value of character %c is %d",character,character);
    return 0;
}
