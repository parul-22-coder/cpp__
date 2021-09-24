#include<iostream>
using namespace std;
int facto(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r,result;
    cin>>n;
    cin>>r;
    // cout<<facto(n)<<endl;
    // cout<<facto(n-r)<<endl;
    // cout<<facto(r)<<endl;
    result = facto(n)/(facto(n-r)*facto(r));
    cout<<result<<endl;
    return 0;
    
}