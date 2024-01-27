//creating a doubly link list.
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    struct node* pre;
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    newNode->pre = NULL;
    return newNode;
}

int main() {
    // Initialize three nodes
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);

    // Link the nodes
    head->next = second;
    head->pre = NULL;
    second->pre = head;
    second->next = third;
    third->pre=second;

    // Print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\n ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free the allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
