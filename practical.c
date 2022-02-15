#include <bits/stdc++.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int l, int h) {
  int piv = arr[h];
  int i = (l - 1);
  for (int j = l; j < h; j++) {
    if (arr[j] <= piv) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[h]);
  return (i + 1);
}

void quickSortalgo(int arr[], int l, int h) {
  if (l < h) {
    int pi = partition(arr, l, h);
    quickSortalgo(arr, l, pi - 1);
    quickSortalgo(arr, pi + 1, h);
  }
}

int main() {
    int n;
    printf("Enter the size of the array !\n");
    scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array !\n");
  for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
  }
  quickSortalgo(arr, 0, n - 1);
  
  printf("After using the quick sort algo the sorted array is: \n");
  for (int i = 0; i < n; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}
