// Demonstration of free and malloc use after free 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
void free_list(struct node *head);

int main(void) {

    // 4 -> 5 -> 6
    struct node *head = create_node(4);
    struct node *n1 = create_node(5);
    head->next = n1;

    struct node *n2 = create_node(6);
    n1->next = n2;

    // If we don't free the memory we malloc'd for head, the program will have
    // a memory leak

    // free takes in a pointer to the block of memory
    free(head);

    // If we try to print the data in head after freeing it, we'll get a malloc
    // use after free error
    printf("Data: %d\n", head->data);

    // 1. free any mallocs
    // 2. dont use memory that you have freed

    return 0;
}

// Returns a pointer to a struct node initialised with the data given
struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

// Free entire linked list
void free_list(struct node *head) {
    struct node *to_remove = head;

    while (head != NULL) {
        to_remove = head;       // Save the current node
        head = head->next;      // Move to the next node
        free(to_remove);        // Free the saved node
    }
}
