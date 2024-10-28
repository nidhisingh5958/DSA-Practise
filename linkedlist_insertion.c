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

void linked_list(struct Node * ptr){
    while (ptr!=NULL){
    printf ("Element: %d \n", ptr->data);
    ptr = ptr->next;
    }
}

struct Node * insertAtBeginning(struct Node *head, int value){
    struct Node *new;
    new = createNode(value);
    new -> next = head;
    head = new;
} 

struct Node * insertBetween(struct Node *head, int index, int value){
    struct Node *new;
    new = createNode(value);
    struct Node *ptr = head;
    int i=0;
    while (i!=index-1){
        ptr = ptr -> next;
        i++;
    }
    new -> next = ptr -> next;
    ptr -> next = new;
    return head;
}

struct Node * insertAtEnd(struct Node *head, int value){
    struct Node *new;
    new = createNode(value);
    struct Node *ptr = head;
    while (ptr -> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = new;
    return head;
}

int main(){
    struct Node * head= NULL;
    int val,l,ch,size;

    printf("Enter the number of elements in the linked list:-");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("Enter the element to be inserted:-");
        scanf("%d",&val);
        head = insertAtBeginning(head,val);
        }

        printf("Press 1 for inserting at start of the list\n");
        printf("Press 2 for inserting in between of the list\n");
        printf("Press 3 for inserting at the end of the list\n");
        printf("Enter the choice:-");
        scanf("%d",&ch);

        if(ch==1){
            printf("The entered linked list is:-\n");
            linked_list(head);

            printf("Enter the value to be inserted:-");
            scanf("%d",&val);

            printf("Inserting element at first:-\n");
            head = insertAtBeginning(head,val);
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
                printf("Enter the value to be inserted:-\n");
                scanf("%d",&val);

                printf("after inserting in-between:-\n");
                insertBetween(head,l,val);
                linked_list(head);
            }
        }

        else if(ch==3){
            printf("The entered linked list is:-\n");
            linked_list(head);

            printf("Enter the value to be inserted:-\n");
            scanf("%d",&val);

            printf("after inserting at end:-\n");
            insertAtEnd(head,val);
            linked_list(head);
        }

    return 0;
}