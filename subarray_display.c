// subarray are the smaller pieces or groups of an array

# include <stdio.h>

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for (int i=st; i<=end; i++){
                printf("%d",arr[i]);
            }
            printf("\t");
        }
        printf("\n");
    }
}