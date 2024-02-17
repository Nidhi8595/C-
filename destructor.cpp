#include <iostream>
 using namespace std;
class parent{
public:
~parent(){
cout<<"Destructor invoked"<<endl;
}
};


class child : public parent{ public:
~child(){
cout<<"Destructor invoked in child class"<<endl;
}
};



int main(){
child c;
 return 0;
}
