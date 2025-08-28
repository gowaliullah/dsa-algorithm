#include <stdio.h>
#include <stdlib.h> // Required for malloc

// Define the structure for a node in the linked list
struct Node {
    int data;          // Data stored in the node
    struct Node* next; // Pointer to the next node in the list
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
    newNode->data = data;
    newNode->next = NULL; // New node initially points to NULL
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *headRef; // New node points to the current head
    *headRef = newNode;        // Update the head to the new node
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; // Initialize an empty linked list

    // Insert elements into the list
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    // Print the list
    printList(head); // Expected output: Linked List: 30 -> 20 -> 10 -> NULL

    // Free the allocated memory (important to prevent memory leaks)
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}