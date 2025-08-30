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



// Function to print the linked list
void print_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Main function to test remove_node
int main() {
    // Create linked list: 1 -> 2 -> 3 -> NULL
    Node *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);

    printf("Original list:\n");
    print_list(head);

    // Remove the second node (with data 2)
    Node *node_to_remove = head->next;
    head = remove_node(head, node_to_remove);

    printf("List after removing node with data 2:\n");
    print_list(head);

    // Remove the head node (with data 1)
    node_to_remove = head;
    head = remove_node(head, node_to_remove);

    printf("List after removing head node:\n");
    print_list(head);

    // Free remaining nodes
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}