#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

//selection sort function
void selectionSort(int arr[], int n) {
  for (int j = 0; j < n - 1; j++) {
    int min = j;
    for (int i = j + 1; i < n; i++) {

      if (arr[i] < arr[min])
        min = i;
    }

    swap(&arr[min], &arr[j]);
  }
}

int main() {
  int arr[] = {20, 12, 10, 15, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Elements before sorting:\n";
  display(arr, n);
  selectionSort(arr, n);
  cout << "Elements after sorting:\n";
  display(arr, n);
}

