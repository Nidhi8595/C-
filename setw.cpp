#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //setw sets space alignment to right
    int a=3,b=78,c=1235;
    cout<<"The value of a is "<<left<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<right<<setw(7)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;
    return 0;
}