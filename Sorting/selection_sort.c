#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size){
    int min_index;
    for(int i=0;i<size;i++){
        //smallest=arr[i];
        min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i)
        swap(arr+i,arr+min_index);
    }
}

int main()
{
    int arr[]={34,2,5,2,67,2,78,8,7,0,9,10,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    selectionSort(arr, size);
    printArray(arr,size);
    return 0;
}
