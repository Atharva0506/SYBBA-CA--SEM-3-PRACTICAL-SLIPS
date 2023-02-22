/*B) Write a ‘C’ program to create a random array of n integers. Accept a value x from
user and use Binary search algorithm to check whether the number is present in array
or not. (Students can accept sorted array or can use any sorting method to sort the array)*/
#include<stdio.h>

void binary_search();
void linear_sort();
int a[50], n, beg, end, mid, i, key;

int main() {
  printf("Enter size of array: ");
  scanf("%d", &n);

  printf("Enter array elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  
  linear_sort();
  printf("Sorted array: ");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  
  printf("\nEnter key value to search for: ");
  scanf("%d", &key);
  binary_search();
  
  return 0;
}

void linear_sort(){
    int temp,i,j;
    for(i=0;i<n; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void binary_search() {
  beg = 0;
  end = n - 1;
  mid = (beg + end) / 2;
  while ((beg <= end) && (a[mid] != key)) {
    if (key < a[mid])
      end = mid - 1;
    else
      beg = mid + 1;
    	mid = (beg + end) / 2;
  }
  if (a[mid] == key)
    printf("\nElement found at location %d\n", mid + 1);
  else
    printf("\nElement not found\n");
}

