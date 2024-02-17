#include<iostream>
using namespace std;
void test(){
    int v[3]={10,100,200};
    int *ptr;
    int i;
    ptr=v;
    for(i=0;i<3;i++)
    {
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        ptr++;
    }
}
int main(){
    test();
    return 0;
}