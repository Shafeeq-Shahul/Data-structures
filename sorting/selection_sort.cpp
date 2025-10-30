#include <iostream>
using namespace std;

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    int size = 5;

    selection_sort(arr, size);

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}