#include<iostream>
using namespace std;

    struct book{
        int id;
        char title[20];
        float price;
    };
    book input();
    void display(book);
    int main(){
        book b1;
        b1=input();
        display(b1);
    }
    book input(){
        book b;
        cout<<"Enter bookid,title,price of the book"<<endl;
        cin>>b.id>>b.title>>b.price;
        return b;
    }    
    void display(book b){
        cout<<"\n"<<b.id<<" "<<b.title<<" "<<b.price<<endl;
    }
