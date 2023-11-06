// Program to do various linked list exercises
// Written by MON17A (zID) on 6/11/23

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
 

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data);
void print_list(struct node *head);
struct node *copy(struct node *head);
struct node *list_append(struct node *first_list, struct node *second_list);
int identical(struct node *first_list, struct node *second_list);
struct node *set_intersection(struct node *first_list, struct node *second_list);
void free_list(struct node *head);


int main(void) {

    // create linked list
    // 1 -> 3 -> 5
    struct node *head1 = add_last(NULL, 1);
    head1 = add_last(head1, 3);
    head1 = add_last(head1, 5);

    print_list(head1);

    // create another linked list
    // 2-> 4 -> 6
    struct node *head2 = add_last(NULL, 2);
    head2 = add_last(head2, 4);
    head2 = add_last(head2, 6);

    print_list(head2);

    // join the two lists
    struct node *joined_list = list_append(head1, head2);
    print_list(joined_list);

    return 0;
}

// Append to a linked list
struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

// prints out linked list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// frees all the elements in a linked list
void free_list(struct node *head) {
    struct node *to_remove = head;

    while (head != NULL) {
        to_remove = head;       // Save the current node
        head = head->next;      // Move to the next node
        free(to_remove);        // Free the saved node
    }
}

// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list) {
    
    while (first_list != NULL && second_list != NULL) {
        if (first_list->data != second_list->data) {
            return FALSE;
        }
        first_list = first_list->next;
        second_list = second_list->next;
    }
    return TRUE;

}

// Returns a copy of the linked list and frees the original list.
struct node *copy(struct node *list) {

    // 1 2 3 X
    // new_list = 1 2 3 X
    struct node *new_list_head = NULL;
    struct node *current = list;
    while (current != NULL) {
        new_list_head = add_last(new_list_head, current->data);
        current = current->next;
    }

    return new_list_head;

    free_list(list);
    
}

// cases:

// 1 2 3 X
// 5 6 7 X
// return: 1 2 3 5 6 7 X

// X
// 1 2 3 X
// return: 1 2 3 X

// 1 2 3 X
// X
// return: 1 2 3 X

// X
// X
// return: X

// Returns a linked list where it is the second appended to the first
// return head of appended list
struct node *list_append(struct node *first_list, struct node *second_list) {
    
    // first list is empty, return head of second list
    // also works for two empty lists
    if (first_list == NULL) {
        return second_list;
    // second list is empty, return head of first_list
    } else if (second_list == NULL) {
        return first_list;
    }

    // both list have 1 or more nodes
    // move pointer to end of first list, connect it to head of of second 
    struct node *current = first_list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = second_list;
    return first_list;
}
