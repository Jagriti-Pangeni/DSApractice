#include <stdio.h>
#include <stdlib.h>
#define MAX_size 20
int arr[MAX_size];
int top=-1;
// defining an isFull function which checks if the stack is full or not.
int isFull(){
    if(top==MAX_size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int push(int data){
    if(isFull()){
        printf("opps!stack overflow");
    }
    else{
        top+=1;
        arr[top]=data;
    }
}
int pop(){
    if(isEmpty()){
        printf("opps!Stack underflow");
    }
    else{
        top-=1;
    }
}
int main() {
    // stack at the beggining.
    printf("%d",arr[top]);
    // pushing the first element in stack.
    push(2);
    // printing the element after pushing it.
    printf("%d",arr[top]);
    // pushing few more elements in stack.
    push(3);
    push(4);
    push(5);
    // printing all the elements of stack.
    for(int i=0; i<=top; i++){
        printf("%d\n",arr[i]);
    }
    // poping the stack element.
    pop();
    printf("after poping one element.");
    printf("%d",arr[top]);
    return 0;
}