#include <iostream>
using namespace std;

int main()
{
    int n,c;
    cin>>n;
    for(c=2;c<n;c++)
    {
        if(n%c==0)
        {
            cout<<"not prime";
            break;
        }
    }
        if(n==c)
        {
            cout<<"prime";
        }
    
        return 0;
}