

#include <stdio.h>

void swap(int *a,int *b)
{  
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
   
}
int main()
{
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int array[100];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    bubbleSort(array,size);
     for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
