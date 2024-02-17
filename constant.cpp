#include<iostream>
using namespace std;
int main()
{
    int a=34;
    cout<<"The valueof a was "<<a<<endl;
    a=49;
    cout<<"The value of a is "<<a<<endl;
    const int b=3;
    cout<<"The value of b is "<<b<<endl;
    //b=67;
    //cout<<"The value of b is "<<b<<endl;
    //the value of a variable declared as constant can't be modified
    return 0;
}