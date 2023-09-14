#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of yout array : ";
    cin >> n;
    int arr[n];
    cout <<"Enter array element :" << endl;
    for(int i=0;i<n;i++){
        cout << "Array[" << i << "]=";
        cin >> arr[i];
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    top:
    cout << "Enter your Element : ";
    cin >> key;
    int i,flag = -1;
    for(i=0;i<size;i++){
        if(arr[i]==key){
            flag =1;
            break;
        }
    }
    if(flag== 1){
        cout << "Found !..Element " << key << " is at : "<< i+1 << " position "<< endl;
    }
    else{
        cout << "OOPS! Not Found !!"<< endl;
    }
    goto top;
    return 0;
}