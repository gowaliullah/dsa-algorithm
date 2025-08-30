#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create_node(int data, Node *next) {
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    node->data = data;
    node->next = next;
    return node;
}

Node *(append)(Node *head, int item) {
    Node *new_node = create_node(item, NULL);
    if (head == NULL) {
        return new_node; // If the list is empty, new node is the head
    }
    Node *current_node = head;
    while (current_node->next != NULL) { // time complexity O(n)
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head; // Return the original head
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
