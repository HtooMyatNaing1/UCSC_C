/*
    Task:

    Use the linear linked list code to store a randomly generated set of 100 integers.
    Now write a routine that will rearrange the list in sorted order of these values. 
    Note you might want to use bubble sort to do this. Print these values in rows of 5 on the screen.

    How will this work? 
    Compare two adjacent list elements and if they are out of order swap them. 
    After a first pass the largest element will have bubbled to the end of the list. 
    Each pass can look at one less element as the end of a list stays sorted.

    Goal:
    1. Generate 100 random integers
    2. Store them in a singly linked list
    3. Sort the list using bubble sort
    4. Print the sorted values in rows of 5
*/

/*
    Solution to the above problem.
    by Htoo Myat
    5/24/2025
*/

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for seeding the random number generator
#define MAX_SIZE 100


// Linked List Implementation

// -------------------------------------------------------------------------------------------

// Node structure for linked list
typedef struct Node {
    int data;
    struct Node* next; 
} Node;

// Creating alias for Node pointer
typedef Node* NodePtr;

// Function to create a new node
// No initialization of data is done here, it will be done later.
NodePtr newNode(void) {
    return malloc(sizeof(Node));
}

// Creating a Node with data and pointer to next node initialized to NULL
NodePtr initNode(int data) {
    NodePtr new_Node = newNode();
    new_Node-> data = data;
    new_Node-> next = NULL;
    return new_Node;
}

// Function to insert a node at the end of the linked list
NodePtr insertAtEnd(int data, NodePtr head) {
    NodePtr new_node = initNode(data);
    if (head == NULL) {
        return new_node; // If the list is empty, return the new node as head
    }
    
    NodePtr current = head;
    while (current->next != NULL) {
        current = current->next; // Traverse to the end of the list
    }
    current->next = new_node; // Link the new node at the end
    return head; // Return the unchanged head
}

// Function to transform the list into linked list
NodePtr createLinkedList(int arr[], int size) {
    NodePtr head = NULL, tail = NULL;
    for (int i = 0; i < size; i++) {
        NodePtr new_node = initNode(arr[i]);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    return head;
}

// Function to print the linked list
void printList(NodePtr head) {
    NodePtr current = head;
    int count = 0;
    while (current != NULL) {
        printf("%d ", current->data);
        count++;
        if (count % 5 == 0) {
            printf("\n"); // Print a new line after every 5 elements
        }
        current = current->next;
    }
    if (count % 5 != 0) {
        printf("\n"); // Ensure a new line at the end if not already printed
    }
}

// -------------------------------------------------------------------------------------------

// Populate the linked list with random integers

NodePtr populateLinkedList(int size) {
    NodePtr head = NULL;
    for (int i = 0; i < size; i++) {
        int random_value = (rand() % 100) + 1; // Generate random integers between 1 and 100
        head = insertAtEnd(random_value, head);
    }
    return head;
}

void freeList(NodePtr head) {
    NodePtr temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// -------------------------------------------------------------------------------------------

// Bubble Sort Implementation

void bubbleSort(NodePtr head) {
    if (head == NULL) return; // If the list is empty, do nothing

    int swapped;
    NodePtr current;
    NodePtr last = NULL;

    do {
        swapped = 0;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                // Swap data
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1; // Set swapped to true
            }
            current = current->next; // Move to the next node
        }
        last = current; // Last element is now sorted
    } while (swapped); // Repeat until no swaps are made
}

// -------------------------------------------------------------------------------------------
// Main function to execute the program

int main(void) {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Create a linked list with 100 random integers
    NodePtr head = populateLinkedList(MAX_SIZE);

    // Print the unsorted linked list
    printf("Unsorted Linked List:\n");
    printList(head);

    // Sort the linked list using bubble sort
    bubbleSort(head);

    // Print the sorted linked list
    printf("\nSorted Linked List:\n");
    printList(head);

    // Free the allocated memory (not shown here, but should be done in practice)
    freeList(head);

    // Return success
    return 0;
}