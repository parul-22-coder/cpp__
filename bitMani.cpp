//check if the number is a power of 2


#include<iostream>
using namespace std;
bool ispower2(int n){
    return (n && !(n & n-1));
}
int main()
{
     cout<<ispower2(12)<<endl;
        return 0;
}
