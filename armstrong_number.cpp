#include <iostream>
using namespace std;

int main()   
{
    int n,rem,sum;
    cin>>n;
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n /=10;

    }
    if(sum==temp)
    {
        cout<<"armstrong number";      //armstrong number is sum of cube of every digit of a number like  152= 1^3 +5^3 +3^3;

    }
    else{
        cout<<"it is not a armstrong number";
    }
    return 0;
}