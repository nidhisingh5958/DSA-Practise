#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * createNode(int value){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;
    return newNode;
}

struct Node * deleteFromBeginning(struct Node * head){
    struct Node *ptr = head;
    head = head-> next;
    free(ptr);
}

int main(){
    
    return 0;
}