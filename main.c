#include <stdio.h>
#include "list.h"

int main() {
    // Allocate a new list
    list_t* list = list_alloc();

    // Add some elements to the list
    list_add_to_front(list, 10);
    list_add_to_front(list, 20);
    list_add_to_back(list, 30);

    // Print the list to verify the operations
    printf("List after adding elements:\n");
    list_print(list); // Expected: 20 -> 10 -> 30 -> NULL

    // Free the list (cleanup)
    list_free(list);

    return 0;
}
