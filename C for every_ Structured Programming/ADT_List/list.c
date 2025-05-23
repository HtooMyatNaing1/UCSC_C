/*
    Simple Linked List (ADT List)
    by Htoo Myat
    5/22/2025
*/

#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
typedef struct Node {
    int value;              // The data stored in the node
    struct Node *next;      // Pointer to the next node
} Node;

// Check if the list is empty (head is NULL)
int isListEmpty(Node *head) {
    return head == NULL;
}

// Create a new node with given value
Node *createNode(int value) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if malloc fails
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Insert a new node at the front of the list
Node *insertAtFront(int value, Node *currentHead) {
    Node *newHead = createNode(value);
    newHead->next = currentHead;
    return newHead;
}

// Convert an array to a linked list (in reverse order)
Node *arrayToLinkedList(int array[], int size) {
    Node *head = createNode(array[0]);
    for (int i = 1; i < size; i++) {
        head = insertAtFront(array[i], head);
    }
    return head;
}

// Print the values in the list
void printLinkedList(Node *head, const char *title) {
    printf("%s\n", title);
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};   // Example array
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Convert array to linked list
    Node *linkedListHead = arrayToLinkedList(numbers, arraySize);

    // Print the linked list
    printLinkedList(linkedListHead, "Linked List from Array:");

    return 0;
}
