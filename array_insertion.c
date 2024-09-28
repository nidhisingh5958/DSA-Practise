
#include <stdio.h>
#include <stdlib.h>

int main(){
    int len, ele;
    printf("enter the length ");
    scanf("%d",&len);
    int arr[len];
    printf("enter the element: ");
    for (int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }
    printf("array is: ");
    for(int i=0;i<len;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}
