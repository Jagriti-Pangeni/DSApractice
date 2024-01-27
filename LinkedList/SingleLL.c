//creating and traversing single link list.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*createnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
int main() {
    //declaring pointers
    struct node*head=createnode(6);
    struct node*second=createnode(9);
    struct node*third=createnode(10);
    //linking the list
    head->next=second;
    second->next=third;
    //printing the values
    struct node*current=head;
    while(current!=0){
        printf("%d\n" ,current->data);
        current=current->next;
    }

    return 0;
}