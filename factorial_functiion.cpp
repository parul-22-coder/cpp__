#include <iostream>
using namespace std;
int facto(int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<facto(n)<<endl;
    return 0;
}