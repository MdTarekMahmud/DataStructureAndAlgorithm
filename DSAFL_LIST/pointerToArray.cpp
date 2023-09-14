#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // Pointer pointing to the first element

    cout << "Element at ptr: " << numbers[0] << endl; 
    cout << "Element at ptr + 1: " << numbers[1] << endl; 
    cout << "Element at ptr + 2: " << numbers[2] << endl; 
    cout << "Element at ptr + 3: " << numbers[3] << endl; 
    cout << "Element at ptr + 4: " << numbers[4] << endl; 

    cout << "Print array using LOOP and pointer : ";
    for(int i=0;i<5;i++)
    {
        cout << *(ptr+i) << " ";
    }
    cout << endl;

    cout << "Change Elements : ";
    for(int i=0;i<5;i++)
    {
        cin >> *(ptr+i);
    }
    cout << "After changing Elements: ";
    for(int i=0;i<5;i++)
    {
        cout << *(ptr+i) << " ";
    }
    return 0;
}
