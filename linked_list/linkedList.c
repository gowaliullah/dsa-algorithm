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


Node *remove_node(Node *head, Node *node) {


    if (node == head){
        head = head->next;
        free(node);
        return head;
    }
    

    Node *current_node = head;
    
    while (current_node != NULL) {
       if (current_node->next == node) {
           break; // Node found
       }
         current_node = current_node->next;
    }
    
    
    if (current_node == NULL) {
        return head; // Item not found, return original head
    }

    current_node->next = node->next;
    free(node);
    return head;
  
}



Node *(prepend)(Node *head, int item) {
    Node *new_node = create_node(item, head);
    return new_node; // New node is the new head
}



int main() {
   Node *n;
   n = create_node(10, NULL);
    printf("data = %d\n", n->data);
    return 0;
}