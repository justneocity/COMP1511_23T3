#include <stdio.h>
#include <stdlib.h>

struct node {
    int data; // 4
    struct node *next; // 4
};

struct node *create_node(int data);
struct node *insert_node(struct node *head, int data, int n, int length);
void print_list(struct node *head);
int list_length(struct node *head);

int main(void) {
	
    // create 3 nodes
	struct node *node1 = create_node(1);
	struct node *node2 = create_node(2);
	struct node *node3 = create_node(3);
	node1->next = node2;
	node2->next = node3;
	
    // assign head of linked list (aka first node)
	struct node *head = node1;

    // calculate length of linked list
    int length = list_length(head);

    // insert new_node
    head = insert_node(head, 50, 2, length);
    // print linked list
	print_list(head);
}

struct node *create_node(int data) {
	struct node *new_node = malloc(sizeof (struct node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

int list_length(struct node *head) {

    struct node *current = head;
    // create counter to add nodes
    int length = 0;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

// prints out linked list from first node
void print_list(struct node *head) {
    // create loop 'counter'
    struct node *current = head;
    
    // case for empty list - don't print anything
    if (current == NULL) {
        return;
    }
    // loop until end of list
    while (current != NULL) {
        printf("%d\n", current->data);
        // increment counter
        current = current->next;
    }
}

// inserts new node at index
// return the head of the linked list
struct node *insert_node(struct node *head, int data, int n, int length) {

    // create new node
    struct node *new_node = create_node(data);
    struct node *current = head;
    // - `n` is any value, and the list is empty (Diagram 1).
    if (head == NULL) {
        head = new_node;
    }

    // - `n = 0`, and the list is any length (Diagram 1, 2 or 3).
    else if (n == 0) {
        new_node->next = head;
        head = new_node;  
    }

    // - `n` is greater than the length of the linked list.
    else if (n > length) {
        // go to last node
        current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;   
    }

    // - `n` is less than the length of the list, and the list is not empty (Diagram 2, 3).
    else if (n > 0 && n < length) {
        // loop to node before n index
        int i = 0;
        current = head;
        while (i < n - 1) {
            current = current->next;
            i++;
        }
        new_node->next = current->next;
        current->next = new_node;   
    }

    return head;


}