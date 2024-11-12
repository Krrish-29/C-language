#include <stdio.h>
int start=-1,end=-1,Queue[10];
int dequeue(){
    if(start==-1&&end==-1){
        printf("Under Flow.\n"); 
    }
    else{
        int variable=Queue[++start];
        printf("Element dequeued from the Queue is %d.\n",variable);
        for(int i=0;i<end;i++){
            Queue[start+i]=Queue[start+i+1];
        }
        Queue[end]=0;
        start--,end--;
        return variable;
    }
}
void enqueue(int number){
    if(end>=9){
        printf("Over Flow.\n");
    }
    else{
        printf("%d is queued into the Queue.\n",number);
        end+=1;
        Queue[end]=number;
    }
}
void isFull(){
    if(end==9){
        printf("True.\n");
    }
    else{
        printf("False.\n");
    }
}
void isEmpty(){
    if(start==-1&&end==-1){
        printf("True.\n");
    }
    else{
        printf("False.\n");
    }
}
int top(){
    if(start==-1&&end==-1){
        printf("Queue is empty.\n");
    }
    else{
        printf("The top element of the Queue is %d.\n",Queue[start+1]);
        return Queue[start+1];
    }
}
int main(){
    dequeue(); 
    enqueue(5); 
    top(); 
    isFull(); 
    dequeue(); 
    top(); 
    isEmpty(); 
}