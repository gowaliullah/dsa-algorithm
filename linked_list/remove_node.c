#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to create a new node
Node *create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


Node *remove_node(Node *head, Node *node)
{
    if (node == head)
    {
        head = head->next;
        free(node);
        return head;
    }

    Node *current_node = head;
    while (current_node != NULL)
    {
        if (current_node->next == node)
        {
            break; // Node found
        }
        current_node = current_node->next;
    }
    if (current_node == NULL)
    {
        return head; // Item not found, return original head
    }
    current_node->next = node->next;
    free(node);
    return head;
}
   