#include <iostream>
using namespace std;
bool check(int x,int y,int z)
{  int b,c;
   int a=(max(x,max(y,z)));
   
   if(a==x)
   
   {
     b=y;
     c=z;
   }
   else if(a==y)
   {
       b=x;
       c=z;
   }
   else
   {
       b=y;
       c=x;
   }
   if(a*a==(b*b)+(c*c))
   {
       return true;

   }
   else
   {
        return false;

   }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
     
    if(check(x,y,z))
    {
        cout<<"it is pythagorous triplet";
    }
    else{
        cout<<"not a pythagorous triplet";

    }
    
    return 0;

}