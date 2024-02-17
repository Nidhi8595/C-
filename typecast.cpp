#include<iostream>
using namespace std;
int main()
{
    int a=45;
    float b=45.67;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c=a+int(b);
    cout<<"The value of c is "<<c<<endl;
    return 0;
}