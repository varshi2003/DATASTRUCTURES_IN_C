// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = (high + low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[100];
  int n;
  printf("enter the size of an array:\n");
  scanf("%d",&n);
  printf("enter the elements of an array:\n");
  for(int i=0;i<n;i++){
      scanf("%d",&array[i]);
  }
  
  
  int x;
  printf("enter the element to be found:\n");
  scanf("%d",&x);
  
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}
