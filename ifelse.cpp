#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age:"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You can't come to party!"<<endl;
    }
    else if(age==18){
         cout<<"You're a kid & will get a kid pass"<<endl;
    }
    else
    {
        cout<<"You can come to party"<<endl;
    }    
    return 0;
}