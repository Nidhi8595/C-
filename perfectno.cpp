#include<iostream>
using namespace std;
int main()
{
    int n=1,sum=0;
    while(n<=10){
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
            if(sum==n)
            {
                cout<<n<<"is a perfect number"<<endl;
            }
            else{
                cout<<n<<"is not a perfect number"<<endl;
            }
        }
    }
    return 0;
}
