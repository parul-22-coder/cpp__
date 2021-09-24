#include <iostream>
using namespace std;
void print(int num)
{
    cout<<num;
    cout<<endl;
    return;
}
int sum(int num1,int num2)
{
    print(num1);
    print(num2);
    cout<<endl;
    int add =( num1+num2);
    return add;
}

int main()
{
int a,b;
cout<<"enter 1st number";
cin>>a;
cout<<"enter second number";
cin>>b;
cout<<sum(a,b)<<endl;
return 0;
}