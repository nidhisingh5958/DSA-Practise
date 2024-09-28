# include <stdio.h>
# include <stdlib.h>

struct stack {

};

int main(){
    int choice,ele;
    int arr[5];
    printf("Enter the function you want to perform:\n 1- push 2- pop 3- peek ");
    scanf("%d", choice);
    for(int i=0;;i++){
        if (choice==1){
            printf("Enter the element you want to add: ");
            scanf("%d", ele);
            
        }
    }
    int factorial(int n){
        int x;
        if (n==0){
            return (1);
        }
        x=n-1;
        return (n*factorial(x));
    }
    

    return 0;
}