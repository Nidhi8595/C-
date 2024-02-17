#include<iostream>
#include<string>
using namespace std;

struct book{
    int id;
    string title;
    float price;
    void input(){
        cout<<"Enter the id,title and price of book"<<endl;
        cin>>id>>title>>price;
    }
    void display(){
        cout<<"\n"<<id<<" "<<title<<" "<<price;
    }
};
int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}