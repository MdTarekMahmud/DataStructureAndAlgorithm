#include<iostream>
using namespace std;
template<class T>
class Add
{
    T num1,num2;
    public:
     T sum(T a, T b){
        num1 = a;
        num2 = b;
        cout << "Sum is =" << num1+num2 << endl;
     }
};
int main()
{
    Add<int> obj1;
    obj1.sum(4,5);
    Add<double> obj2;
    obj2.sum(3.77,3.90);
    return 0;
}