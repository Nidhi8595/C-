#include<iostream>
using namespace std;

int sum(int,int);
int main()
{
    int a,b,s;
    cout<<"Enter the values to be added "<<endl;
    cin>>a>>b;
    s=sum(a,b);
    cout<<"The sum is "<<s<<endl;
    return 0;
}
int sum(int x,int y)
{
    return (x+y);
}
