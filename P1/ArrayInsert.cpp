#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[]={2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pos,value;
    cout <<"Before Insertion : " << endl;
    printArray(arr,size);

    cout << "Enter Position and Value: ";
    cin >> pos >> value;

    size++;
    
    for(int i=size-1;i>=pos ;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    cout << "After Insertion :" << endl;
    printArray(arr,size);
    return 0;
}