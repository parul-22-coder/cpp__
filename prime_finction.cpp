#include <iostream>
using namespace std;
#include<math.h>
bool isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        return false;
        }
    }
    return true;
     }

int main(){
    int p,q;
    cout<<"enter two numbers";
    cin>>p>>q;
    int i;
    
    
     for(i=p;i<=q;i++)
    if(isprime(i)){
        cout<<i<<endl;
    }
    
    
    return 0;
}