#include <stdio.h>
int main(){
    //create an dynamic
    int size;
    int array[100];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",array+i);
    }
    //print array
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    for(int i=0; i<size; i++)
    {
        for(int j =0; j<size-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    
}
