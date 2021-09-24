#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cin>>n;
    int i;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}