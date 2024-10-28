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
    newNode-> next = NULL;
    return newNode;
}

struct Node * insert(struct Node * head, int value){
    struct Node * new;
    new = createNode(value);
    struct Node * ptr = head;
    if (head == NULL){
        head = new;
    }
    else{
        while(ptr-> next != NULL){
            ptr = ptr -> next;
        }
        ptr -> next = new; 
    }
    return head;
}

void linked_list(struct Node * ptr){
    while (ptr!=NULL){
    printf ("Element: %d \n", ptr->data);
    ptr = ptr->next;
    }
}

struct Node * deleteFromBeginning(struct Node * head){
    struct Node *ptr = head;
    head = head-> next;
    free(ptr);
    return head;
}

struct Node * deleteFromEnd(struct Node * head){
    struct Node *prev;
    struct Node *ptr = head;
    while (ptr -> next != NULL){
        prev = ptr;
        ptr = ptr -> next;
    }
    prev -> next = NULL;
    free(ptr);
    return head;
}

struct Node * deleteFromIndex(struct Node * head, int index){
    struct Node *ptr = head;
    struct Node *prev;
    int i=0;
    while (i!= index-1){
        prev= ptr;
        ptr = ptr -> next;
    }
    prev -> next = ptr -> next;
    free(ptr);
}

int main(){
    struct Node * head = NULL;
    int size,val,l,ch;

    printf("enter the number of elements you want to add in the linked list:-");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("Enter the element to be inserted:-\n");
        scanf("%d",&val);
        head = insert(head, val);
    }

    printf("Press 1 for deleting from start of the list\n");
    printf("Press 2 for deleting from in between the list\n");
    printf("Press 3 for deleting from the end of the list\n");
    printf("Enter the choice:-");
    scanf("%d",&ch);

    if(ch==1){
        printf("The entered linked list is:-\n");
        linked_list(head);

        printf("After deletion:-\n");
        head = deleteFromBeginning(head);
        linked_list(head);
    }

    else if(ch==2){
        printf("The entered linked list is:-\n");
        linked_list(head);

        printf("Enter the position:-");
        scanf("%d",&l);

        if(l<0 || l>size-1){
            printf("Please enter a valid location\n");
        }
        else{
            printf("after deletion from in between:-\n");
            deleteFromIndex(head,l);
            linked_list(head);
        }
    }

    else if(ch==3){
        printf("The entered linked list is:-\n");
        linked_list(head);

        printf("after deleting from end:-\n");
        deleteFromEnd(head);
        linked_list(head);
    }

    return 0;
}