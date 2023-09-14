#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 2, 3, 4, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, pos;

    printArray(arr, size);
    cout << endl;

    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos >= 1 && pos <= size) {
        // Shifting elements to the left to delete the element at the specified position
        for (i = pos - 1; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;

        cout << "Array after deletion: ";
        printArray(arr, size);
    }
    else {
        cout << "Invalid position. Please enter a valid position between 1 and " << size << endl;
    }

    return 0;
}
