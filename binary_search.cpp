#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=n)
    {
        int mid=(s+e)/2;
        
            if(key==a[mid])
            {
                return mid;
            }
            else if(key>a[mid])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter size of array elements"<<endl;               // input size
    cin>>n;
    int a[n];
    cout<<" enter array elements"<<endl;                       // input elements
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
     for(int i=0;i<n;i++)                                    // print elements
    {
        cout<<a[i]<<" ";;
    }
    cout<<endl;
    int key;
    cin>>key;                                                // input number to search
    cout<<binarysearch(a,n,key)<<endl;
    return 0;
}