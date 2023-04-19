#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 
    int data;
    printf("enter the element to be found:");
    scanf("%d",&data);
    int found = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==data){
            found = 1;
            printf("the element is found at %d\n",i+1);
            break;
        }
    }
    if(found == 0)
    printf("the element is not found\n");
    return 0;
}
