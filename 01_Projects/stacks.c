#include <stdio.h> 
int n=-1,stack[10]; 
int pop(){ 
    if(n==-1){ 
        printf("Under Flow.\n");  
    } 
    else{ 
        int variable=stack[n]; 
        printf("Element poped from the stack is %d.\n",variable); 
        stack[n]=0; 
        n-=1; 
        return variable; 
    } 
} 
void push(int number){ 
    if(n>10){ 
        printf("Over Flow.\n"); 
    } 
    else{ 
        printf("%d is pushed into the stack.\n",number); 
        n+=1; 
        stack[n]=number; 
    } 
} 
void isFull(){ 
    if(n==9){ 
        printf("True.\n"); 
    } 
    else{ 
        printf("False.\n"); 
    } 
} 
void isEmpty(){ 
    if(n==-1){ 
        printf("True.\n"); 
    } 
    else{ 
        printf("False.\n"); 
    } 
} 
int top(){ 
    if(n==-1){ 
        printf("Stack is empty.\n"); 
    } 
    else{ 
        printf("The top element of the stack is %d.\n",stack[n]); 
        return stack[n]; 
    } 
} 
int main(){ 
    pop();     
    push(6); 
    top(); 
    isFull(); 
    pop(); 
    top(); 
    isEmpty(); 
}