#include<iostream>
using namespace std;

int product(int &,int &);
int main(){
    int a,b,p;
    cout<<"Enter the values to be multiplied "<<endl;
    cin>>a>>b;
    p=product(a,b);
    return 0;
}
int product(int &x,int &y){
    return (x+y);
}