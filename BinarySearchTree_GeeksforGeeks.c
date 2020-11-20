
// C program to demonstrate insert operation in binary search tree. 
#include<stdio.h> 
#include<stdlib.h> 
   
typedef struct node 
{ 
    int key; 
    struct node *left, *right; 
}node; 
   
// A utility function to create a new BST node 
node *newNode(int item) 
{ 
    node *temp =  (node *)malloc(sizeof(node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
void inorder(node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
    
} 
   
node* insert(node* node, int key) 
{ 
    if (node == NULL) 
    return newNode(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key);

    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    return node; 
} 
   
// Driver Program to test above functions 
int main() 
{ 

    node *root = NULL; 
    root = insert(root, 50); 
    inorder(root); 
   
    return 0; 
} 