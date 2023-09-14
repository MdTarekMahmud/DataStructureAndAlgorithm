#include<iostream>
using namespace std;
void selectionSort(int arr[],int size){
    int min_idx;
    for(int i=0;i<size-1;i++){
        min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx])
                min_idx = j;
        }
        if(min_idx !=i)
            swap(arr[min_idx],arr[i]);
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
    selectionSort(arr,size);
    cout << "After Sorting : ";
    disp(arr,size);

    return 0;
}