#include <stdio.h>

int max(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int largest = max(arr, n);
    printf("The largest element is %d", largest);

    return 0;
}