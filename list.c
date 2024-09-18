#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Allocate memory for a new list
list_t* list_alloc() {
    list_t* list = (list_t*)malloc(sizeof(list_t)); // Heap allocation
    list->head = NULL; // The list starts empty
    return list;
}

// Free memory for the list and its nodes
void list_free(list_t* list) {
    node_t* current = list->head;
    node_t* next;
    while (current != NULL) {
        next = current->next;
        free(current); // Free each node
        current = next;
    }
    free(list); // Free the list structure
}

// Add a new element to the front of the list
void list_add_to_front(list_t* list, int data) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t)); // Allocate a new node
    new_node->data = data;
    new_node->next = list->head; // Point new node to current head
    list->head = new_node; // Update the head to the new node
}

// Add a new element to the back of the list
void list_add_to_back(list_t* list, int data) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t)); // Allocate a new node
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL) {
        // If the list is empty, new node becomes the head
        list->head = new_node;
    } else {
        // Traverse to the end of the list
        node_t* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node; // Set the new node at the end
    }
}

// Print the elements in the list
void list_print(list_t* list) {
    node_t* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

