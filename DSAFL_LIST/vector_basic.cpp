#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vector1={1,2,3,4,5};

    cout << "Vector1 = ";
    for(const int& i: vector1){
        cout << i << " ";
    }  
    cout<< endl;
    //add elements;
    // vector1.push_back(6);
    // vector1.push_back(7);
    //-----------------------------------
    //delete elements
    // vector1.pop_back();
    // vector1.pop_back();
    //-----------------------------------
    //Update elements
    // vector1.at(2)=17;
    // _________________________________
    
    cout << "Updated vector1: ";
    for(const int& i: vector1){
        cout << i << " ";
    }  
    return 0;
}