#include <stdio.h>
int main(){
    int len, ele;
    printf("enter the length ");
    scanf("%d", &len);
    int arr[len];
    printf("enter the elements: ");
    for (int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }

    printf("original array is ");
    for (int i=0; i<len; i++){
        printf("%d \t", arr[i]);
    }
    
    for (int i=0; i<len; i++){
        for (int j=0;j<len;j++){
            if (arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("\n sorted array is ");
    for (int i=0; i<len; i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}

// #include<stdio.h>
// void show(int arr[],int size){
//  for(int i=0;i<size;i++){
//     printf("%d\t",arr[i]);}
//     printf("\n");}

// void sort(int arr[]){
//     for(int  j=0;j<5;j++){
//     for(int i=0;i<5;i++){
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;}}}}
// int main(){
//     int arr[5]={5,3,4,1,7};
//     printf("Before soring:-\n");
//     show(arr,5);
//     sort(arr);
//     printf("After sorting:-\n");
//     show(arr,5);}

    
    