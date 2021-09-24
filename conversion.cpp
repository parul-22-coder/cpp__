#include <iostream>
using namespace std;
int binarytodecimal(int n)
{
    int temp=n;
   int base=1;
   int last,deci=0;
   
   while(temp)
   {
       last=temp%10;
       temp/=10;
       deci += last*base;
       base=base*2;
   }
   return deci;
}
int octaltodecimal(int n)
{
    int temp=n;
   int base=1;
   int last,deci=0;
   
   while(temp)
   {
       last=temp%10;
       temp/=10;
       deci += last*base;
       base=base*8;
   }
   return deci;
}
int hexatodecimal(int n)
{
    int temp=n;
   int base=1;
   int last,deci=0;
   
   while(temp)
   {
       last=temp%10;
       temp/=10;
       deci += last*base;
       base=base*16;
   }
   return deci;
}
int main()
{
   int n;
   
   cin>>n;
   
   cout<<binarytodecimal(n)<<endl;
//    cout<<hexatodecimal(n)<<endl;
   return 0;   
}