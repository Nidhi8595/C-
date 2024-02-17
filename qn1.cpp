#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    char sub[3][10]={"Maths","Physics","Chemistry"};
    char marks[3][3]={"90","77","69"};
    for(int i=0;i<3;i++)
    {
        cout<<left<<setw(9)<<sub[i]<<"="<<left<<setw(2)<<marks[i]<<endl;
    }
    return 0;
}