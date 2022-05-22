#include <iostream>
using namespace std;
void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size) {
    for(int i = 0; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
void selectionSort(int *array, int arraySize) {
   int i, j, min;
   for(i = 0; i<arraySize-1; i++) {
      min = i;
      for(j = i+1; j<arraySize; j++)
         if(array[j] < array[min])
            min = j;
         swap(array[i], array[min]);
   }
}
int main()
{
    int n;
   int arr[] = {19, 20, 1, 32, 7, 18, 9, 25};
   cout << "Array before Sorting: ";
   display(arr, sizeof(arr)/sizeof(arr[0]));
   selectionSort(arr, sizeof(arr)/sizeof(arr[0]));
   cout << "Array after Sorting: ";
   display(arr, sizeof(arr)/sizeof(arr[0]));
}
