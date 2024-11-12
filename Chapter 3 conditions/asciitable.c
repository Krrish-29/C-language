#include <stdio.h>
int main(){
    // Code to get 8- bit ascii table
    for (int i = 0; i <= 255; ++i) {
        printf("ASCII %d: %c\n", i, i);
    }
    return 0;
}