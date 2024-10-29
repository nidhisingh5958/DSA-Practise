#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

void preOrder(struct Node *root){
    if (root != NULL){
        printf("%d ", root -> data);
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

void inOrder(struct Node *root){
    if ( root != NULL){
        inOrder(root -> left);
        printf("%d", root -> data);
        inOrder(root -> right);
    }
}

void postOrder(struct Node *root){
    if( root != NULL){
        postOder( root -> left);
        postOrder( root -> right);
        printf("%d", root -> data);
    }
}

int main(){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p5 = (struct Node *)malloc(sizeof(struct Node));

    p -> data = 4;
    p -> left = p1;
    p -> right = p2;

    p1 -> data = 1;
    p1 -> left = p3;
    p1 -> right = p4;

    p2 -> data = 6;
    p2 -> left = p5;
    p2 -> right = NULL;

    p3 -> data = 5;
    p3 -> left = NULL;
    p3 -> right = NULL;

    p4 -> data = 2;
    p4 -> left = NULL;
    p4 -> right = NULL;

    p5 -> data = 3;
    p5 -> left = NULL;
    p5 -> right = NULL;

    printf("Preorder traversal of binary tree is:-\n");
    preOrder(p);
    printf("\n");

    printf("Inorder traversal of binary tree is:-\n");
    inOrder(p);
    printf("\n");

    printf("Postorder traversal of binary tree is:-\n");
    postOrder(p);
    printf("\n");

    return 0;
}