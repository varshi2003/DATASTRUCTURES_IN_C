/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10]={};
    int size,i,j;
    printf("enter the size of an array:");
    scanf("%d",&size);
    printf("enter the elements of the array:");
    for( i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 
    int temp;
    for( i=1;i<size;i++){
        temp = arr[i];
        j= i-1;
        while(i>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        } 
        arr[j+1]=temp;
    } 
    printf("the sorted array is:");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
