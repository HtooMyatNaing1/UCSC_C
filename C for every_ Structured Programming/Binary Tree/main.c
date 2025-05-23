/*
    The ADT Binary Tree
    by Htoo Myat
    5/23/2025
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

// typedef aliases
typedef struct Node Node;
typedef Node* BinaryTree;

void inorderTraversal(BinaryTree tree) {
    if (tree != NULL) {
        inorderTraversal(tree->left);
        printf("%c ", tree->data);
        inorderTraversal(tree->right);
    }
}

BinaryTree newNode(void) {
    return (malloc(sizeof(Node)));
}

BinaryTree initNode(char data1, BinaryTree left, BinaryTree right) {
    BinaryTree t;
    t = newNode();
    if (t == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    t->data = data1;
    t->left = left;
    t->right = right;
    return t;
}

BinaryTree createTree(char array[], int i, int size) {
    if (i >= size) {
        return NULL;
    } else {
        return initNode(array[i], createTree(array, 2 * i + 1, size), createTree(array, 2 * i + 2, size));
    }
}

int main() {
    char array[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    int size = sizeof(array) / sizeof(array[0]);
    BinaryTree tree = createTree(array, 0, size);
    printf("Inorder Traversal: ");
    inorderTraversal(tree);
    printf("\n");
    return 0;
}