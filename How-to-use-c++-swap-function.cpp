// link: https://stackoverflow.com/questions/60984206/how-to-use-c-swap-function/60984581#60984581

void swap_array_elements(int a, int b, int arr[], int arr2[]) 
{
  int temp = arr[a];
  arr[a] = arr2[b];
  arr2[b] = temp;
}

#include <iostream>
void swap_array_elements(int a, int b, int arr[], int arr2[]) 
{
  int temp = arr[a];
  arr[a] = arr2[b];
  arr2[b] = temp;
}
int main()
{ int array1[]={42,56}, array2[]={63,89};
  swap_array_elements(0,1,array1,array2); // swapping element with index 0 in array1 (42) with element with index 1 in array2 (89)
  std::cout<<array1[0]<<" "<<array2[1]; // 89 42
  return 0;
}
