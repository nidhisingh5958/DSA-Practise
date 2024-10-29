# include <stdio.h>
# include <stdlib.h>

struct Node{
    int coeff;
    int pow;
    struct Node *next;
};

void readPolynomial(struct Node **poly){
    int coeff, exp, cont;
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    *poly = temp;
    do{
        printf("\n Coefficient: ");
        scanf("%d", &coeff);
        printf("\n Exponent: ");
        scanf("%d", &exp);
        temp -> coeff = coeff;
        temp -> pow = exp;
        temp -> next = NULL;

        printf("\n Do you have more terms? (0/1): ");
        scanf("%d", &cont);
        if(cont){
            temp -> next = (struct Node *) malloc(sizeof(struct Node));
            temp = temp->next;
            temp -> next = NULL; 
        }
    }while(cont);
}

void displayPolynomial(struct Node* poly){
    printf("\n Polynomial expression is:");
    while(poly != NULL){
        printf("%d X^%d \t", poly -> coeff, poly -> pow);
        poly = poly->next;
        if (poly != NULL){
            printf("+");
        }
    }
}

void addPolynomials(struct Node** result, struct Node* first, struct Node* second){
    struct Node *temp;
    temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> next = NULL;
    *result = temp;
    while(first && second){
        if (first -> pow > second -> pow){
            temp -> pow = first -> pow;
            temp -> coeff = first -> coeff;
            first = first -> next;
        }
        else if (first -> pow < second -> pow){
            temp -> pow = second -> pow;
            temp -> coeff = second -> coeff;
            second = second -> next;
        }
        else{
            temp -> pow = first -> pow;
            temp -> coeff = first -> coeff + second -> coeff;
            first = first -> next;
            second = second -> next;
        }
        if (first && second){
            temp -> next = (struct Node*) malloc(sizeof(struct Node));
            temp = temp -> next;
            temp -> next = NULL;
        }
    }
    while(first || second){
        temp -> next = (struct Node*) malloc(sizeof(struct Node));
        temp = temp -> next;
        temp -> next = NULL;
        if (first){
            temp -> pow = first -> pow;
            temp -> coeff = first -> coeff;
            first = first -> next;
        }
        else if (second){
            temp -> pow = second -> pow;
            temp -> coeff = second -> coeff;
            second = second -> next;
        }
    }
}

int main(){
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* result = NULL;

    printf("\n ENter the corresponsing data:- \n");
    printf("\n First polynomial:- \n");
    readPolynomial(&first);
    displayPolynomial(first);

    printf("\n Second polynomial:- \n");
    readPolynomial(&second);
    displayPolynomial(second);

    addPolynomials(&result, first, second);
    displayPolynomial(result);

    return 0; 
}