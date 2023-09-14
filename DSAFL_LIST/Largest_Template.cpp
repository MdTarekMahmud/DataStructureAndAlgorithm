#include <iostream>
using namespace std;

template <typename T>
T findLargest(T arr[], int size) {
    T largest = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int intArray[] = {42, 17, 6, 89, 23};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int maxInt = findLargest(intArray, intSize);
    cout << "The largest integer in the array is: " << maxInt << endl;

    double doubleArray[] = {3.14, 2.718, 1.618, 0.577, 2.302};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    double maxDouble = findLargest(doubleArray, doubleSize);
    cout << "The largest double in the array is: " << maxDouble << endl;

    return 0;
}
