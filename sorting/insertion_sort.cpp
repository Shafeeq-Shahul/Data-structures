#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) {
    for (int i = 1; i <size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {

    int arr[] = {5,4,3,2,1};
    int size = 5;

    insertion_sort(arr, size);

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}