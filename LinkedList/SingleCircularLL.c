//creating a singly circular link list.
#include <stdio.h>
#include <stdlib.h>
//defining strcture for link list.
struct node{
    int data;
    struct node *next;
};
//A function for creating nodes.
struct node*createnode(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
int main() {
    //passing values to nodes.
    struct node*head=createnode(9);
    struct node*second=createnode(10);
    struct node*third=createnode(11);

    //Linking the list in circular form 
    head->next=second;
    second->next=third;
    third->next=head;

    //printing the list using loop. it is will be an infinite loop but we will still create it to check if i 
    //had created the list correctly.

    struct node *current=head;
   while(current->next!=NULL){
     printf("%d\n",current->data);
    current=current->next;
   }
// freeing the memory.
    free(head);
    free(second);
    free(third);
    return 0;
}