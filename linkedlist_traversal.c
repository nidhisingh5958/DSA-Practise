#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * createNode(int value ){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data  = value;
    newNode -> next = NULL;
    return newNode;
}

struct Node * traversal(struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d \n", ptr -> data);
        ptr = ptr -> next;
    }
}

int main(){

    traversal(createNode(1));
    traversal(createNode(2));

    return 0;
}


/* implementation directly from main function

int main(){

    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data =1;
    head -> next = first;

    first -> data =2;
    first -> next = second;

    second -> data =3;
    second -> next = third;

    third -> data =4;
    third -> next = fourth;

    fourth -> data =5;
    fourth -> next = NULL;


    return 0;
}*/