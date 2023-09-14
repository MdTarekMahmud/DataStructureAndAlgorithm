#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size ;i++)
        cout << arr [i] << " ";
    cout << endl;
}
int main()
{
    int arr[]={3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Update : ";
    printArray(arr,size);
    int pos,val;
    cout << "Enter Position and Value : ";
    cin >> pos >> val;
    arr[pos-1]=val;
    cout << "After UPDATE : ";
    printArray(arr,size);

    return 0;
}