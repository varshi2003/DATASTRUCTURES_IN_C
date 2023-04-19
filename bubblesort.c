/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int array[100];
    printf("enter the elements of the array:");
    //to get elements of an array
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    //to perform sorting 
    int temp;
    for(int i=0;i<size-1;i++)//outer loop represents the no. of passes
    {
        int flag=0;
        for(int j=0;j<size-1-i;j++)//inner loop represents the no. of comparisons
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag = 1;
            }
        }
        if(flag==0)
        break;
        
    }
    //to print the sorted array 
    
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }

    return 0;
}
