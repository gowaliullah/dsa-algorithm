#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}


void add_left_child(Node *node, Node *child) {
    node->left = child;
}

void add_right_child(Node *node, Node *child) {
    node->right = child;
}


Node *create_tree() {
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);

    add_left_child(seven, two);
    add_right_child(two, nine);
    

    Node *one = create_node(1);
    Node *six = create_node(6);

    add_left_child(seven, one);
    add_right_child(seven, six);



    return two;
}


// pre order for traversal 
void pre_order(Node *node) {
    
    printf("%d ", node->data);
    if (node->left != NULL) {
        pre_order(node->left);
    }
    if (node->right != NULL) {
        pre_order(node->right);
    }
}


// post order for traversal 
void post_order(Node *node) {
    if (node->left != NULL) {
        post_order(node->left);
    }
    if (node->right != NULL) {
        post_order(node->right);
    }
    printf("%d ", node->data);
}



int main() {
    Node *root = create_tree();
    pre_order(root);
    printf("\n");
    return 0;
}