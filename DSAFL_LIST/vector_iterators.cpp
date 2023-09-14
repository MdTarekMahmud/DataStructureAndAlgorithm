#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num={1,2,3,4,5};
    vector<int>::iterator iter;

    // iter = num.begin();
    // cout << "num[0] = " << *iter << endl;
    // iter = num.begin()+2;
    // cout << "num[2] = " << *iter << endl;
    // iter=num.end()-1;
    // cout << "num[4] = " << *iter << endl;
    for(iter=num.begin();iter!=num.end();++iter){
        cout << *iter << " ";
    }
    return 0;
}