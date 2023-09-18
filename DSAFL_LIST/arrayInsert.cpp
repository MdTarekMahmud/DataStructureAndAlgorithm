#include<iostream>
#define Z 50
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
void insertBegining(int arr[],int & size, int value)
{
    if(size+1<Z)
    {
        for(int i=size-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=value;
    }
    size++;
}
int main()
{
    int arr[Z]={1,2,3,4,5};
    int size =5;
    cout << "Array : " ;
    printArray(arr,size);
    cout << endl;
    insertBegining(arr,size,99);
    printArray(arr,size);
    return 0;
}


// #include<iostream>
// using namespace std;
// void printArray(int arr[],int size){
// 	for (int i = 0; i < size; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }
// void insertMid(int arr[],int size,int pos, int value)
// {
//    int i;
//     for (i = size - 1; i >= pos; i--)
// 		arr[i] = arr[i - 1];
// 	arr[pos - 1] = value;
// }
// int main()
// {
// 	int arr[] = { 2,3,4,5,6 };
//    int size =5;
// 	int i, val, pos;
// 	printArray(arr,size);
// 	cout << endl;
//     cout << "Enter position and value : ";
//     cin >> pos >> val;
//     size++;
//    insertMid(arr,size,pos,val);
// 	printArray(arr,size);
// 	return 0;
// }



// #include<iostream>
// #define Z 50
// using namespace std;
// void printArray(int arr[],int size)
// {
//     for(int i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }
// }
// void insertEnd(int arr[],int & size, int value)
// {
//    arr[size]=value;
//    size++;
// }
// int main()
// {
//     int arr[Z]={1,2,3,4,5};
//     int size =5;
//     cout << "Array : " ;
//     printArray(arr,size);
//     cout << endl;
//     insertEnd(arr,size,99);
//     insertEnd(arr,size,88);
//     printArray(arr,size);
//     return 0;
// }
