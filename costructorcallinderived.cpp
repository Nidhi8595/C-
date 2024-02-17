#include<iostream>
 using namespace std;
class Animal { public:
string species; string color; string sound;

Animal() {
this->species = ""; this->color = ""; this->sound = "";
}
void setcolor(string color) { this->color = color; } void settype(string species) { this->species = species; } void setsound(string sound) { this->sound = sound; }
};


class Cat : public Animal { public:
string name;
Cat() { this->name = "Cat"; cout<<"Constructor invoked in Cat class"
<<endl; }


void disp()   {
cout << this->name << " : " << this->color << " : " << this->species
<< " : " << this->sound << endl;
}
//~Cat() { cout << "Destructor Invoked for Class cat" << endl; }
};


int main() { Cat objCat;
objCat.setcolor("Black"); objCat.settype("Cat species"); objCat.setsound("MEOW MEOW");

objCat.disp(); return 0;
}


