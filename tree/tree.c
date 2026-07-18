#include <stdio.h>
#include <stdlib.h>

// Structure of a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int main() {
    // Create the root node
    struct Node *root = createNode(1);

    // Create left and right children
    root->left = createNode(2);
    root->right = createNode(3);

    // Create children of node 2
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Binary Tree created successfully.\n");

    return 0;
}