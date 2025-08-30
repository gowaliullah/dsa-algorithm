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

void print_list(Node *head) { // time complexity of this program: O(n)
    Node *current_node = head;
    while (current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}