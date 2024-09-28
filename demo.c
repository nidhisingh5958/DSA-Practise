#include <stdio.h>

void entering_element(int len){
    int arr[len];
    int *ptr;
    
    printf("enter the element: ");
    for (int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }

    ptr = &arr;

    printf("the array is ");
    for (int i=0; i<(len); i++){
        printf("%d \t", arr[i]);
    }
    
}

int main(){
    int len, ele;
    printf("enter the length ");
    scanf("%d",&len);

    entering_element(len);

    int arr[len];
    for (int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }

    
    printf("enter the element you want to delete ");
    scanf("%d",&ele);

    for (int i=0; i<len; i++){
        if (arr[i]==ele){
            for (int j=i; j<len; j++){
                arr[i]=arr[i+1];
            }
        }
        else continue;
    }
    printf("the array is ");
    for (int i=0; i<(len-1); i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}