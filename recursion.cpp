// add all no. till n

#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0){
        return 0;
    }
    int prevSum =sum(n-1);
    return n+ prevSum;
}

int main(){
    int n;
    cin>>n;
  cout<<sum(n)<<"\n";
}
// int main(){
//     int n,sum=0;
    
//     cin>>n;
//     while(n){
//         sum=sum+n;
//         n--;

//     }
//     cout<<"\n sum is:"<<sum;
//     return 0;
// }
