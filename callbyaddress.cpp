#include<iostream>
using namespace std;

int product(int*,int*);
int main(){
    int a=9,b=6;
    int s=product(&a,&b);
    cout<<"The product  is "<<s<<endl;
    return 0;
}
int product(int* x,int* y){
    return (*x+*y);
}