#include<iostream>
 #include<fstream> 
 using namespace std; int main(){
fstream af; af.open("test.txt",ios::app);

string line="Hello this is SIRI!";


af<<line<<endl; af.close();
cout<<"Sucessful"<<endl; return 0;

}
