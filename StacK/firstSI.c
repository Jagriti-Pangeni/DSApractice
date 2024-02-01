#include <stdio.h>
#include <stdlib.h>
# define MAX_SIZE 5
int top=-1;
int stack_arr[MAX_SIZE];

void push(int data){
    if(top==MAX_SIZE-1){
        printf("opps!Stack overflow");
        return;
    }
    top+=1;
    stack_arr[top]=data;
}
int main() {
    push(1);
    printf("after 1 push:%d\n" ,stack_arr[top]);
    push(2);
    printf("after 2 push:%d\n" ,stack_arr[top]);
    push(3);
    printf("after 3 push:%d\n" ,stack_arr[top]);
    push(4);
    push(5);
    push(6);
    return 0;
}