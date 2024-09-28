#include <stdio.h>

int binarySearch(int arr[], int low, int high, int ele);

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

    int n = sizeof(arr) / sizeof(arr[0]);
    int result;
    result = binarySearch(arr, 0, n - 1, ele);
    if(result == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Element is present at %d",result+1);
    }

}
    
int binarySearch(int arr[], int low, int high, int ele)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == ele)
            return mid;
        if (arr[mid] < ele)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


