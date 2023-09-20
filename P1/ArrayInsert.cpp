#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}
void insertBegining(int arr[],int &size,int value)
{
    for(int i=size-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    size++;
}
void insertMid(int arr[],int &size,int pos,int value)
{
    for(int i=size-1;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=value;
    size++;
}
void insertEnd(int arr[],int &size,int value)
{
    arr[size]=value;
    size++;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before Insertion : ";
    printArray(arr,size);
    cout << endl;
    int x;
    do{
        int value,pos;
        cout << "\nChose an Option : " << endl;
        cout << "1.Insert an element at the Begining." << endl;
        cout << "2.Insert an element at the Midle." << endl;
        cout << "3.Insert an element at the End." << endl;
        cout << "4.For Exit" << endl;
        cin >> x;
        switch(x){
        case 1:
          //  int value;
            cout << "Enter value : ";
            cin >> value;
            insertBegining(arr,size,value);
            cout << endl;
            cout << "Array After Insertion : ";
            printArray(arr,size);
            break;
        case 2:
            //int pos,value;
            cout << "Enter position and value : ";
            cin >> pos >> value;
            insertMid(arr,size,pos,value);
            cout << endl;
            cout << "Array After Insertion : ";
            printArray(arr,size);
            break;
        case 3:
            cout << "Enter value : ";
            cin >> value;
            insertEnd(arr,size,value);
            cout << endl;
            cout << "Array After Insertion : ";
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
