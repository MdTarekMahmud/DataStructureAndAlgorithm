#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int key;
    for(int i=1;i<size;i++){
        key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+ 1]=key;
    }
}
void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[]={22,1,54,3,24,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Sorting : ";
    disp(arr,size);
    insertionSort(arr,size);
    cout << "After Sorting : ";
    disp(arr,size);

    return 0;
}