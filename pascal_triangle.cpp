#include<iostream>
using namespace std;
int facto(int m)
{
    int i,fact=1;
    for(i=m;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int i,j,n,result;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            
            cout<<facto(i)/(facto(i-j)*facto(j))<<" ";
            
        }
        cout<<endl;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    return 0;
}