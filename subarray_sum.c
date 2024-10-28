// this brute force approach takes O(n^2) time complexity to display the maximium subarray sum

# include <stdio.h>
# include <limits.h>

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    
    int maxSum=INT_MIN;
    for(int st=0; st<n; st++){
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum += arr[end];
            maxSum = (currSum > maxSum) ? currSum : maxSum;
        }
    }
    printf("max subarray sum = %d \n",maxSum);
}