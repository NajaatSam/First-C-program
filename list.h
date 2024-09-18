#ifndef LIST_H
#define LIST_H

// Structure for the nodes in the linked list
typedef struct node {
    int data;
    struct node* next;
} node_t;

// Structure for the list itself
typedef struct {
    node_t* head;
} list_t;

// Function prototypes (declarations)
list_t* list_alloc(); // Allocate memory for the list
void list_free(list_t* list); // Free memory

void list_add_to_front(list_t* list, int data); // Add to the front
void list_add_to_back(list_t* list, int data);  // Add to the back
void list_print(list_t* list); // Print the list

#endif // LIST_H
