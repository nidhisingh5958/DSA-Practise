# include <stdio.h>
# include <stdlib.h>

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

void display(struct Node * ptr){
    if (ptr == NULL){
        printf("Stack is empty\n");
    }
    else{
        while (ptr != NULL){
        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
        }
    }
}

struct Node * push(struct Node * head,int value){
    struct Node *new;
    new = createNode(value);
    struct Node *ptr = head;
    if (head == NULL){
        head = new;
    }
    else{
        new -> next = head;
        head = new;
    }
    printf("Element pushed successfully\n");
    return head;
}

struct Node * pop(struct Node * head){
    struct Node *ptr = head;
    if (head == NULL){
        printf("Underflow condition\n");
    }
    else{
        head = head -> next;
        free(ptr);
        printf("Element popped successfully\n");
    }
}

int main(){
    struct Node* head = NULL;
    int ch, val, l;

    printf("enter the operation you want to perform on stack:-");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    scanf("%d", &ch);

    if (ch==1){
        printf("Enter the element to be pushed:-");
        scanf("%d", &val);
        head = push(head, val);
    }

    else if (ch==2){
        head = pop(head);
    }

    else if (ch==3){
        display(head);
    }

    return 0;
}