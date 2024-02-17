#include<iostream>
 #include<math.h>

using namespace std;


class Sphere{
private:
float radius;


public:
Sphere(int radius){
this->radius=radius;
}


void surArea(){
cout<<"Surface Area is: "<<(4*3.14*pow(this->radius,2))<<endl;
}
void surVol(){
cout<<"Volume is: "<<((4*3.14*pow(this->radius,3)/3))<<endl;
}
};


int main(){
Sphere s(12.3); s.surArea();
s.surVol(); return 0;
}
