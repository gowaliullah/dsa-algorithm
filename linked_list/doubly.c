#include <stdio.h>
#include <stdlib.h>


typedef struct Node Node;  // Define Node type in different way
struct Node {
    int data;
    Node *next; 
    Node *prev; 
};

Node *create_node(int item, Node *next, Node *prev) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
    new_node->data = item;
    new_node->next = next;
    new_node->prev = prev;
    return new_node;
}
