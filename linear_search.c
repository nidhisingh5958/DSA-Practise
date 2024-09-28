# include <stdio.h>

int main(){
    int i,len,ele;
    printf("enter the length of array: ");
    scanf("%d",&len);
    int arr[len];
    printf("enter the elements: ");
    for(i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element you want to search: ");
    scanf("%d",&ele);

    for (i=0; i<len; i++){
        if (arr[i]==ele){
            printf("element found at %d", i+1);
        }
        else continue;
    }
}