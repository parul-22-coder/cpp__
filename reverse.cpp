#include <iostream>
using namespace std;

int main()
{
    int n,rev=0;
    int l;
    cin>>n;
    while(n>0)
    {
        l=n%10;
        rev=rev*10 + l;
        n=n/10;
        
        
    }
    
   cout<<rev<<endl;
    
    return 0;
}