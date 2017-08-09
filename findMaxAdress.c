#include <stdio.h>
#include <stdlib.h>

void MaxAndMin(int * arr, int ** maxPrt, int ** minPtr, int size);

int main() {
  int * maxPtr;
  int * minPtr;
  int arr[5];

  for (int i = 0; i < 5; i++) {
    arr[i] = rand() % 11;
   }

  MaxAndMin(arr, &maxPtr, &minPtr, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d번째 배열의 값 %d %p\n", i+1, arr[i], &arr[i]);
  }

  printf("최대값의 주소값은 %p \n 최소값의 주소값은 %p\n", maxPrt, minPtr);

  return 0;
}

void MaxAndMin(int * arr, int ** maxPrt, int ** minPtr, int size){
  int max = arr[0];
  int min = arr[0];

  for (int i = 0; i < size; i++) {
    if(max < arr[i]){
      max = arr[i];
      maxptr = &arr[i];
    }

    if(min > arr[i]){
      min = arr[i];
      minPtr = &arr[i];
    }
  }


}
