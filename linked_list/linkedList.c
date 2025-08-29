#include <stdio.h>
#include <stdlib.h>


// struct Node {
//     int data;
//     struct Node *next; 
// };

typedef struct Node Node;  // Define Node type in different way
struct Node {
    int data;
    Node *next; 
};


Node *create_node(int item, Node *next) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}






int main() {
   Node *n;
   n = create_node(10, NULL);
    printf("data = %d\n", n->data);
    return 0;
}