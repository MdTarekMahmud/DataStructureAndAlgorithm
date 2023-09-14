// at a specific position in an Array
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int arr[] = { 2,3,4,5,6 };
    int size = sizeof(arr)/sizeof(arr[0]);
	int i, val, pos;
	printArray(arr,size);
	cout << endl;
    cout << "Enter position and value : ";
    cin >> pos >> val;

	size++;// Because we insert a element
	for (i = size - 1; i >= pos; i--)
		arr[i] = arr[i - 1];
	arr[pos - 1] = val;
	printArray(arr,size);
	return 0;
}
