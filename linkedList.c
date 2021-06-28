#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node* node;

// struct Node *head = NULL;
// struct Node *tail = NULL;

void printList(node head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

void push(struct Node** head_ref, int new_data) {

    // allocate
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // make next of new node as head
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data) {
    // check if the prev node is NULL
    if(prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;
    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    
    last->next = new_node;
    return;
}

void deleteNode(struct Node **head_ref, int key) {
    
}

int main() {
    node head = NULL;
    node second = NULL;
    node third = NULL;

    // allocate nodes in the heap
    head = (node)malloc(sizeof(struct Node));
    second = (node)malloc(sizeof(struct Node));
    third = (node)malloc(sizeof(struct Node));

    // assign datum and nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    push(&head, 7);
    printf("\n");
    printList(head);
    printf("\n");
    append(&head, 99);
    printList(head);
    printf("\n");
    insertAfter(head->next, 345);
    printList(head);

    return 0;
}