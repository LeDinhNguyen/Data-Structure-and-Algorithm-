#include <iostream>
using namespace std;

void swap(int a, int b) {
  int temp = b;
  b = a;
  a = temp;
}

// Partition function return the position of the pivot after partition process
int HoarePartition(int arr[], int left, int right) {
    bool found = false;
    int pivot = arr[left];
    int i = left; int j = right + 1;
    while (!found) {
        do {
            i++;
        } while (arr[i] < pivot);
        do {
            j--;
        } while (arr[j] < pivot);
        if (i >= j) found = true;
        swap(arr[i], arr[j]);
    }
    return -1;
}

int LomutoPartition(int arr[], int left, int right) {
    int i = left - 1;
    int pivot = arr[right - 1];
    for (int j = left; i < right; j++) {
      if (arr[j] < pivot) {
        i ++;
        swap(arr[i], arr[j]);
      }
    }
    swap(arr[i + 1], pivot);
    return i + 1;
}

void QuickSort(int arr[], int low, int high) {
  int pi;
  if (low < high) {
    //pi = LomutoPartition(arr, low, high);
    pi = HoarePartition(arr, low, high);
    QuickSort(arr, low, pi - 1);
    QuickSort(arr, pi, high);
  }
}

int main() {
  int arr[] = {1,2,10,5,6,3,7,8,4};
  QuickSort(arr, 0, 8);
  return 0;
}
