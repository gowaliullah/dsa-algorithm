#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h> // For bool type

#define MAX_SIZE 10 // Define the maximum capacity of the stack

// Define a structure for the stack
typedef struct {
    int arr[MAX_SIZE]; // Array to store stack elements
    int top;           // Index of the top element in the stack
} Stack;

// Function to initialize the stack
void initialize(Stack *stack) {
    stack->top = -1; // Set top index to -1 to indicate an empty stack
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // Indicate an error or empty stack
    }
    int popped = stack->arr[stack->top];
    stack->top--;
    printf("Popped %d from the stack\n", popped);
    return popped;
}

// Function to peek the top element of the stack
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Indicate an error or empty stack
    }
    return stack->arr[stack->top];
}

int main() {
    Stack myStack;
    initialize(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Top element: %d\n", peek(&myStack));

    pop(&myStack);
    printf("Top element after pop: %d\n", peek(&myStack));

    pop(&myStack);
    pop(&myStack);
    pop(&myStack); // Attempt to pop from an empty stack

    return 0;
}