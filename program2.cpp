#include<iostream>
using namespace std;
class Email{
private:
string password;
protected:
string email;
public:
void emailIns(){
string email,password;
cin>>email;
cin>>password;
this->email=email;
this->password=password;
}
void emailGet(){
cout<<"Email is: "<<this->email<<endl;
}
};
int main(){
Email email1;
cout<<"Enter Email/Password"<<endl;
email1.emailIns();
email1.emailGet();
return 0;
}