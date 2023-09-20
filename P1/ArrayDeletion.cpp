#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}
void deleteBegining(int arr[],int &size)
{
    for(int i=1;i<=size;i++)
    {
        arr[i-1]=arr[i];
    }
    size--;
}
void deleteMid(int arr[],int &size,int pos)
{
    for(int i=pos;i<=size;i++)
        arr[i-1]=arr[i];
    size--;
}
void deleteEnd(int arr[],int &size)
{
    size--;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before Deletion : ";
    printArray(arr,size);
    cout << endl;
    int x;
    do{
        int pos;
        cout << "\nChoose an option : " << endl;
        cout << "1.Delete an element at the Begining." << endl;
        cout << "2.Delete an element at the Midle." << endl;
        cout << "3.Delete an element at the End." << endl;
        cout << "4.For Exit" << endl;
        cin >> x;
        switch(x){
        case 1:
            deleteBegining(arr,size);
            cout << endl;
            cout << "Array After Deletion: ";
            printArray(arr,size);
            break;
        case 2:
            cout << "Enter position : ";
            cin >> pos;
            deleteMid(arr,size,pos);
            cout << endl;
            cout << "Array After Deletion : ";
            printArray(arr,size);
            break;
        case 3:
            deleteEnd(arr,size);
            cout << endl;
            cout << "Array After Deletion : ";
            printArray(arr,size);
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid!";
        }
    }while(x!=4);
    return 0;
}
