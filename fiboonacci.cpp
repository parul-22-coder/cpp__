#include <iostream>
using namespace std;
void fibo(int n)      //such that 0 1 1 2 3 5 8 13 21......
{  int i,a=0,b=1,result;
    for(i=0;i<n;i++)
    {
        cout<<a<<endl;     
        result=a+b;
        a=b;
        b=result;
       
    }
    return;
  
}
int main()
{
    int n;
    cin>>n;    //number of elements you need in fibonacci form  
    
    fibo(n);    
    return 0;
   
}
