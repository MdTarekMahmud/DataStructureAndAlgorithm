#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[]={2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Deletion :";
    printArray(arr,size);
    int pos;
    cout << "Enter Position:";
    cin >> pos;

    if(pos>=1 && pos <=size){
        for(int i=pos-1;i<size-1;i++)
            arr[i]=arr[i+1];
        size--;
        printArray(arr,size);
    }
    else{
        cout <<"Invalid Position!!!!";
    }
    

    return 0;
}