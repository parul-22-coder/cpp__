#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
    if(a[i]==key)
    {
        return i;
    }
    
   return -1;
    }
       
    
    
}
int main(){
    int n;
    cout<<"enter size of array elements"<<endl;
    cin>>n;
    int a[n];
    cout<<" enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";;
    }
    cout<<endl;
    int key;
    cin>>key;
    cout<<linearsearch(a,n,key)<<endl;
    return 0;
}
