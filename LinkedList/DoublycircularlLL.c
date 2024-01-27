//creating a doubly circular link list.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//creating a structure 
struct node{
    struct node*pre;
    int age;
    char name[20];
    float salary;
    struct node*next;
};

//creating a function for creating a node;
struct node* createnode(int data1, char *data2, float data3){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->pre=NULL;
    newNode->age=data1;
    strcpy(newNode->name, data2);
    newNode->salary=data3;
    newNode->next=NULL;
    return newNode;
}

int main() {
    //creating the list.
    struct node*head=createnode(23,"Samundra",400.123);
    struct node*second=createnode(20,"Jagriti",300.123);
    struct node*third=createnode(21,"Zoey",500.12);

    //Linking the list
    head->pre=third;
    head->next=second;
    second->pre=head;
    second->next=third;
    third->pre=second;
    third->next=head;

    //printing from head to third
    struct node*current=head;
    do{
        printf("Age:%d\tName:%s\tSalary:%f\n",current->age,current->name,current->salary);
        current=current->next;
    }while(current!=head);
    return 0;
}