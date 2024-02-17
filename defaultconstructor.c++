#include<iostream>
 using namespace std;
class Age{
public:
int age;


Age(){
age=-1;
}


int disp(){
return age;
}
};


int main(){
Age ag;
cout<<"Default Const Init Value is : "<<ag.disp()<<endl; return 0;
}
