#include <stdio.h>

int main(){
    int len, ele;
    printf("enter the length ");
    scanf("%d",&len);
    int arr[len];
    printf("enter the element: ");
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
            len--;
        }
        else continue;
    }

    printf("the array is ");
    for (int i=0; i<(len); i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}