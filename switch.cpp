#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age:"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You're eighteen"<<endl;
        break;
    case 22:
        cout<<"You're twenty-two"<<endl;
        break;
    default:
        cout<<"No special case"<<endl;
        break;
    }
    return 0;
}