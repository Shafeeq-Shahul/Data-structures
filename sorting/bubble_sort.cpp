#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } 
}

int main() {

    int arr[] = {5,4,3,2,1};
    int size = 5;

    bubble_sort(arr, size);

    for (int i : arr) {
        cout << i << " ";
    }
}