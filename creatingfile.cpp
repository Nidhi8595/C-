#include<iostream> 
#include<fstream>

using namespace std; int main(){
fstream af; af.open("test.txt",ios::out); if(!af){
cout<<"File Not created"<<endl;
}
cout<<"File created succesfully"<<endl;


return 0;
}
