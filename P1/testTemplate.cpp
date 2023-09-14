#include<iostream>
using namespace std;
template<typename T>
T Largest(T arr[] , int size){
    T Largest = arr[0];
    for(int i=1 ;i<size ;i++){
        if(arr[i]>Largest)
            Largest = arr[i];
    }
    return Largest;
}
   
int main()
{
    int intArray[]={1,2,3,4,5,6};
    int intSize = sizeof(intArray)/sizeof(intArray[0]);
    int intLar = Largest(intArray,intSize);
    cout << " " << intLar;

    float floatArray[]={1.2,4.3,3.4};
    int floatSize = sizeof(floatArray)/sizeof(floatArray[0]);
    float floatLar = Largest(floatArray,floatSize);
    cout << " " << floatLar;
    return 0;
}