#include<iostream>
using namespace std;
//find the minimum element in unsoerted array and swap it with element at begining
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i]){
            int temp =a[j];
            a[j]=a[i];
            a[i]=temp;
            }
           
        }
    
    {
        cout<<a[i]<<" ";
    }
        
    }
    cout<<endl;
    return 0;


}   





//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[i])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }cout<<endl;
    
// }