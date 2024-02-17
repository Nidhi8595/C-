#include<iostream>
using namespace std;
class item
{
    int code,price;
    public:
    void getdata(int a,int b)
    {
        code=a;
        price=b;
    }
    void show()
    {
        cout<<"code"<<code<<endl;
        cout<<"price"<<price<<endl;
    }
};
int main(){
    int size;
    cout<<"Enter the size:";
    cin>>size;
    item *p= new item[size];
    item *d=p;
    int i,x,y;
    for(i=1;i<=size;i++)
    {
        cout<<"Enter the code and price for item "<<i<<endl;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    } 
    for(i=1;i<=size;i++)
    {
        cout<<"Item:"<<i<<endl;
        d->show();
        d++;
    }
    return 0;
}